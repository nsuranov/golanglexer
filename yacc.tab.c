/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IFX = 258,
     Package = 259,
     Import = 260,
     Func = 261,
     Return = 262,
     Go = 263,
     Defer = 264,
     Chan = 265,
     Select = 266,
     Const = 267,
     Var = 268,
     Map = 269,
     Make = 270,
     Type = 271,
     Struct = 272,
     Interface = 273,
     If = 274,
     Else = 275,
     Case = 276,
     Switch = 277,
     Default = 278,
     Fallthrough = 279,
     Continue = 280,
     Break = 281,
     Range = 282,
     Do = 283,
     While = 284,
     For = 285,
     DecInt = 286,
     OctInt = 287,
     BinInt = 288,
     HexInt = 289,
     DecFloat = 290,
     HexFloat = 291,
     String = 292,
     Variable = 293,
     Plus = 294,
     Equals = 295,
     Colon = 296,
     Minus = 297,
     Times = 298,
     Devides = 299,
     Mod = 300,
     And = 301,
     Or = 302,
     StatementOr = 303,
     StatementAnd = 304,
     StatementEquals = 305,
     Xor = 306,
     Not = 307,
     OpenBracket = 308,
     ClosingBracket = 309,
     OpenCurlyBracket = 310,
     ClosingCurlyBracket = 311,
     OpenSquareBracket = 312,
     ClosingSquareBracket = 313,
     ChannelArrow = 314,
     Less = 315,
     More = 316,
     UNARY = 317
   };
