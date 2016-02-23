
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 33 "hare-idl.y"

#include "parser_helper.h"
extern int yylex();


/* Line 189 of yacc.c  */
#line 79 "hare-idl.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KW_PUBLISHABLE_STRUCT = 258,
     KW_ENUM = 259,
     KW_CLASS = 260,
     KW_MAPPING = 261,
     KW_ENCODING = 262,
     KW_NUMERIC = 263,
     KW_INT = 264,
     KW_SEQUENCE = 265,
     KW_FIXED_POINT = 266,
     KW_BIT = 267,
     KW_EXTEND = 268,
     KW_TO = 269,
     KW_DEFAULT = 270,
     KW_FENCE = 271,
     IDENTIFIER = 272,
     STRING_LITERAL = 273,
     INTEGER_LITERAL = 274,
     CHAR_LITERAL = 275,
     FLOAT_LITERAL = 276
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 142 "hare-idl.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   188

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNRULES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   276

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      25,    26,     2,     2,    29,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    23,
      31,    27,    32,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    28,     2,    30,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    22,     2,    24,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    17,    22,    27,
      31,    39,    44,    49,    53,    61,    64,    67,    70,    74,
      78,    85,    89,    96,   102,   108,   111,   117,   120,   123,
     126,   129,   135,   138,   144,   146,   148,   150,   152,   154,
     156,   158,   165,   172,   179,   186,   193,   200,   207,   214,
     219,   224,   229,   232,   238,   242,   248,   250,   254,   256,
     260,   262,   264
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      34,     0,    -1,    -1,    34,    36,    -1,    34,    38,    -1,
      34,    40,    -1,     3,    17,    22,    -1,    35,    44,    17,
      23,    -1,    35,    17,    17,    23,    -1,    35,    24,    23,
      -1,     6,    25,    53,    26,     3,    17,    22,    -1,    37,
      44,    17,    23,    -1,    37,    17,    17,    23,    -1,    37,
      24,    23,    -1,     7,    25,    18,    26,     3,    17,    22,
      -1,    39,    41,    -1,    39,    43,    -1,    39,    16,    -1,
      39,    24,    23,    -1,    44,    17,    23,    -1,    44,    17,
      15,    27,    55,    23,    -1,    17,    17,    23,    -1,    17,
      17,    15,    27,    55,    23,    -1,    13,    17,    14,    44,
      23,    -1,    13,    17,    14,    17,    23,    -1,    17,    22,
      -1,    17,    25,    54,    26,    22,    -1,    42,    41,    -1,
      42,    43,    -1,    42,    24,    -1,    17,    41,    -1,    17,
      25,    54,    26,    41,    -1,    17,    43,    -1,    17,    25,
      54,    26,    43,    -1,    45,    -1,    46,    -1,    49,    -1,
      51,    -1,    50,    -1,    48,    -1,    47,    -1,     8,    28,
      55,    29,    55,    30,    -1,     8,    25,    55,    29,    55,
      30,    -1,     8,    28,    55,    29,    55,    26,    -1,     8,
      25,    55,    29,    55,    26,    -1,     9,    28,    55,    29,
      55,    30,    -1,     9,    25,    55,    29,    55,    30,    -1,
       9,    28,    55,    29,    55,    26,    -1,     9,    25,    55,
      29,    55,    26,    -1,    11,    25,    55,    26,    -1,    12,
      25,    55,    26,    -1,    10,    31,    17,    32,    -1,     5,
      17,    -1,     4,    17,    22,    52,    24,    -1,    17,    27,
      19,    -1,    52,    29,    17,    27,    19,    -1,    18,    -1,
      53,    29,    18,    -1,    55,    -1,    54,    29,    55,    -1,
      19,    -1,    21,    -1,    17,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    40,    40,    41,    42,    43,    47,    48,    49,    53,
      57,    58,    59,    63,    67,    68,    69,    70,    74,    78,
      79,    80,    81,    82,    83,    87,    88,    89,    90,    94,
      95,    96,    97,    98,   102,   103,   104,   105,   106,   107,
     108,   112,   113,   114,   115,   119,   120,   121,   122,   126,
     130,   134,   138,   142,   146,   147,   151,   152,   156,   157,
     161,   162,   163
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_PUBLISHABLE_STRUCT", "KW_ENUM",
  "KW_CLASS", "KW_MAPPING", "KW_ENCODING", "KW_NUMERIC", "KW_INT",
  "KW_SEQUENCE", "KW_FIXED_POINT", "KW_BIT", "KW_EXTEND", "KW_TO",
  "KW_DEFAULT", "KW_FENCE", "IDENTIFIER", "STRING_LITERAL",
  "INTEGER_LITERAL", "CHAR_LITERAL", "FLOAT_LITERAL", "'{'", "';'", "'}'",
  "'('", "')'", "'='", "'['", "','", "']'", "'<'", "'>'", "$accept",
  "file", "publishable_struct_begin", "publishable_struct",
  "mapping_begin", "mapping", "encoding_begin", "encoding", "data_element",
  "data_group_begin", "data_group", "data_type", "numeric_type",
  "int_type", "fixed_point_type", "bit_type", "sequence_type",
  "class_ref_type", "inline_enum_type", "enum_values", "str_list",
  "arg_list", "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   123,    59,   125,    40,    41,    61,    91,    44,
      93,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    34,    34,    34,    35,    35,    35,    36,
      37,    37,    37,    38,    39,    39,    39,    39,    40,    41,
      41,    41,    41,    41,    41,    42,    42,    42,    42,    43,
      43,    43,    43,    43,    44,    44,    44,    44,    44,    44,
      44,    45,    45,    45,    45,    46,    46,    46,    46,    47,
      48,    49,    50,    51,    52,    52,    53,    53,    54,    54,
      55,    55,    55
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     3,     4,     4,     3,
       7,     4,     4,     3,     7,     2,     2,     2,     3,     3,
       6,     3,     6,     5,     5,     2,     5,     2,     2,     2,
       2,     5,     2,     5,     1,     1,     1,     1,     1,     1,
       1,     6,     6,     6,     6,     6,     6,     6,     6,     4,
       4,     4,     2,     5,     3,     5,     1,     3,     1,     3,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     3,     0,     4,
       0,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    40,    39,    36,
      38,    37,     0,     0,     0,     0,    17,     0,     0,    15,
       0,    16,     0,     6,    56,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     9,     0,     0,
      13,     0,     0,     0,    25,     0,    30,    32,    18,    29,
      27,    28,     0,     0,     0,     0,     0,    62,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     8,     7,    12,
      11,     0,     0,    21,     0,    58,     0,    19,     0,    57,
       0,     0,     0,     0,     0,     0,     0,    51,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,     0,     0,     0,     0,    24,    23,     0,    26,    31,
      33,    59,     0,    10,    14,    54,     0,    44,    42,    43,
      41,    48,    46,    47,    45,    22,    20,     0,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     6,     7,     8,     9,    10,    11,    66,    40,
      67,    42,    25,    26,    27,    28,    29,    30,    31,   102,
      45,    94,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -46
