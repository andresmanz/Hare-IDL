/*******************************************************************************
Copyright (C) 2016  OLogN Technologies AG
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2 as
    published by the Free Software Foundation.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*******************************************************************************/

#ifndef BASELIB_H
#define BASELIB_H

#include <iostream>
#include <memory>
#include <vector>
#include <assert.h>
#include <stdio.h>
#include <string>
using namespace std;

#ifdef _MSC_VER
#define LIKELY_BRANCH_( X ) (X)
#else
#define LIKELY_BRANCH_( X ) __builtin_expect( (X), 1 )
#endif


#if _MSC_VER
#define ALIGN(n)      __declspec(align(n))
#define NOINLINE      __declspec(noinline)
#define FORCE_INLINE	__forceinline
#elif __GNUC__
#define NOINLINE      __attribute__ ((noinline))
#define	FORCE_INLINE inline __attribute__((always_inline))
#define ALIGN(n)      __attribute__ ((aligned(n))) 
#else
#define	FORCE_INLINE inline
#define NOINLINE
#define ALIGN(n)
#warning ALIGN, FORCE_INLINE and NOINLINE may not be properly defined
#endif

enum WIRE_TYPE
{
	VARINT = 0,
	FIXED_64_BIT = 1,
	LENGTH_DELIMITED = 2,
	START_GROUP = 3,
	END_GROUP = 4,
	FIXED_32_BIT = 5,
};

uint8_t* deserializeHeaderFromString( int& fieldNumber, int& type, uint8_t* buff );

uint8_t* serializeToStringVariantUint64( uint64_t value, uint8_t* buff );
uint8_t* deserializeFromStringVariantUint64( uint64_t& value, uint8_t* buff );

uint8_t* serializeLengthDelimitedToString( int fieldNumber, const uint8_t* valueStr, size_t valueSize, uint8_t* buff );
uint8_t* serializeLengthDelimitedToString( int fieldNumber, std::string& value, uint8_t* buff );
uint8_t* deserializeLengthDelimitedFromString( uint8_t* valueStr, size_t& valueSize, uint8_t* buff );
uint8_t* deserializeLengthDelimitedFromString( std::string& value, uint8_t* buff );

///////////////////////////   WIRE_TYPE::VARINT      ////////////////////////////////////

uint8_t* serializeUnsignedVariantToString( int fieldNumber, uint64_t value, uint8_t* buff );
uint8_t* serializeSignedVariantToString( int fieldNumber, int64_t value, uint8_t* buff );
uint8_t* deserializeSignedVariantFromString( int64_t& value, uint8_t* buff );
uint8_t* deserializeUnsignedVariantFromString( uint64_t& value, uint8_t* buff );

///////////////////////////   WIRE_TYPE::FIXED_64_BIT      ////////////////////////////////////

uint8_t* serializeUnsignedFixed64ToString( int fieldNumber, uint64_t value, uint8_t* buff );
uint8_t* serializeSignedFixed64ToString( int fieldNumber, int64_t value, uint8_t* buff );
uint8_t* serializeDoubleToString( int fieldNumber, double value, uint8_t* buff );
uint8_t* deserializeUnsignedFixed64FromString( uint64_t& value, uint8_t* buff );
uint8_t* deserializeSignedFixed64FromString( int64_t& value, uint8_t* buff );
uint8_t* deserializeDoubleFromString( double& value, uint8_t* buff );

///////////////////////////     WIRE_TYPE::FIXED_32_BIT    ////////////////////////////////////

uint8_t* serializeUnsignedFixed32ToString( int fieldNumber, uint32_t value, uint8_t* buff );
uint8_t* serializeSignedFixed64ToString( int fieldNumber, int32_t value, uint8_t* buff );
uint8_t* serializeDoubleToString( int fieldNumber, float value, uint8_t* buff );
uint8_t* deserializeUnsignedFixed32FromString( uint32_t& value, uint8_t* buff );
uint8_t* deserializeSignedFixed32FromString( int32_t& value, uint8_t* buff );
uint8_t* deserializeDoubleFromString( float& value, uint8_t* buff );

///////////////////////////     WIRE_TYPE::LENGTH_DELIMITED    ////////////////////////////////////

uint8_t* serializeToStringKnownLength( const uint8_t* valueBytes, size_t valueSize, uint8_t* buff );
uint8_t* deserializeFromStringKnownLength( uint8_t* valueBytes, size_t valueSize, uint8_t* buff );
uint8_t* serializeLengthDelimitedToString( int fieldNumber, const uint8_t* valueStr, size_t valueSize, uint8_t* buff );
uint8_t* serializeLengthDelimitedToString( int fieldNumber, std::string& value, uint8_t* buff );
uint8_t* deserializeLengthDelimitedFromString( uint8_t* valueStr, size_t& valueSize, uint8_t* buff );
uint8_t* deserializeLengthDelimitedFromString( std::string& value, uint8_t* buff );




