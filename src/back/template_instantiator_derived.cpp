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

#include "template_instantiator_derived.h"


string RootTemplateInstantiator::placeholder( Placeholder ph )
{
	switch( ph.id )
	{
		default:
		{
			return TemplateInstantiator::placeholder( ph );
		}
	}
}

void RootTemplateInstantiator::execBuiltinFunction( Stack& stack, PREDEFINED_FUNCTION fnID )
{
	switch ( fnID )
	{
		case PREDEFINED_FUNCTION::PUBLISHABLE_STRUCTS:
		{
			StackElement elem;
			elem.argtype = ARGTYPE::OBJPTR_LIST;
			for ( auto& it:root->structures )
			{
				StructTemplateInstantiator* structti = new StructTemplateInstantiator( *it, templateSpace, outstr );
				elem.objects.push_back( unique_ptr<TemplateInstantiator>(structti) );
			}
			stack.push_back( std::move(elem) );
			break;
		}
		default:
		{
			TemplateInstantiator::execBuiltinFunction( stack, fnID );
			break;
		}
	}
}

/////////////////////////////////////////////////////////////////////////


string StructTemplateInstantiator::placeholder( Placeholder ph )
{
	switch( ph.id )
	{
		case PLACEHOLDER::STRUCT_NAME:
		{
			return structure->name;
		}
		default:
		{
			return TemplateInstantiator::placeholder( ph );
		}
	}
}

void StructTemplateInstantiator::execBuiltinFunction( Stack& stack, PREDEFINED_FUNCTION fnID )
{
	switch ( fnID )
	{
		case PREDEFINED_FUNCTION::MEMBERS:
		{
			StackElement elem;
			elem.argtype = ARGTYPE::OBJPTR_LIST;
			size_t memberCnt = structure->getChildCount();
			for ( size_t j=0; j<memberCnt; j++ )
			{
				BackDataMember* member = dynamic_cast<BackDataMember*>( structure->getMember( j ) );
				if ( member != NULL )
				{
					StructMemberTemplateInstantiator* smti = new StructMemberTemplateInstantiator( *member, templateSpace, outstr );
					elem.objects.push_back( unique_ptr<TemplateInstantiator>(smti) );
				}
				else
				{
					// TODO: this case requires additional analysis
					assert( 0 );
				}
			}
			stack.push_back( std::move(elem) );
			break;
		}
		default:
		{
			TemplateInstantiator::execBuiltinFunction( stack, fnID );
			break;
		}
	}
}

/////////////////////////////////////////////////////////////////////////


string StructMemberTemplateInstantiator::placeholder( Placeholder ph )
{
	switch( ph.id )
	{
		case PLACEHOLDER::MEMBER_NAME:
		{
			return member->name;
		}
		case PLACEHOLDER::MEMBER_TYPE:
		{
			return member->type.name;
		}
		default:
		{
			return TemplateInstantiator::placeholder( ph );
		}
	}
}

void StructMemberTemplateInstantiator::execBuiltinFunction( Stack& stack, PREDEFINED_FUNCTION fnID )
{
	switch ( fnID )
	{
		case PREDEFINED_FUNCTION::MEMBER_TYPE:
		{
			StackElement elem;
			elem.argtype = ARGTYPE::OBJPTR;
			DataType* memberType = new DataType( member->type );
			if ( memberType != NULL )
			{
				MemberTypeTemplateInstantiator* mtti = new MemberTypeTemplateInstantiator( *memberType, templateSpace, outstr );
				elem.singleObject = unique_ptr<TemplateInstantiator>(mtti);
			}
			else
			{
				// TODO: this case requires additional analysis
				assert( 0 );
			}
			stack.push_back( std::move(elem) );
			break;
		}
		default:
		{
			TemplateInstantiator::execBuiltinFunction( stack, fnID );
			break;
		}
	}
}

/////////////////////////////////////////////////////////////////////////


string MemberTypeTemplateInstantiator::placeholder( Placeholder ph )
{
	switch( ph.id )
	{
		case PLACEHOLDER::MEMBER_TYPE:
		{
			return dataType->name;
		}
		default:
		{
			return TemplateInstantiator::placeholder( ph );
		}
	}
}