static const yytype_int16 yypact[] =
{
     -46,    45,   -46,    -3,     1,    18,   116,   -46,   127,   -46,
      89,   -46,     0,    32,    37,    39,    46,    40,    57,    23,
      48,    49,    47,    58,    66,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,    69,    72,    73,    79,   -46,    67,    84,   -46,
     106,   -46,    91,   -46,   -46,    62,    96,   107,   -46,     6,
       6,     6,     6,   117,     6,     6,   120,   -46,   129,   130,
     -46,   132,   142,    24,   -46,     6,   -46,   -46,   -46,   -46,
     -46,   -46,    -2,   154,   140,   157,   144,   -46,   -46,   -46,
     133,   134,   135,   136,   138,   141,   143,   -46,   -46,   -46,
     -46,     7,   139,   -46,    83,   -46,   145,   -46,   151,   -46,
     156,   147,   -21,     6,     6,     6,     6,   -46,   -46,   -46,
     148,   152,     6,   137,     6,     6,   155,   158,   159,   -46,
     162,    12,    14,    27,    36,   -46,   -46,   153,   -46,   -46,
     -46,   -46,   160,   -46,   -46,   -46,   161,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   163,   -46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -10,   -46,
      -9,    -4,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -45
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      39,    41,    24,   119,    34,    81,    82,    83,   120,    85,
      86,    15,    16,    96,    12,    17,    18,    19,    20,    21,
      95,    97,    43,    77,   110,    78,    13,    79,    15,    16,
      70,    71,    17,    18,    19,    20,    21,    35,   137,    92,
     139,    63,   138,    14,   140,     2,    64,    93,     3,    65,
      44,     4,     5,   141,    53,    46,    47,   142,   121,   122,
     123,   124,   143,    48,    56,    49,   144,   127,    50,   131,
     132,    15,    16,    54,    55,    17,    18,    19,    20,    21,
      35,    57,    51,    58,    63,    52,    59,   111,    73,    64,
      61,    74,    65,    15,    16,    60,    62,    17,    18,    19,
      20,    21,    35,   129,   130,    36,    37,    68,    72,   113,
      15,    16,   114,    38,    17,    18,    19,    20,    21,    35,
      15,    16,    75,    37,    17,    18,    19,    20,    21,    76,
      69,    15,    16,    22,    84,    17,    18,    19,    20,    21,
      23,    15,    16,    87,    32,    17,    18,    19,    20,    21,
      35,    33,    88,    89,    37,    90,    91,    98,    99,   128,
     100,   101,   103,   104,   105,   106,   112,   108,   116,   109,
     107,   125,   115,   117,   118,   126,   145,   133,   135,   136,
     134,     0,   148,   146,     0,     0,     0,     0,   147
};

