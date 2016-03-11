/*******************************************************************************
Copyright (C) 2016 OLogN Technologies AG

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

#ifndef TEMPLATE_LINE_TOKENIZER_H
#define TEMPLATE_LINE_TOKENIZER_H

#include "../idlc_include.h"
#include "template_line_tokenizer.h"

using namespace std;

enum ATTRIBUTE
{
	NONE,
	TEXT, // implicit (used with verbatim lines)
	BEGIN,
	END,
	TEMPLATE,
	NAME,
	FILENAME,
	PARAM,
	TYPE,
};

enum NODE_TYPE {
	FULL_TEMPLATE,
	CONTENT,
	IF,
	INCLUDE,
	ASSERT,
	IF_TRUE_BRANCH,
	IF_FALSE_BRANCH,

	FOR_EACH_OF_MEMBERS, // used ONLY within STRUCT
	OPEN_OUTPUT_FILE,
	FOR_EACH_PUBLISHABLE_STRUCT,
};

enum PLACEHOLDER {
	VERBATIM,
	STRUCT_NAME, // used ONLY within STRUCT or down the tree
	MEMBER_TYPE, // used ONLY within STRUCT-MEMBER
	MEMBER_NAME, // used ONLY within STRUCT-MEMBER
};

struct LinePart
{
	PLACEHOLDER type;
	string verbatim;
};

struct ExpressionElement
{
	enum OPERATION { PUSH, EQ, NEQ };
    enum ARGTYPE {NONE, PLACEHOLDER, NUMBER, STRING};
	OPERATION oper;
    ARGTYPE argtype = NONE; // for operation PUSH: any but NONE
	// values below are used in case of PUSH operation
    double numberValue = 0; // argtype: NUMBER
    string stringValue; // argtype: STRING
	::PLACEHOLDER placeholder; // argtype: PLACEHOLDER
};

class AttributeName
{
public:
	ATTRIBUTE id;
	string ext;

	AttributeName() {}
	AttributeName( ATTRIBUTE id_, const string& ext_ ) : id ( id_ ), ext( ext_ ) {}
	bool operator < ( const AttributeName& other ) const
	{
		if ( id < other.id ) return true;
		return ext < other.ext;
	}
};

struct TemplateLine
{
	enum LINE_TYPE {
		CONTENT = 0,
		BEGIN_TEMPLATE,
		END_TEMPLATE,
		IF,
		ELSE,
		ELIF,
		ENDIF,
		INCLUDE,
		ASSERT,
		FOR_EACH_OF_MEMBERS, // used ONLY within STRUCT
		OPEN_OUTPUT_FILE,
		FOR_EACH_PUBLISHABLE_STRUCT,
		CLOSE_OUTPUT_FILE,

		ELIF_TO_IF, // derived
	};

	LINE_TYPE type;
	int srcLineNum;
	map<AttributeName, vector<LinePart>> attributes;
//	map<ATTRIBUTE, string> map;
	vector<ExpressionElement> expression; // used only for NODE_TYPE::IF(ELIF) and NODE_TYPE::ASSERT
};

bool tokenizeTemplateLines( istream& tf, vector<TemplateLine>& templateLines, int& currentLineNum );


#endif // TEMPLATE_LINE_TOKENIZER_H