void MemberTypeTemplateInstantiator::execBuiltinFunction( Stack& stack, PREDEFINED_FUNCTION fnID )
{
	switch ( fnID )
	{
		case PREDEFINED_FUNCTION::COLLECTION_TYPE:
		{
			StackElement elem;
			elem.argtype = ARGTYPE::OBJPTR;
			assert( dataType->kind == DataType::KIND::SEQUENCE || dataType->kind == DataType::KIND::DICTIONARY );
			MemberTypeTemplateInstantiator* mtti = new MemberTypeTemplateInstantiator( *(dataType->paramType), templateSpace, outstr );
			elem.singleObject = unique_ptr<TemplateInstantiator>(mtti);
			stack.push_back( std::move(elem) );
			break;
		}
		case PREDEFINED_FUNCTION::COLLECTION_TYPE2:
		{
			StackElement elem;
			elem.argtype = ARGTYPE::OBJPTR;
			assert( dataType->kind == DataType::KIND::DICTIONARY );
			MemberTypeTemplateInstantiator* mtti = new MemberTypeTemplateInstantiator( *(dataType->keyType), templateSpace, outstr );
			elem.singleObject = unique_ptr<TemplateInstantiator>(mtti);
			stack.push_back( std::move(elem) );
			break;
		}
		case PREDEFINED_FUNCTION::ENUM_VALUES:
		{
			StackElement elem;
			elem.argtype = ARGTYPE::OBJPTR_LIST;
			for ( auto it:dataType->enumValues )
			{
				EnumValueTemplateInstantiator* evti = new EnumValueTemplateInstantiator( it.first, it.second, templateSpace, outstr );
				elem.objects.push_back( unique_ptr<TemplateInstantiator>(evti) );
			}
			stack.push_back( std::move(elem) );
			break;
		}
		// type-related
		// NOTE: this list is subject to change (see issue #52, for instance)
		// TODO: update as necessary
		case PREDEFINED_FUNCTION::IS_PRIMITIVE_DOUBLE:
		{
			StackElement elem;
			elem.argtype = ARGTYPE::BOOL;
			elem.boolValue = dataType->kind == DataType::KIND::PRIMITIVE &&dataType->name == "DOUBLE";
			stack.push_back( std::move(elem) );
			break;
		}
		case PREDEFINED_FUNCTION::IS_PRIMITIVE_INTEGER:
		{
			StackElement elem;
			elem.argtype = ARGTYPE::BOOL;
			elem.boolValue = dataType->kind == DataType::KIND::PRIMITIVE && ( dataType->name == "INTEGER" || dataType->name == "UINT16" );
			stack.push_back( std::move(elem) );
			break;
		}
		case PREDEFINED_FUNCTION::IS_STRUCTURE:
		{
			StackElement elem;
			elem.argtype = ARGTYPE::BOOL;
			elem.boolValue = dataType->kind == DataType::KIND::NAMED_TYPE;
			stack.push_back( std::move(elem) );
			break;
		}
		case PREDEFINED_FUNCTION::IS_ENUM:
		{
			StackElement elem;
			elem.argtype = ARGTYPE::BOOL;
			elem.boolValue = dataType->kind == DataType::KIND::ENUM;
			stack.push_back( std::move(elem) );
			break;
		}
		case PREDEFINED_FUNCTION::IS_SEQUENCE:
		{
			StackElement elem;
			elem.argtype = ARGTYPE::BOOL;
			elem.boolValue = dataType->kind == DataType::KIND::SEQUENCE;
			stack.push_back( std::move(elem) );
			break;
		}
		case PREDEFINED_FUNCTION::IS_DICTIONARY:
		{
			StackElement elem;
			elem.argtype = ARGTYPE::BOOL;
			elem.boolValue = dataType->kind == DataType::KIND::DICTIONARY;
			stack.push_back( std::move(elem) );
			break;
		}
		case PREDEFINED_FUNCTION::IS_PARAMETRIZED_DOUBLE:
		{
			StackElement elem;
			elem.argtype = ARGTYPE::BOOL;
			elem.boolValue = dataType->kind == DataType::KIND::LIMITED_PRIMITIVE && dataType->name == "NUMERIC";
			stack.push_back( std::move(elem) );
			break;
		}
		default:
		{
			TemplateInstantiator::execBuiltinFunction( stack, fnID );
			break;
		}
	}
}

/////////////////////////////////////////////////////////////////////////


string EnumValueTemplateInstantiator::placeholder( Placeholder ph )
{
	switch( ph.id )
	{
		case PLACEHOLDER::ENUM_VALUE_NAME:
		{
			return name;
		}
		case PLACEHOLDER::ENUM_VALUE_VALUE:
		{
			return fmt::format( "{}", value );
		}
		default:
		{
			return TemplateInstantiator::placeholder( ph );
		}
	}
}

void EnumValueTemplateInstantiator::execBuiltinFunction( Stack& stack, PREDEFINED_FUNCTION fnID )
{
	switch ( fnID )
	{
		default:
		{
			TemplateInstantiator::execBuiltinFunction( stack, fnID );
			break;
		}
	}
}

/////////////////////////////////////////////////////////////////////////


void apply( BackRoot& structure, TemplateNodeSpace& templateSpace )
{
	RootTemplateInstantiator rti( structure, templateSpace, nullptr );
	rti.apply();
}