#endif
/* Tokens.  */
#define IFX 258
#define Package 259
#define Import 260
#define Func 261
#define Return 262
#define Go 263
#define Defer 264
#define Chan 265
#define Select 266
#define Const 267
#define Var 268
#define Map 269
#define Make 270
#define Type 271
#define Struct 272
#define Interface 273
#define If 274
#define Else 275
#define Case 276
#define Switch 277
#define Default 278
#define Fallthrough 279
#define Continue 280
#define Break 281
#define Range 282
#define Do 283
#define While 284
#define For 285
#define DecInt 286
#define OctInt 287
#define BinInt 288
#define HexInt 289
#define DecFloat 290
#define HexFloat 291
#define String 292
#define Variable 293
#define Plus 294
#define Equals 295
#define Colon 296
#define Minus 297
#define Times 298
#define Devides 299
#define Mod 300
#define And 301
#define Or 302
#define StatementOr 303
#define StatementAnd 304
#define StatementEquals 305
#define Xor 306
#define Not 307
#define OpenBracket 308
#define ClosingBracket 309
#define OpenCurlyBracket 310
#define ClosingCurlyBracket 311
#define OpenSquareBracket 312
#define ClosingSquareBracket 313
#define ChannelArrow 314
#define Less 315
#define More 316
#define UNARY 317




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"

	#include <stdio.h>
	#include <string.h>

	extern int yylineno;
	extern int yylex();
	int error_flag = 0;
	void yyerror(char *str){
		printf("Error in line: %d\n", yylineno);
		error_flag = 1;
	}


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 243 "yacc.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1468

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  198
/* YYNRULES -- Number of states.  */
#define YYNSTATES  386

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    64,     2,    65,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    63,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     9,    12,    14,    16,    19,    25,
      32,    38,    45,    48,    52,    54,    57,    60,    63,    68,
      70,    74,    77,    81,    86,    91,    97,   102,   104,   108,
     110,   113,   115,   117,   119,   121,   123,   125,   127,   129,
     131,   133,   135,   137,   139,   141,   145,   149,   153,   157,
     160,   164,   169,   173,   175,   179,   182,   188,   195,   202,
     210,   217,   225,   230,   236,   242,   247,   251,   255,   259,
     264,   268,   272,   277,   282,   286,   288,   292,   299,   301,
     305,   309,   313,   319,   325,   331,   333,   339,   345,   351,
     356,   361,   366,   371,   378,   385,   392,   397,   404,   408,
     412,   416,   422,   426,   429,   433,   434,   436,   440,   444,
     446,   448,   450,   452,   454,   456,   458,   460,   462,   467,
     472,   478,   483,   489,   495,   500,   508,   518,   524,   526,
     529,   532,   534,   538,   542,   546,   550,   554,   558,   562,
     566,   570,   572,   576,   578,   581,   584,   587,   590,   593,
     596,   599,   602,   605,   608,   611,   614,   617,   619,   623,
     629,   635,   640,   642,   646,   650,   652,   654,   656,   659,
     661,   663,   665,   667,   669,   671,   673,   675,   677,   684,
     690,   695,   702,   708,   713,   719,   723,   734,   743,   746,
     749,   752,   755,   760,   762,   765,   772,   778,   786
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,    73,    74,    68,    -1,    69,    -1,    68,
      69,    -1,    70,    -1,    92,    -1,     6,    77,    -1,    16,
      38,    17,    55,    56,    -1,    16,    38,    17,    55,    71,
      56,    -1,    16,    38,    18,    55,    56,    -1,    16,    38,
      18,    55,    72,    56,    -1,    38,    38,    -1,    71,    38,
      38,    -1,    76,    -1,    72,    76,    -1,     4,    38,    -1,
       5,   101,    -1,     5,    53,    75,    54,    -1,   101,    -1,
      75,    63,   101,    -1,    75,   101,    -1,    38,    53,    54,
      -1,    38,    53,    84,    54,    -1,    38,    53,    54,    78,
      -1,    38,    53,    84,    54,    78,    -1,    76,    55,    79,
      56,    -1,    38,    -1,    78,    64,    38,    -1,    80,    -1,
      79,    80,    -1,    83,    -1,    82,    -1,    92,    -1,    86,
      -1,    89,    -1,    26,    -1,    25,    -1,   103,    -1,   110,
      -1,   111,    -1,   112,    -1,    38,    -1,    97,    -1,    83,
      -1,    38,    65,    81,    -1,    81,    64,    38,    -1,    81,
      64,    37,    -1,    81,    64,    83,    -1,     7,   100,    -1,
      38,    53,    54,    -1,    38,    53,    81,    54,    -1,    38,
      65,    83,    -1,    85,    -1,    84,    64,    85,    -1,    38,
      38,    -1,    19,    90,    55,    79,    56,    -1,    19,    90,
      55,    79,    56,    88,    -1,    19,    90,    55,    79,    56,
      87,    -1,    19,    90,    55,    79,    56,    87,    88,    -1,
      20,    19,    90,    55,    79,    56,    -1,    87,    20,    19,
      90,    55,    79,    56,    -1,    20,    55,    79,    56,    -1,
      30,    90,    55,    79,    56,    -1,    30,   104,    55,    79,
      56,    -1,    30,    55,    79,    56,    -1,    90,    49,    90,
      -1,    90,    48,    90,    -1,    90,    50,    90,    -1,    90,
      52,    40,    90,    -1,    90,    61,    90,    -1,    90,    60,
      90,    -1,    90,    61,    40,    90,    -1,    90,    60,    40,
      90,    -1,    53,    90,    54,    -1,   100,    -1,    38,    59,
     100,    -1,    13,    38,    38,    40,    59,    38,    -1,    98,
      -1,    38,    40,   100,    -1,    38,    40,    83,    -1,    13,
      38,    38,    -1,    13,    38,    38,    40,   100,    -1,    13,
      38,    38,    40,   102,    -1,    13,    38,    38,    40,    83,
      -1,    91,    -1,    12,    38,    38,    40,   100,    -1,    12,
      38,    38,    40,   102,    -1,    12,    38,    38,    40,    83,
      -1,    12,    38,    40,   100,    -1,    12,    38,    40,   102,
      -1,    12,    38,    40,    83,    -1,    13,    38,    93,    38,
      -1,    13,    38,    93,    38,    40,    94,    -1,    13,    38,
      93,    38,    40,   102,    -1,    13,    38,    93,    38,    40,
      83,    -1,    38,    93,    40,   100,    -1,    13,    38,    38,
      40,    38,    93,    -1,    38,    39,    39,    -1,    38,    42,
      42,    -1,    57,   100,    58,    -1,    57,    65,    65,    65,
      58,    -1,    57,    37,    58,    -1,    57,    58,    -1,    55,
      95,    56,    -1,    -1,    96,    -1,    95,    64,    96,    -1,
      97,    41,    97,    -1,    97,    -1,    32,    -1,    31,    -1,
      34,    -1,    33,    -1,    35,    -1,    36,    -1,    37,    -1,
      83,    -1,    81,    41,    40,   100,    -1,    81,    41,    40,
     102,    -1,    81,    41,    40,    27,   100,    -1,    81,    41,
      40,    83,    -1,    81,    41,    40,    59,    38,    -1,    81,
      41,    40,    38,    93,    -1,    81,    41,    40,    99,    -1,
      81,    41,    40,    14,    93,    38,    94,    -1,    81,    41,
      40,    15,    53,    14,    93,    38,    54,    -1,    81,    41,
      40,    38,    94,    -1,   102,    -1,    99,    93,    -1,    99,
      83,    -1,   101,    -1,   100,    39,   100,    -1,   100,    42,
     100,    -1,   100,    43,   100,    -1,   100,    44,   100,    -1,
     100,    45,   100,    -1,   100,    46,   100,    -1,   100,    47,
     100,    -1,   100,    51,   100,    -1,    53,   100,    54,    -1,
      97,    -1,    53,   100,    54,    -1,   102,    -1,    39,    31,
      -1,    39,    32,    -1,    39,    34,    -1,    39,    33,    -1,
      39,    35,    -1,    39,    36,    -1,    42,    31,    -1,    42,
      32,    -1,    42,    34,    -1,    42,    33,    -1,    42,    35,
      -1,    42,    36,    -1,    52,   101,    -1,    38,    -1,    38,
      65,   102,    -1,    22,   104,    55,   106,    56,    -1,    22,
      98,    55,   106,    56,    -1,    22,    55,   106,    56,    -1,
     105,    -1,   104,    63,   105,    -1,   104,    64,   105,    -1,
      90,    -1,    92,    -1,   108,    -1,   106,   108,    -1,    83,
      -1,    82,    -1,    92,    -1,    86,    -1,    89,    -1,    26,
      -1,    25,    -1,   103,    -1,   108,    -1,    21,   100,    41,
      55,    79,    56,    -1,    21,   100,    41,   107,   108,    -1,
      21,   100,    41,   107,    -1,    21,    90,    41,    55,    79,
      56,    -1,    21,    90,    41,   107,   108,    -1,    21,    90,
      41,   107,    -1,    23,    41,    55,    79,    56,    -1,    23,
      41,   107,    -1,     6,    53,    84,    54,    55,    79,    56,
      53,    81,    54,    -1,     6,    53,    54,    55,    79,    56,
      53,    54,    -1,     8,    83,    -1,     8,   109,    -1,     9,
      83,    -1,     9,   109,    -1,    11,    55,   113,    56,    -1,
     114,    -1,   113,   114,    -1,    21,    91,    41,    55,    79,
      56,    -1,    21,    91,    41,   107,   114,    -1,    21,    91,
      41,    55,    79,    56,   114,    -1,    21,    91,    41,   107,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    93,    93,    97,    98,   102,   103,   104,   107,   108,
     109,   110,   114,   115,   119,   120,   124,   129,   130,   134,
     135,   136,   139,   140,   141,   142,   146,   150,   151,   155,
     156,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   173,   174,   175,   176,   177,   178,   179,   183,
     187,   188,   189,   193,   194,   198,   202,   203,   204,   205,
     209,   210,   214,   218,   219,   220,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   236,   237,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     266,   267,   268,   269,   273,   274,   278,   279,   283,   284,
     288,   289,   290,   291,   292,   293,   294,   295,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   311,   312,
     313,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   349,   350,   354,
     355,   356,   360,   361,   362,   365,   366,   370,   371,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   385,   386,
     387,   388,   389,   390,   391,   392,   395,   396,   399,   400,
     403,   404,   407,   411,   412,   426,   427,   428,   429
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IFX", "Package", "Import", "Func",
  "Return", "Go", "Defer", "Chan", "Select", "Const", "Var", "Map", "Make",
  "Type", "Struct", "Interface", "If", "Else", "Case", "Switch", "Default",
  "Fallthrough", "Continue", "Break", "Range", "Do", "While", "For",
  "DecInt", "OctInt", "BinInt", "HexInt", "DecFloat", "HexFloat", "String",
  "Variable", "Plus", "Equals", "Colon", "Minus", "Times", "Devides",
  "Mod", "And", "Or", "StatementOr", "StatementAnd", "StatementEquals",
  "Xor", "Not", "OpenBracket", "ClosingBracket", "OpenCurlyBracket",
  "ClosingCurlyBracket", "OpenSquareBracket", "ClosingSquareBracket",
  "ChannelArrow", "Less", "More", "UNARY", "';'", "','", "'.'", "$accept",
  "program_struct", "program", "default_block", "type_block",
  "struct_fields_list", "int_body", "package_block", "import_block",
  "import_list", "func_head", "func_block", "func_return_block",
  "func_body", "code_block", "variable_list", "return_block",
  "inline_call_block", "args", "arg", "if_block", "if_else_block",
  "else_block", "for_block", "condition", "channel_assignment",
  "assignment", "array_index", "array_assignment", "factor_list",
  "factor_value", "value", "auto_type_assignment", "dif_assigment_obj",
  "expression", "factor", "object_field", "switch_block",
  "multi_switch_condition_body", "multi_switch_condition", "switch_body",
  "switch_code_block", "case_block", "anon_func_block", "gorutine_block",
  "defer_block", "select_block", "select_body", "select_case_block", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,    59,    44,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    69,    69,    70,    70,
      70,    70,    71,    71,    72,    72,    73,    74,    74,    75,
      75,    75,    76,    76,    76,    76,    77,    78,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    82,
      83,    83,    83,    84,    84,    85,    86,    86,    86,    86,
      87,    87,    88,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      93,    93,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   102,   102,   103,
     103,   103,   104,   104,   104,   105,   105,   106,   106,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   113,   113,   114,   114,   114,   114
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     1,     2,     5,     6,
       5,     6,     2,     3,     1,     2,     2,     2,     4,     1,
       3,     2,     3,     4,     4,     5,     4,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     2,
       3,     4,     3,     1,     3,     2,     5,     6,     6,     7,
       6,     7,     4,     5,     5,     4,     3,     3,     3,     4,
       3,     3,     4,     4,     3,     1,     3,     6,     1,     3,
       3,     3,     5,     5,     5,     1,     5,     5,     5,     4,
       4,     4,     4,     6,     6,     6,     4,     6,     3,     3,
       3,     5,     3,     2,     3,     0,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       5,     4,     5,     5,     4,     7,     9,     5,     1,     2,
       2,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     5,
       5,     4,     1,     3,     3,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     5,
       4,     6,     5,     4,     5,     3,    10,     8,     2,     2,
       2,     2,     4,     1,     2,     6,     5,     7,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    16,     1,     0,     0,   111,   110,
     113,   112,   114,   115,   116,   157,     0,     0,     0,     0,
     117,   141,    17,   143,     0,     0,     0,     0,    42,     2,
       3,     5,     0,   117,    85,     6,    43,    78,     0,     0,
     144,   145,   147,   146,   148,   149,   150,   151,   153,   152,
     154,   155,     0,   156,     0,     0,     0,    19,     0,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,    42,    50,     0,    52,   158,   131,
       0,    18,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,   142,     0,     0,     0,     0,    81,     0,     0,
       0,    98,    80,    79,    99,   116,   103,     0,     0,    76,
      45,    52,     0,     0,    47,    46,    48,    51,   140,    20,
     132,   133,   134,   135,   136,   137,   138,   139,     0,    22,
       0,    53,     0,     0,     0,     0,     0,     0,    37,    36,
       0,     0,    29,    32,    31,    34,    35,    33,    38,    39,
      40,    41,     0,    91,    89,    90,     0,    92,     0,     0,
     102,     0,   100,    96,     0,     0,     0,   105,     0,   117,
     124,   118,   119,     0,    55,    27,    24,    23,     0,    49,
       0,     0,   188,   189,   190,   191,     0,     0,     0,    75,
     157,     0,   165,   166,   141,    78,     0,   162,     0,   165,
       0,    26,    30,    88,    86,    87,   157,     0,    84,    82,
      83,   105,     0,     8,     0,    10,     0,    14,     0,     0,
       0,   120,     0,   123,   127,   122,   130,   129,     0,    25,
      54,     0,     0,     0,   193,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,     0,
       0,     0,     0,     0,     0,     0,    97,    77,    95,    93,
      94,    12,     0,     9,    11,    15,   101,   105,     0,     0,
     106,   109,    28,     0,     0,     0,     0,     0,   192,   194,
      74,    67,    66,    68,     0,     0,     0,    71,     0,    70,
     157,     0,    75,     0,   161,   168,     0,     0,   163,   164,
      65,     0,     0,    13,   125,     0,   104,     0,     0,     0,
       0,     0,     0,    69,    56,    73,    72,     0,     0,   175,
     174,     0,   170,   169,   172,   173,   171,   176,   185,   177,
     160,   159,    63,    64,     0,   107,   108,     0,     0,     0,
       0,   198,     0,    58,    57,     0,   183,     0,   180,     0,
     126,     0,     0,     0,     0,   196,     0,     0,     0,    59,
       0,   182,     0,   179,   184,     0,     0,   195,     0,     0,
       0,   181,   178,   187,     0,   197,     0,    62,     0,     0,
       0,     0,   186,    60,     0,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    29,    30,    31,   214,   216,     3,     7,    55,
      59,    60,   176,   141,   142,    32,   143,    20,   130,   131,
     145,   343,   344,   146,   192,    34,   147,    70,   224,   269,
     270,    21,    37,   170,   189,    79,    23,   148,   196,   197,
     247,   328,   329,   183,   149,   150,   151,   233,   234
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -283
static const yytype_int16 yypact[] =
{
      12,    18,   102,   130,  -283,  -283,  1268,   383,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,   -32,  1426,  1432,  1280,  1292,
    -283,  -283,  -283,  -283,   137,   156,   160,   167,   267,   383,
    -283,  -283,   -22,    41,  -283,  -283,  -283,  -283,  1225,   172,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  1292,  -283,  1292,   235,  1324,   214,    99,   141,
    -283,   138,   -29,    33,   164,  1292,   177,  1141,  1292,  1402,
     184,  -283,   187,   218,    79,  -283,   118,  -283,  -283,  -283,
    1337,  -283,  1280,  -283,  1292,  1292,  1292,  1292,  1292,  1292,
    1292,  1292,  -283,    87,  1178,   199,  1292,   201,   205,   207,
     226,  -283,  1361,  1371,  -283,   234,  -283,   236,   392,  1371,
     221,    41,  1292,   370,  -283,   114,  -283,  -283,   250,  -283,
     312,   312,   312,   312,  1371,  1371,  1371,  1371,   266,   270,
     158,  -283,  1292,    11,    11,   258,  1304,  1085,  -283,  -283,
    1097,   517,  -283,  -283,     6,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  1292,  1361,  1371,  1381,  1186,   275,    60,    75,
    -283,   251,  -283,  1371,   262,   268,  1292,   142,   285,  -283,
     -14,  1371,  1308,   287,  -283,  -283,   263,   270,   290,  1371,
     276,   114,  -283,  -283,  -283,  -283,   313,  1304,   165,  1371,
    1190,   169,  1095,  -283,    56,   280,   220,  -283,  1178,   485,
     227,  -283,  -283,  1361,  1371,  1381,   104,   298,  1361,  1371,
    1381,    26,   303,  -283,    80,  -283,   117,  -283,   286,   305,
     332,  1371,  1410,  -283,  -283,  -283,  -283,  -283,   310,   263,
    -283,   126,    27,     4,  -283,   956,  1337,  1304,  1304,  1304,
     309,  1178,  1233,  1256,  1418,  1304,   311,    -8,  -283,   169,
     169,  1129,  1129,   549,  1178,  1178,  -283,  -283,  -283,  -283,
    -283,  -283,   316,  -283,  -283,  -283,  -283,   296,   262,    65,
    -283,   315,  -283,   317,   186,   322,   307,   323,  -283,  -283,
    -283,  1095,  1095,  1095,  1304,   581,  1304,  1095,  1304,  1095,
      43,  1192,  1351,   965,  -283,  -283,    -3,    23,  -283,  -283,
    -283,   613,   645,  -283,  -283,   330,  -283,  1410,  1410,  1178,
     320,   333,  1000,  1095,   350,  1095,  1095,  1035,  1070,  -283,
    -283,  1178,  -283,     6,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,   327,  -283,  -283,   677,  1178,   336,
    1178,   313,   -18,   362,  -283,  1178,   169,  1178,   169,   709,
    -283,   334,   741,   329,   773,  -283,  1304,  1178,   -17,  -283,
     805,  -283,   837,  -283,  -283,   344,   347,   313,   991,   869,
    1304,  -283,  -283,  -283,  1402,  -283,  1178,  -283,  1026,   200,
     901,  1178,  -283,  -283,   933,  -283
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -283,  -283,  -283,   357,  -283,  -283,  -283,  -283,  -283,  -283,
    -136,  -283,   233,   124,  -131,   -35,  -226,    -7,   180,   247,
    -224,  -283,    70,  -170,  -128,   194,     0,    -5,  -206,  -283,
     120,   139,   291,  -283,   -13,     8,   -28,   -82,   302,    45,
      50,  -282,  -146,   318,  -283,  -283,  -283,  -283,  -229
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -158
static const yytype_int16 yytable[] =
{
      33,   356,   370,    76,   279,   259,    56,    35,   188,    97,
     202,    78,   199,   245,    22,   246,     1,   180,   245,    72,
     246,    38,    33,   217,   181,   232,    53,    57,    67,    35,
     341,    33,    77,    39,   110,   346,   348,   357,   357,    56,
     275,    80,    73,    67,   245,   248,   246,   -44,   294,   181,
      99,   100,   103,   330,   108,   109,     4,    98,   102,   235,
     278,   304,   111,    83,    15,   276,   116,   322,   155,   324,
     -44,   120,   121,   122,   123,   124,   125,   126,   127,   331,
     265,   222,   -44,   154,   -42,   172,   322,   144,   324,   153,
     119,   322,   322,   324,   324,   -44,    38,   -43,   212,   163,
     171,   295,     5,   248,   248,   -44,   169,   -42,   244,   281,
     282,   283,   355,    58,   287,   289,   213,   291,   262,   179,
     -43,   306,   202,   325,   205,   128,   182,   184,   210,   307,
      33,   215,    38,    33,   144,     6,   263,   193,   375,   204,
     193,   129,   325,   209,    69,   203,    36,   325,   325,   208,
     295,   295,    93,   221,   202,    58,   313,    38,   315,   219,
     316,    67,   223,   226,   128,   227,    77,    38,    36,    39,
     202,   202,   117,   264,   236,    58,    95,    36,    96,   173,
     273,  -157,    73,   260,  -157,  -157,  -157,  -157,  -157,  -157,
     245,   144,   246,  -157,    61,    38,    94,   222,    62,    67,
     361,   256,   363,   101,   258,    63,   202,    39,    36,   110,
      15,   327,   177,   237,   238,   239,    78,   240,   202,   104,
     241,   202,   178,   202,   112,   242,   243,   113,   368,   202,
     327,   202,   292,    36,   144,   327,   327,   111,   202,   152,
     310,   156,   378,   157,    33,    33,   144,   144,   144,   202,
     178,   193,   193,   202,   382,   114,   115,  -131,  -131,  -131,
    -131,  -131,   158,   305,    73,  -131,     8,     9,    10,    11,
      12,    13,    14,    15,    16,   250,   194,    17,   144,   194,
      36,   159,   255,   251,   252,    73,   323,    18,    52,    81,
     251,   252,   160,   326,   144,   144,   298,   299,    82,   296,
     297,   161,   144,  -142,   174,   323,    64,    65,   175,    66,
     323,   323,   326,   186,   144,   211,   218,   326,   326,    67,
      38,   220,   253,   225,    67,   181,    68,   228,   128,   231,
     144,   144,    69,   144,   232,   249,   257,    36,   144,   379,
     144,   261,   144,   267,   266,   144,   268,   144,   272,   284,
     144,   222,   293,   144,   303,   144,   308,    88,    89,    90,
     311,   271,   144,    91,   312,   285,    68,    33,   334,   144,
     342,   339,   309,   144,   144,   338,   353,   144,   301,   302,
      36,   350,   358,    36,   164,   165,    71,   365,   207,    24,
     194,   194,    36,    36,    36,    25,    26,   166,   373,    27,
     374,     8,     9,    10,    11,    12,    13,    14,   167,    16,
     229,   274,    17,   359,     8,     9,    10,    11,    12,    13,
      14,    28,    18,    54,    36,   230,   277,   335,   195,   168,
       0,    84,    36,   337,    85,    86,    87,    88,    89,    90,
      36,    36,   200,    91,     0,   349,   271,   336,    36,     0,
     162,    36,   185,     0,     0,     0,    36,    36,     0,     0,
      36,     0,   352,     0,   354,     0,     0,     0,     0,   360,
       0,   362,     0,     0,     0,     0,    36,    36,     0,    36,
       0,   369,     0,     0,    36,     0,    36,     0,    36,     0,
       0,    36,     0,    36,     0,     0,    36,     0,     0,    36,
     380,    36,     0,     0,     0,   384,     0,     0,    36,     0,
       0,     0,     0,    36,     0,    36,     0,     0,     0,    36,
      36,     0,     0,    36,   132,   133,   134,     0,   135,    25,
      26,     0,     0,   237,   238,   239,   136,   240,     0,   137,
     254,     0,   138,   139,     0,   242,   243,   140,     8,     9,
      10,    11,    12,    13,    14,    28,   132,   133,   134,     0,
     135,    25,    26,     0,     0,     0,     0,     0,   136,     0,
       0,   137,     0,   201,   138,   139,     0,     0,     0,   140,
       8,     9,    10,    11,    12,    13,    14,    28,   132,   133,
     134,     0,   135,    25,    26,     0,     0,     0,     0,     0,
     136,     0,     0,   137,     0,   300,   138,   139,     0,     0,
       0,   140,     8,     9,    10,    11,    12,    13,    14,    28,
     132,   133,   134,     0,   135,    25,    26,     0,     0,     0,
       0,     0,   136,     0,     0,   137,     0,   314,   138,   139,
       0,     0,     0,   140,     8,     9,    10,    11,    12,    13,
      14,    28,   132,   133,   134,     0,   135,    25,    26,     0,
       0,     0,     0,     0,   136,     0,     0,   137,     0,   332,
     138,   139,     0,     0,     0,   140,     8,     9,    10,    11,
      12,    13,    14,    28,   132,   133,   134,     0,   135,    25,
      26,     0,     0,     0,     0,     0,   136,     0,     0,   137,
       0,   333,   138,   139,     0,     0,     0,   140,     8,     9,
      10,    11,    12,    13,    14,    28,   132,   133,   134,     0,
     135,    25,    26,     0,     0,     0,     0,     0,   136,     0,
       0,   137,     0,   351,   138,   139,     0,     0,     0,   140,
       8,     9,    10,    11,    12,    13,    14,    28,   132,   133,
     134,     0,   135,    25,    26,     0,     0,     0,     0,     0,
     136,     0,     0,   137,     0,   364,   138,   139,     0,     0,
       0,   140,     8,     9,    10,    11,    12,    13,    14,    28,
     132,   133,   134,     0,   135,    25,    26,     0,     0,     0,
       0,     0,   136,     0,     0,   137,     0,   366,   138,   139,
       0,     0,     0,   140,     8,     9,    10,    11,    12,    13,
      14,    28,   132,   133,   134,     0,   135,    25,    26,     0,
       0,     0,     0,     0,   136,     0,     0,   137,     0,   367,
     138,   139,     0,     0,     0,   140,     8,     9,    10,    11,
      12,    13,    14,    28,   132,   133,   134,     0,   135,    25,
      26,     0,     0,     0,     0,     0,   136,     0,     0,   137,
       0,   371,   138,   139,     0,     0,     0,   140,     8,     9,
      10,    11,    12,    13,    14,    28,   132,   133,   134,     0,
     135,    25,    26,     0,     0,     0,     0,     0,   136,     0,
       0,   137,     0,   372,   138,   139,     0,     0,     0,   140,
       8,     9,    10,    11,    12,    13,    14,    28,   132,   133,
     134,     0,   135,    25,    26,     0,     0,     0,     0,     0,
     136,     0,     0,   137,     0,   377,   138,   139,     0,     0,
       0,   140,     8,     9,    10,    11,    12,    13,    14,    28,
     132,   133,   134,     0,   135,    25,    26,     0,     0,     0,
       0,     0,   136,     0,     0,   137,     0,   383,   138,   139,
       0,     0,     0,   140,     8,     9,    10,    11,    12,    13,
      14,    28,   132,     0,     0,     0,     0,    25,    26,     0,
       0,     0,     0,     0,   136,     0,   245,   137,   246,   385,
     319,   320,     0,     0,     0,   140,     8,     9,    10,    11,
      12,    13,    14,    28,   237,   238,   239,   132,   240,     0,
     280,     0,    25,    26,     0,     0,   242,   243,     0,   136,
     321,   245,   137,   246,     0,   319,   320,     0,     0,     0,
     140,     8,     9,    10,    11,    12,    13,    14,    28,   237,
     238,   239,   132,   240,     0,     0,   376,    25,    26,     0,
       0,   242,   243,     0,   136,   340,   245,   137,   246,     0,
     319,   320,     0,     0,     0,   140,     8,     9,    10,    11,
      12,    13,    14,    28,   237,   238,   239,   132,   240,     0,
       0,   381,    25,    26,     0,     0,   242,   243,     0,   136,
     345,   245,   137,   246,     0,   319,   320,    25,    26,     0,
     140,     8,     9,    10,    11,    12,    13,    14,    28,    25,
      26,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,   190,    16,   347,     0,    17,     8,     9,
      10,    11,    12,    13,    14,   190,    16,    18,   187,    17,
     191,    25,    26,   237,   238,   239,     0,   240,     0,    18,
     187,     0,   198,     0,     0,   242,   243,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,   190,    16,     0,
       0,    17,     8,     9,    10,    11,    12,    13,   105,    15,
      16,    18,   187,    17,     0,   132,   133,   134,     0,   135,
      25,    26,     0,    18,    54,     0,     0,   136,     0,   106,
     137,     0,     0,   138,   139,     0,   107,     0,   140,     8,
       9,    10,    11,    12,    13,    14,    28,     8,     9,    10,
      11,    12,    13,    14,   206,    16,     0,     0,    17,    64,
      65,   -42,    66,   317,     0,     0,     0,     0,    18,    54,
     237,   238,   239,    38,   240,   207,     0,    67,     0,    68,
       0,     0,   242,   243,   -42,   244,     8,     9,    10,    11,
      12,    13,    14,    74,     8,     9,    10,    11,    12,    13,
      14,    15,    16,   286,     0,    17,     0,     0,     0,    75,
       0,     0,     0,     0,     0,    18,   187,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   288,     0,    17,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    18,   187,
      17,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      18,    19,    17,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    18,    52,    17,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    18,    54,    17,  -143,     0,     0,
    -143,  -143,  -143,  -143,  -143,  -143,    18,   187,     0,  -143,
       0,     0,     0,    84,     0,  -128,    85,    86,    87,    88,
      89,    90,     0,     0,     0,    91,    84,     0,    92,    85,
      86,    87,    88,    89,    90,     0,     0,     0,    91,     0,
      84,   118,   318,    85,    86,    87,    88,    89,    90,     0,
    -117,     0,    91,  -117,  -117,  -117,  -117,  -117,  -117,     0,
      84,     0,  -117,    85,    86,    87,    88,    89,    90,     0,
    -143,     0,    91,  -143,  -143,  -143,  -143,  -143,  -143,     0,
       0,     0,  -143,     8,     9,    10,    11,    12,    13,    14,
      74,     8,     9,    10,    11,    12,    13,    14,   181,     8,
       9,    10,    11,    12,    13,    14,   290,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51
};

static const yytype_int16 yycheck[] =
{
       7,    19,    19,    38,   233,   211,    19,     7,   136,    38,
     141,    39,   140,    21,     6,    23,     4,     6,    21,    41,
      23,    53,    29,   159,    38,    21,    18,    19,    57,    29,
     312,    38,    39,    65,    69,   317,   318,    55,    55,    52,
      13,    54,    64,    57,    21,   191,    23,    41,    56,    38,
      17,    18,    65,    56,    67,    68,    38,    62,    65,   187,
      56,   267,    69,    55,    38,    38,    73,   293,    96,   293,
      64,    84,    85,    86,    87,    88,    89,    90,    91,    56,
     216,    55,    41,    96,    41,   113,   312,    94,   312,    96,
      82,   317,   318,   317,   318,    54,    53,    41,    38,   112,
     113,   247,     0,   249,   250,    64,   113,    64,    65,   237,
     238,   239,   341,    38,   242,   243,    56,   245,    38,   132,
      64,    56,   253,   293,   152,    38,   133,   134,   156,    64,
     137,    56,    53,   140,   141,     5,    56,   137,   367,   152,
     140,    54,   312,   156,    65,   152,     7,   317,   318,   156,
     296,   297,    53,   166,   285,    38,   284,    53,   286,   164,
     288,    57,   167,   170,    38,   170,   173,    53,    29,    65,
     301,   302,    54,    56,   187,    38,    38,    38,    40,    65,
      54,    39,    64,   211,    42,    43,    44,    45,    46,    47,
      21,   198,    23,    51,    38,    53,    55,    55,    38,    57,
     346,   206,   348,    39,   211,    38,   337,    65,    69,   244,
      38,   293,    54,    48,    49,    50,   244,    52,   349,    42,
      55,   352,    64,   354,    40,    60,    61,    40,   356,   360,
     312,   362,   245,    94,   241,   317,   318,   244,   369,    40,
      54,    40,   370,    38,   251,   252,   253,   254,   255,   380,
      64,   251,   252,   384,    54,    37,    38,    43,    44,    45,
      46,    47,    55,   268,    64,    51,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    55,   137,    42,   285,   140,
     141,    55,    55,    63,    64,    64,   293,    52,    53,    54,
      63,    64,    58,   293,   301,   302,   251,   252,    63,   249,
     250,    65,   309,    53,    38,   312,    39,    40,    38,    42,
     317,   318,   312,    55,   321,    40,    65,   317,   318,    57,
      53,    53,   198,    38,    57,    38,    59,    64,    38,    53,
     337,   338,    65,   340,    21,    55,    38,   198,   345,   374,
     347,    38,   349,    38,    58,   352,    14,   354,    38,    40,
     357,    55,    41,   360,    38,   362,    41,    45,    46,    47,
      38,   222,   369,    51,    41,   241,    59,   374,    38,   376,
      20,    38,    55,   380,   381,    55,    40,   384,   254,   255,
     241,    54,    20,   244,    14,    15,    29,    53,    59,     6,
     251,   252,   253,   254,   255,    12,    13,    27,    54,    16,
      53,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     177,   231,    42,   343,    31,    32,    33,    34,    35,    36,
      37,    38,    52,    53,   285,   178,   232,   307,   137,    59,
      -1,    39,   293,   309,    42,    43,    44,    45,    46,    47,
     301,   302,   140,    51,    -1,   321,   307,   308,   309,    -1,
      58,   312,   134,    -1,    -1,    -1,   317,   318,    -1,    -1,
     321,    -1,   338,    -1,   340,    -1,    -1,    -1,    -1,   345,
      -1,   347,    -1,    -1,    -1,    -1,   337,   338,    -1,   340,
      -1,   357,    -1,    -1,   345,    -1,   347,    -1,   349,    -1,
      -1,   352,    -1,   354,    -1,    -1,   357,    -1,    -1,   360,
     376,   362,    -1,    -1,    -1,   381,    -1,    -1,   369,    -1,
      -1,    -1,    -1,   374,    -1,   376,    -1,    -1,    -1,   380,
     381,    -1,    -1,   384,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    48,    49,    50,    19,    52,    -1,    22,
      55,    -1,    25,    26,    -1,    60,    61,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     7,     8,     9,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    -1,    56,    25,    26,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,     7,     8,
       9,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    22,    -1,    56,    25,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    -1,    56,    25,    26,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,     7,     8,     9,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    22,    -1,    56,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,
      -1,    56,    25,    26,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     7,     8,     9,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    -1,    56,    25,    26,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,     7,     8,
       9,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    22,    -1,    56,    25,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    -1,    56,    25,    26,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,     7,     8,     9,    -1,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    22,    -1,    56,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,
      -1,    56,    25,    26,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     7,     8,     9,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    -1,    56,    25,    26,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,     7,     8,
       9,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    22,    -1,    56,    25,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    -1,    56,    25,    26,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    56,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    48,    49,    50,     7,    52,    -1,
      54,    -1,    12,    13,    -1,    -1,    60,    61,    -1,    19,
      55,    21,    22,    23,    -1,    25,    26,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    48,
      49,    50,     7,    52,    -1,    -1,    55,    12,    13,    -1,
      -1,    60,    61,    -1,    19,    55,    21,    22,    23,    -1,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    48,    49,    50,     7,    52,    -1,
      -1,    55,    12,    13,    -1,    -1,    60,    61,    -1,    19,
      55,    21,    22,    23,    -1,    25,    26,    12,    13,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    12,
      13,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    55,    -1,    42,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    52,    53,    42,
      55,    12,    13,    48,    49,    50,    -1,    52,    -1,    52,
      53,    -1,    55,    -1,    -1,    60,    61,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    52,    53,    42,    -1,     7,     8,     9,    -1,    11,
      12,    13,    -1,    52,    53,    -1,    -1,    19,    -1,    58,
      22,    -1,    -1,    25,    26,    -1,    65,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    42,    39,
      40,    41,    42,    41,    -1,    -1,    -1,    -1,    52,    53,
      48,    49,    50,    53,    52,    59,    -1,    57,    -1,    59,
      -1,    -1,    60,    61,    64,    65,    31,    32,    33,    34,
      35,    36,    37,    38,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    52,    53,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    52,    53,
      42,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      52,    53,    42,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    52,    53,    42,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    52,    53,    42,    39,    -1,    -1,
      42,    43,    44,    45,    46,    47,    52,    53,    -1,    51,
      -1,    -1,    -1,    39,    -1,    57,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    51,    39,    -1,    54,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    51,    -1,
      39,    54,    41,    42,    43,    44,    45,    46,    47,    -1,
      39,    -1,    51,    42,    43,    44,    45,    46,    47,    -1,
      39,    -1,    51,    42,    43,    44,    45,    46,    47,    -1,
      39,    -1,    51,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    51,    31,    32,    33,    34,    35,    36,    37,
      38,    31,    32,    33,    34,    35,    36,    37,    38,    31,
      32,    33,    34,    35,    36,    37,    38,    31,    32,    33,
      34,    35,    36,    31,    32,    33,    34,    35,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    67,    73,    38,     0,     5,    74,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    42,    52,    53,
      83,    97,   101,   102,     6,    12,    13,    16,    38,    68,
      69,    70,    81,    83,    91,    92,    97,    98,    53,    65,
      31,    32,    33,    34,    35,    36,    31,    32,    33,    34,
      35,    36,    53,   101,    53,    75,   100,   101,    38,    76,
      77,    38,    38,    38,    39,    40,    42,    57,    59,    65,
      93,    69,    41,    64,    38,    54,    81,    83,   102,   101,
     100,    54,    63,   101,    39,    42,    43,    44,    45,    46,
      47,    51,    54,    53,    55,    38,    40,    38,    93,    17,
      18,    39,    83,   100,    42,    37,    58,    65,   100,   100,
      81,    83,    40,    40,    37,    38,    83,    54,    54,   101,
     100,   100,   100,   100,   100,   100,   100,   100,    38,    54,
      84,    85,     7,     8,     9,    11,    19,    22,    25,    26,
      30,    79,    80,    82,    83,    86,    89,    92,   103,   110,
     111,   112,    40,    83,   100,   102,    40,    38,    55,    55,
      58,    65,    58,   100,    14,    15,    27,    38,    59,    83,
      99,   100,   102,    65,    38,    38,    78,    54,    64,   100,
       6,    38,    83,   109,    83,   109,    55,    53,    90,   100,
      38,    55,    90,    92,    97,    98,   104,   105,    55,    90,
     104,    56,    80,    83,   100,   102,    38,    59,    83,   100,
     102,    40,    38,    56,    71,    56,    72,    76,    65,    93,
      53,   100,    55,    93,    94,    38,    83,    93,    64,    78,
      85,    53,    21,   113,   114,    90,   100,    48,    49,    50,
      52,    55,    60,    61,    65,    21,    23,   106,   108,    55,
      55,    63,    64,    79,    55,    55,    93,    38,    83,    94,
     102,    38,    38,    56,    56,    76,    58,    38,    14,    95,
      96,    97,    38,    54,    84,    13,    38,    91,    56,   114,
      54,    90,    90,    90,    40,    79,    40,    90,    40,    90,
      38,    90,   100,    41,    56,   108,   106,   106,   105,   105,
      56,    79,    79,    38,    94,    93,    56,    64,    41,    55,
      54,    38,    41,    90,    56,    90,    90,    41,    41,    25,
      26,    55,    82,    83,    86,    89,    92,   103,   107,   108,
      56,    56,    56,    56,    38,    96,    97,    79,    55,    38,
      55,   107,    20,    87,    88,    55,   107,    55,   107,    79,
      54,    56,    79,    40,    79,   114,    19,    55,    20,    88,
      79,   108,    79,   108,    56,    53,    56,    56,    90,    79,
      19,    56,    56,    54,    53,   114,    55,    56,    90,    81,
      79,    55,    54,    56,    79,    56
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
      
/* Line 1267 of yacc.c.  */
#line 2023 "yacc.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 431 "yacc.y"


int main(){
    yyparse();
    if(error_flag == 0)
        printf("Compiled successful!\n");
    return 0;
}