static const yytype_int8 yycheck[] =
{
      10,    10,     6,    24,     8,    50,    51,    52,    29,    54,
      55,     4,     5,    15,    17,     8,     9,    10,    11,    12,
      65,    23,    22,    17,    17,    19,    25,    21,     4,     5,
      40,    40,     8,     9,    10,    11,    12,    13,    26,    15,
      26,    17,    30,    25,    30,     0,    22,    23,     3,    25,
      18,     6,     7,    26,    31,    18,    17,    30,   103,   104,
     105,   106,    26,    17,    17,    25,    30,   112,    28,   114,
     115,     4,     5,    25,    25,     8,     9,    10,    11,    12,
      13,    23,    25,    17,    17,    28,    17,    91,    26,    22,
      17,    29,    25,     4,     5,    23,    17,     8,     9,    10,
      11,    12,    13,   113,   113,    16,    17,    23,    17,    26,
       4,     5,    29,    24,     8,     9,    10,    11,    12,    13,
       4,     5,    26,    17,     8,     9,    10,    11,    12,    22,
      24,     4,     5,    17,    17,     8,     9,    10,    11,    12,
      24,     4,     5,    23,    17,     8,     9,    10,    11,    12,
      13,    24,    23,    23,    17,    23,    14,     3,    18,    22,
       3,    17,    29,    29,    29,    29,    27,    26,    17,    26,
      32,    23,    27,    17,    27,    23,    23,    22,    19,    17,
      22,    -1,    19,    23,    -1,    -1,    -1,    -1,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,     0,     3,     6,     7,    35,    36,    37,    38,
      39,    40,    17,    25,    25,     4,     5,     8,     9,    10,
      11,    12,    17,    24,    44,    45,    46,    47,    48,    49,
      50,    51,    17,    24,    44,    13,    16,    17,    24,    41,
      42,    43,    44,    22,    18,    53,    18,    17,    17,    25,
      28,    25,    28,    31,    25,    25,    17,    23,    17,    17,
      23,    17,    17,    17,    22,    25,    41,    43,    23,    24,
      41,    43,    17,    26,    29,    26,    22,    17,    19,    21,
      55,    55,    55,    55,    17,    55,    55,    23,    23,    23,
      23,    14,    15,    23,    54,    55,    15,    23,     3,    18,
       3,    17,    52,    29,    29,    29,    29,    32,    26,    26,
      17,    44,    27,    26,    29,    27,    17,    17,    27,    24,
      29,    55,    55,    55,    55,    23,    23,    55,    22,    41,
      43,    55,    55,    22,    22,    19,    17,    26,    30,    26,
      30,    26,    30,    26,    30,    23,    23,    27,    19
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 3: /* "KW_PUBLISHABLE_STRUCT" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1170 "hare-idl.tab.c"
	break;
      case 4: /* "KW_ENUM" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1179 "hare-idl.tab.c"
	break;
      case 5: /* "KW_CLASS" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1188 "hare-idl.tab.c"
	break;
      case 6: /* "KW_MAPPING" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1197 "hare-idl.tab.c"
	break;
      case 7: /* "KW_ENCODING" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1206 "hare-idl.tab.c"
	break;
      case 8: /* "KW_NUMERIC" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1215 "hare-idl.tab.c"
	break;
      case 9: /* "KW_INT" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1224 "hare-idl.tab.c"
	break;
      case 10: /* "KW_SEQUENCE" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1233 "hare-idl.tab.c"
	break;
      case 11: /* "KW_FIXED_POINT" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1242 "hare-idl.tab.c"
	break;
      case 12: /* "KW_BIT" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1251 "hare-idl.tab.c"
	break;
      case 13: /* "KW_EXTEND" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1260 "hare-idl.tab.c"
	break;
      case 14: /* "KW_TO" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1269 "hare-idl.tab.c"
	break;
      case 15: /* "KW_DEFAULT" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1278 "hare-idl.tab.c"
	break;
      case 16: /* "KW_FENCE" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1287 "hare-idl.tab.c"
	break;
      case 17: /* "IDENTIFIER" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1296 "hare-idl.tab.c"
	break;
      case 18: /* "STRING_LITERAL" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1305 "hare-idl.tab.c"
	break;
      case 19: /* "INTEGER_LITERAL" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1314 "hare-idl.tab.c"
	break;
      case 20: /* "CHAR_LITERAL" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1323 "hare-idl.tab.c"
	break;
      case 21: /* "FLOAT_LITERAL" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1332 "hare-idl.tab.c"
	break;
      case 22: /* "'{'" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1341 "hare-idl.tab.c"
	break;
      case 23: /* "';'" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1350 "hare-idl.tab.c"
	break;
      case 24: /* "'}'" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1359 "hare-idl.tab.c"
	break;
      case 25: /* "'('" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1368 "hare-idl.tab.c"
	break;
      case 26: /* "')'" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1377 "hare-idl.tab.c"
	break;
      case 27: /* "'='" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1386 "hare-idl.tab.c"
	break;
      case 28: /* "'['" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1395 "hare-idl.tab.c"
	break;
      case 29: /* "','" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1404 "hare-idl.tab.c"
	break;
      case 30: /* "']'" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1413 "hare-idl.tab.c"
	break;
      case 31: /* "'<'" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1422 "hare-idl.tab.c"
	break;
      case 32: /* "'>'" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1431 "hare-idl.tab.c"
	break;
      case 34: /* "file" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1440 "hare-idl.tab.c"
	break;
      case 35: /* "publishable_struct_begin" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1449 "hare-idl.tab.c"
	break;
      case 36: /* "publishable_struct" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1458 "hare-idl.tab.c"
	break;
      case 37: /* "mapping_begin" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1467 "hare-idl.tab.c"
	break;
      case 38: /* "mapping" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1476 "hare-idl.tab.c"
	break;
      case 39: /* "encoding_begin" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1485 "hare-idl.tab.c"
	break;
      case 40: /* "encoding" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1494 "hare-idl.tab.c"
	break;
      case 41: /* "data_element" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1503 "hare-idl.tab.c"
	break;
      case 42: /* "data_group_begin" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1512 "hare-idl.tab.c"
	break;
      case 43: /* "data_group" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1521 "hare-idl.tab.c"
	break;
      case 44: /* "data_type" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1530 "hare-idl.tab.c"
	break;
      case 45: /* "numeric_type" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1539 "hare-idl.tab.c"
	break;
      case 46: /* "int_type" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1548 "hare-idl.tab.c"
	break;
      case 47: /* "fixed_point_type" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1557 "hare-idl.tab.c"
	break;
      case 48: /* "bit_type" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1566 "hare-idl.tab.c"
	break;
      case 49: /* "sequence_type" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1575 "hare-idl.tab.c"
	break;
      case 50: /* "class_ref_type" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1584 "hare-idl.tab.c"
	break;
      case 51: /* "inline_enum_type" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1593 "hare-idl.tab.c"
	break;
      case 52: /* "enum_values" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1602 "hare-idl.tab.c"
	break;
      case 53: /* "str_list" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1611 "hare-idl.tab.c"
	break;
      case 54: /* "arg_list" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1620 "hare-idl.tab.c"
	break;
      case 55: /* "expr" */

/* Line 1000 of yacc.c  */
#line 31 "hare-idl.y"
	{ releaseYys((*yyvaluep)); };

/* Line 1000 of yacc.c  */
#line 1629 "hare-idl.tab.c"
	break;

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 40 "hare-idl.y"
    { (yyval) = 0; ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 41 "hare-idl.y"
    { (yyval) = addToFile((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 42 "hare-idl.y"
    { (yyval) = addToFile((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 43 "hare-idl.y"
    { (yyval) = addToFile((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 47 "hare-idl.y"
    { (yyval) = createPublishableStruct((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)])); releaseYys((yyvsp[(3) - (3)])); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 48 "hare-idl.y"
    { (yyval) = addToPublishableStruct((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)])); releaseYys((yyvsp[(4) - (4)]));;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 49 "hare-idl.y"
    { (yyval) = addToPublishableStruct((yyvsp[(1) - (4)]), createIdType((yyvsp[(2) - (4)])), (yyvsp[(3) - (4)])); releaseYys((yyvsp[(4) - (4)])); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 53 "hare-idl.y"
    { (yyval) = (yyvsp[(1) - (3)]); releaseYys2((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 57 "hare-idl.y"
    { (yyval) = createMapping((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)])); releaseYys4((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)])); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 58 "hare-idl.y"
    { (yyval) = addToMapping((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));  releaseYys((yyvsp[(4) - (4)])); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 59 "hare-idl.y"
    { (yyval) = addToMapping((yyvsp[(1) - (4)]), createIdType((yyvsp[(2) - (4)])), (yyvsp[(3) - (4)]));  releaseYys((yyvsp[(4) - (4)])); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 63 "hare-idl.y"
    { (yyval) = (yyvsp[(1) - (3)]); releaseYys2((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 67 "hare-idl.y"
    { (yyval) = createEncoding((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)])); releaseYys4((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)])); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 68 "hare-idl.y"
    { (yyval) = addToEncoding((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 69 "hare-idl.y"
    { (yyval) = addToEncoding((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 70 "hare-idl.y"
    { (yyval) = addFenceToEncoding((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 74 "hare-idl.y"
    { (yyval) = (yyvsp[(1) - (3)]); releaseYys2((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 78 "hare-idl.y"
    { (yyval) = createEncodingAttribute((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), 0); releaseYys((yyvsp[(3) - (3)]));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 79 "hare-idl.y"
    { (yyval) = createEncodingAttribute((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)])); releaseYys3((yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(6) - (6)]));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 80 "hare-idl.y"
    { (yyval) = createEncodingAttribute(createIdType((yyvsp[(1) - (3)])), (yyvsp[(2) - (3)]), 0); releaseYys((yyvsp[(3) - (3)])); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 81 "hare-idl.y"
    { (yyval) = createEncodingAttribute(createIdType((yyvsp[(1) - (6)])), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)])); releaseYys3((yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(6) - (6)]));;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 82 "hare-idl.y"
    { (yyval) = createExtendAttribute((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)])); releaseYys3((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 83 "hare-idl.y"
    { (yyval) = createExtendAttribute((yyvsp[(2) - (5)]), createIdType((yyvsp[(4) - (5)]))); releaseYys3((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 87 "hare-idl.y"
    { (yyval) = createEncodingGroup((yyvsp[(1) - (2)]), 0, 0); releaseYys((yyvsp[(2) - (2)])); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 88 "hare-idl.y"
    { (yyval) = createEncodingGroup((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), 0); releaseYys3((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)])); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 89 "hare-idl.y"
    { (yyval) = addToEncodingGroup((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 90 "hare-idl.y"
    { (yyval) = addToEncodingGroup((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 94 "hare-idl.y"
    { (yyval) = (yyvsp[(1) - (2)]); releaseYys((yyvsp[(2) - (2)])); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 95 "hare-idl.y"
    { (yyval) = createEncodingGroup((yyvsp[(1) - (2)]), 0, (yyvsp[(2) - (2)])); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 96 "hare-idl.y"
    { (yyval) = createEncodingGroup((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])); releaseYys2((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 97 "hare-idl.y"
    { (yyval) = addEncodingOption((yyvsp[(1) - (2)]), 0, (yyvsp[(2) - (2)])); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 98 "hare-idl.y"
    { (yyval) = addEncodingOption((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])); releaseYys2((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 112 "hare-idl.y"
    { (yyval) = createNumeric((yyvsp[(1) - (6)]), false, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), false); releaseYys3((yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(6) - (6)])); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 113 "hare-idl.y"
    { (yyval) = createNumeric((yyvsp[(1) - (6)]), true, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), false); releaseYys3((yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(6) - (6)])); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 114 "hare-idl.y"
    { (yyval) = createNumeric((yyvsp[(1) - (6)]), false, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), true); releaseYys3((yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(6) - (6)])); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 115 "hare-idl.y"
    { (yyval) = createNumeric((yyvsp[(1) - (6)]), true, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), true); releaseYys3((yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(6) - (6)])); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 119 "hare-idl.y"
    { (yyval) = createInt((yyvsp[(1) - (6)]), false, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), false); releaseYys3((yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(6) - (6)])); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 120 "hare-idl.y"
    { (yyval) = createInt((yyvsp[(1) - (6)]), true, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), false); releaseYys3((yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(6) - (6)])); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 121 "hare-idl.y"
    { (yyval) = createInt((yyvsp[(1) - (6)]), false, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), true); releaseYys3((yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(6) - (6)])); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 122 "hare-idl.y"
    { (yyval) = createInt((yyvsp[(1) - (6)]), true, (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), true); releaseYys3((yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(6) - (6)])); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 126 "hare-idl.y"
    { (yyval) = createFixedPoint((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); releaseYys2((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 130 "hare-idl.y"
    { (yyval) = createBit((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); releaseYys2((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 134 "hare-idl.y"
    { (yyval) = createSequence((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)])); releaseYys2((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 138 "hare-idl.y"
    { (yyval) = createClassReference((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 142 "hare-idl.y"
    { (yyval) = createInlineEnum((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)])); releaseYys2((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 146 "hare-idl.y"
    { (yyval) = addEnumValue(0, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); releaseYys((yyvsp[(2) - (3)])); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 147 "hare-idl.y"
    { (yyval) = addEnumValue((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])); releaseYys2((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)])); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 151 "hare-idl.y"
    { (yyval) = addString(0, (yyvsp[(1) - (1)])); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 152 "hare-idl.y"
    { (yyval) = addString((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); releaseYys((yyvsp[(2) - (3)])); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 156 "hare-idl.y"
    { (yyval) = addExpression(0, (yyvsp[(1) - (1)])); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 157 "hare-idl.y"
    { (yyval) = addExpression((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); releaseYys((yyvsp[(2) - (3)]));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 161 "hare-idl.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 162 "hare-idl.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 163 "hare-idl.y"
    { (yyval) = createIdentifierExpression((yyvsp[(1) - (1)])); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2312 "hare-idl.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



