// idl.cpp : Defines the entry point for the console application.
//

#include "../../front-back/idl_tree.h"
#include "parser.h"

int main()
{
	Root result;
	parseSourceFile("sample.idl", true, &result);

    return 0;
}