class OStream
{
protected:
	FILE* outstr;
public:
	OStream( FILE* outStr ) : outstr( outStr ) {}
	void writeInt( int fieldNumber, int x )
	{
		uint8_t buff[1000];
		uint8_t* ret = serializeSignedVariantToString( fieldNumber, x, buff );
		fwrite( buff, ret - buff, 1, outstr );
	}
	void writeDouble( int fieldNumber, double x )
	{
		uint8_t buff[1000];
		uint8_t* ret = serializeDoubleToString( fieldNumber, x, buff );
		fwrite( buff, ret - buff, 1, outstr );
	}
	void writeString( int fieldNumber, std::string x )
	{
		uint8_t buff[1000];
		uint8_t* ret = serializeLengthDelimitedToString( fieldNumber, x, buff );
		fwrite( buff, ret - buff, 1, outstr );
	}
};

#if 0
class IStream
{
protected:
	FILE* instr;
public:
	IStream( FILE* inStr ) : instr( inStr ) {}
	bool readFieldTypeAndID( int& type, int& fieldNumber )
	{
		uint8_t buff[12];
		memset( buff, 0, 12 );
		int pos = 0;
		size_t readret;
		for (;;)
		{
			readret = fread( buff + pos, 1, 1, instr );
			if ( readret == 0 )
				return false; // nothing to read (anymore); TODO: think about incomplete/broken packet
			if ( ( buff[pos] & 0x80 ) == 0 )
			{
				deserializeHeaderFromString( fieldNumber, type, buff );
				return true;
			}
			++pos;
		}
		return false; // TODO: think about incomplete/broken packet
	}
	bool readInt32( int32_t& x )
	{
		uint8_t buff[4];
		size_t readret = fread( buff, 1, 4, instr );
		if ( readret < 4 )
			return false;
		deserializeSignedFixed32FromString( x, buff );
		return true;
	}
	bool readInt64( int64_t& x )
	{
		uint8_t buff[8];
		size_t readret = fread( buff, 1, 8, instr );
		if ( readret < 8 )
			return false;
		deserializeSignedFixed64FromString( x, buff );
		return true;
	}
#if 0
	bool readVariantInt32( int32_t& x )
	{
		uint8_t buff[4];
		size_t readret = fread( buff, 1, 4, instr );
		if ( readret < 4 )
			return false;
		deserializeSignedVariantFromString( x, buff );
		return true;
	}
#endif // 0
	bool readVariantInt64( int64_t& x )
	{
		uint8_t buff[12];
		memset( buff, 0, 12 );
		int pos = 0;
		size_t readret;
		uint32_t stringSz = 0;
		for (;;)
		{
			readret = fread( buff + pos, 1, 1, instr );
			if ( readret == 0 )
				return false; // nothing to read (anymore); TODO: think about incomplete/broken packet
			if ( ( buff[pos] & 0x80 ) == 0 )
			{
				deserializeSignedVariantFromString( x, buff );
				break;
			}
			++pos;
		}
		return true;
	}
#if 0
	bool readInt64( int64_t& x )
	{
		uint8_t buff[1000];
		uint8_t* ret = serializeUnsignedVariantToString( fieldNumber, x, buff );
		fwrite( buff, ret - buff, 1, outstr );
	}
	bool readDouble( double& x )
	{
		uint8_t buff[1000];
		uint8_t* ret = serializeDoubleToString( fieldNumber, x, buff );
		fwrite( buff, ret - buff, 1, outstr );
	}
#endif
	bool readString( std::string& x )
	{
		uint8_t buff[12];
		memset( buff, 0, 12 );
		int pos = 0;
		size_t readret;
		uint64_t stringSz = 0;
		for (;;)
		{
			readret = fread( buff + pos, 1, 1, instr );
			if ( readret == 0 )
				return false; // nothing to read (anymore); TODO: think about incomplete/broken packet
			if ( ( buff[pos] & 0x80 ) == 0 )
			{
				deserializeUnsignedVariantFromString( stringSz, buff );
				break;
			}
			++pos;
		}

		for ( ; stringSz; --stringSz )
		{
			readret = fread( buff, 1, 1, instr );
			if ( readret == 0 )
				return false; // incmplete or broken record
			x.push_back( buff[0] );
		}

		return true;
	}
};

#else

class IStream
{
protected:
	uint8_t* instr;
	size_t buffSz;
	size_t readPos;
	size_t readData( uint8_t* buff, size_t cnt )
	{
		if ( readPos + cnt <= buffSz )
		{
			memcpy( buff, instr +readPos, cnt );
			readPos += cnt;
			return cnt;
		}
		else
		{
			cnt = buffSz - readPos;
			memcpy( buff, instr +readPos, cnt );
			readPos += cnt;
			return cnt;
		}
	}
public:
	IStream( uint8_t* inStr, size_t buffSz_ ) : instr( inStr ), buffSz( buffSz_ ) { readPos = 0; }
	bool readFieldTypeAndID( int& type, int& fieldNumber )
	{
		uint8_t buff[12];
//		memset( buff, 0, 12 );
		int pos = 0;
		size_t readret;
		for (;;)
		{
//			readret = fread( buff + pos, 1, 1, instr );
			readret = readData( buff + pos, 1 );
			if ( readret == 0 )
				return false; // nothing to read (anymore); TODO: think about incomplete/broken packet
			if ( ( buff[pos] & 0x80 ) == 0 )
			{
				deserializeHeaderFromString( fieldNumber, type, buff );
				return true;
			}
			++pos;
		}
		return false; // TODO: think about incomplete/broken packet
	}
	bool readFieldTypeAndID( uint64_t& typeAndFieldNumber )
	{
		uint8_t buff[12];
//		memset( buff, 0, 12 );
		int pos = 0;
		size_t readret;
		for (pos;pos<12;++pos)
		{
//			readret = fread( buff + pos, 1, 1, instr );
			readret = readData( buff + pos, 1 );
			if ( readret == 0 )
				return false; // nothing to read (anymore); TODO: think about incomplete/broken packet
			if ( ( buff[pos] & 0x80 ) == 0 )
			{
				deserializeFromStringVariantUint64( typeAndFieldNumber, buff );
				return true;
			}
		}
		return false; // TODO: think about incomplete/broken packet
	}
	bool readInt32( int32_t& x )
	{
		uint8_t buff[4];
//		size_t readret = fread( buff, 1, 4, instr );
		size_t readret = readData( buff, 4 );
		if ( readret < 4 )
			return false;
		deserializeSignedFixed32FromString( x, buff );
		return true;
	}
	bool readInt64( int64_t& x )
	{
		uint8_t buff[8];
//		size_t readret = fread( buff, 1, 8, instr );
		size_t readret = readData( buff, 8 );
		if ( readret < 8 )
			return false;
		deserializeSignedFixed64FromString( x, buff );
		return true;
	}
#if 0
	bool readVariantInt32( int32_t& x )
	{
		uint8_t buff[4];
		size_t readret = fread( buff, 1, 4, instr );
		if ( readret < 4 )
			return false;
		deserializeSignedVariantFromString( x, buff );
		return true;
	}
#endif // 0
	bool readVariantInt64( int64_t& x )
	{
		uint8_t buff[12];
		memset( buff, 0, 12 );
		int pos = 0;
		size_t readret;
		uint32_t stringSz = 0;
		for (;;)
		{
//			readret = fread( buff + pos, 1, 1, instr );
			readret = readData( buff + pos, 1 );
			if ( readret == 0 )
				return false; // nothing to read (anymore); TODO: think about incomplete/broken packet
			if ( ( buff[pos] & 0x80 ) == 0 )
			{
				deserializeSignedVariantFromString( x, buff );
				break;
			}
			++pos;
		}
		return true;
	}
#if 0
	bool readInt64( int64_t& x )
	{
		uint8_t buff[1000];
		uint8_t* ret = serializeUnsignedVariantToString( fieldNumber, x, buff );
		fwrite( buff, ret - buff, 1, outstr );
	}
	bool readDouble( double& x )
	{
		uint8_t buff[1000];
		uint8_t* ret = serializeDoubleToString( fieldNumber, x, buff );
		fwrite( buff, ret - buff, 1, outstr );
	}
#endif
	bool readString( std::string& x )
	{
		uint8_t buff[12];
		memset( buff, 0, 12 );
		int pos = 0;
		size_t readret;
		uint64_t stringSz = 0;
		for (;;)
		{
//			readret = fread( buff + pos, 1, 1, instr );
			readret = readData( buff + pos, 1 );
			if ( readret == 0 )
				return false; // nothing to read (anymore); TODO: think about incomplete/broken packet
			if ( ( buff[pos] & 0x80 ) == 0 )
			{
				deserializeUnsignedVariantFromString( stringSz, buff );
				break;
			}
			++pos;
		}

#if 1
		x.resize( stringSz + 1 );
		uint8_t* strBuff = reinterpret_cast<uint8_t*>(const_cast<char*>(x.c_str()));
		strBuff[stringSz] = 0;
		return readret == readData( strBuff, stringSz );
#else
		for ( ; stringSz; --stringSz )
		{
//			readret = fread( buff, 1, 1, instr );
			readret = readData( buff, 1 );
			if ( readret == 0 )
				return false; // incmplete or broken record
			x.push_back( buff[0] );
		}

		return true;
#endif // 1/0
	}
};

#endif // 0

#endif // BASELIB_H

