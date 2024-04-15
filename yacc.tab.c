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
     Package = 258,
     Import = 259,
     Func = 260,
     Return = 261,
     Go = 262,
     Defer = 263,
     Chan = 264,
     Select = 265,
     Const = 266,
     Var = 267,
     Map = 268,
     Type = 269,
     Struct = 270,
     Interface = 271,
     If = 272,
     Else = 273,
     Case = 274,
     Switch = 275,
     Default = 276,
     Fallthrough = 277,
     Continue = 278,
     Break = 279,
     Range = 280,
     Do = 281,
     While = 282,
     For = 283,
     DecInt = 284,
     OctInt = 285,
     BinInt = 286,
     HexInt = 287,
     DecFloat = 288,
     HexFloat = 289,
     String = 290,
     Variable = 291,
     Plus = 292,
     Equals = 293,
     Colon = 294,
     Minus = 295,
     Times = 296,
     Devides = 297,
     Mod = 298,
     And = 299,
     Or = 300,
     Xor = 301,
     Not = 302,
     OpenBracket = 303,
     ClosingBracket = 304,
     OpenCurlyBracket = 305,
     ClosingCurlyBracket = 306,
     OpenSquareBracket = 307,
     ClosingSquareBracket = 308,
     ChannelArrow = 309,
     UNARY = 310
   };
#endif
/* Tokens.  */
#define Package 258
#define Import 259
#define Func 260
#define Return 261
#define Go 262
#define Defer 263
#define Chan 264
#define Select 265
#define Const 266
#define Var 267
#define Map 268
#define Type 269
#define Struct 270
#define Interface 271
#define If 272
#define Else 273
#define Case 274
#define Switch 275
#define Default 276
#define Fallthrough 277
#define Continue 278
#define Break 279
#define Range 280
#define Do 281
#define While 282
#define For 283
#define DecInt 284
#define OctInt 285
#define BinInt 286
#define HexInt 287
#define DecFloat 288
#define HexFloat 289
#define String 290
#define Variable 291
#define Plus 292
#define Equals 293
#define Colon 294
#define Minus 295
#define Times 296
#define Devides 297
#define Mod 298
#define And 299
#define Or 300
#define Xor 301
#define Not 302
#define OpenBracket 303
#define ClosingBracket 304
#define OpenCurlyBracket 305
#define ClosingCurlyBracket 306
#define OpenSquareBracket 307
#define ClosingSquareBracket 308
#define ChannelArrow 309
#define UNARY 310




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
#line 229 "yacc.tab.c"

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
#define YYLAST   921

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  149
/* YYNRULES -- Number of states.  */
#define YYNSTATES  279

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    57,     2,    58,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    56,
      60,     2,    59,     2,     2,     2,     2,     2,     2,     2,
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
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     9,    12,    14,    17,    23,    30,
      36,    43,    46,    50,    52,    55,    58,    61,    66,    68,
      72,    75,    79,    84,    89,    95,   100,   105,   107,   111,
     113,   116,   118,   120,   122,   124,   126,   128,   130,   132,
     134,   136,   138,   141,   145,   150,   154,   156,   160,   163,
     165,   167,   171,   175,   179,   185,   192,   199,   207,   214,
     222,   227,   233,   238,   244,   246,   248,   250,   255,   260,
     265,   270,   274,   278,   283,   288,   292,   297,   302,   308,
     313,   319,   323,   327,   331,   335,   339,   345,   351,   357,
     364,   368,   372,   374,   378,   382,   386,   390,   394,   398,
     402,   406,   410,   412,   414,   416,   418,   420,   422,   424,
     427,   430,   433,   436,   439,   442,   445,   448,   451,   454,
     457,   460,   462,   465,   467,   471,   477,   483,   485,   488,
     490,   492,   494,   496,   498,   500,   502,   504,   506,   513,
     519,   524,   530,   534,   545,   554,   557,   560,   563,   566
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    68,    69,    63,    -1,    64,    -1,    63,
      64,    -1,    65,    -1,     5,    72,    -1,    14,    36,    15,
      50,    51,    -1,    14,    36,    15,    50,    66,    51,    -1,
      14,    36,    16,    50,    51,    -1,    14,    36,    16,    50,
      67,    51,    -1,    36,    36,    -1,    66,    36,    36,    -1,
      71,    -1,    67,    71,    -1,     3,    36,    -1,     4,    88,
      -1,     4,    48,    70,    49,    -1,    88,    -1,    70,    56,
      88,    -1,    70,    88,    -1,    36,    48,    49,    -1,    36,
      48,    78,    49,    -1,    36,    48,    49,    73,    -1,    36,
      48,    78,    49,    73,    -1,    71,    50,    74,    51,    -1,
      71,    50,    74,    51,    -1,    36,    -1,    73,    57,    36,
      -1,    75,    -1,    74,    75,    -1,    77,    -1,    76,    -1,
      86,    -1,    81,    -1,    84,    -1,    24,    -1,    23,    -1,
      90,    -1,    95,    -1,    96,    -1,    97,    -1,     6,    87,
      -1,    36,    48,    49,    -1,    36,    48,    80,    49,    -1,
      36,    58,    77,    -1,    79,    -1,    78,    57,    79,    -1,
      36,    36,    -1,    36,    -1,    88,    -1,    36,    58,    80,
      -1,    80,    57,    36,    -1,    80,    57,    88,    -1,    17,
      85,    50,    74,    51,    -1,    17,    85,    50,    74,    51,
      83,    -1,    17,    85,    50,    74,    51,    82,    -1,    17,
      85,    50,    74,    51,    82,    83,    -1,    18,    17,    85,
      50,    74,    51,    -1,    82,    18,    17,    85,    50,    74,
      51,    -1,    18,    50,    74,    51,    -1,    28,    85,    50,
      74,    51,    -1,    28,    50,    74,    51,    -1,    28,    85,
      50,    74,    51,    -1,    36,    -1,    87,    -1,    86,    -1,
      85,    44,    44,    87,    -1,    85,    45,    45,    87,    -1,
      85,    47,    38,    87,    -1,    85,    38,    38,    87,    -1,
      85,    59,    87,    -1,    85,    60,    87,    -1,    85,    59,
      38,    87,    -1,    85,    60,    38,    87,    -1,    85,    56,
      87,    -1,    36,    39,    38,    87,    -1,    36,    39,    38,
      89,    -1,    36,    39,    38,    25,    87,    -1,    36,    39,
      38,    77,    -1,    36,    39,    38,    54,    36,    -1,    36,
      54,    88,    -1,    36,    38,    87,    -1,    36,    38,    89,
      -1,    36,    38,    77,    -1,    12,    36,    36,    -1,    12,
      36,    36,    38,    87,    -1,    12,    36,    36,    38,    89,
      -1,    12,    36,    36,    38,    77,    -1,    12,    36,    36,
      38,    54,    36,    -1,    36,    37,    37,    -1,    36,    40,
      40,    -1,    88,    -1,    87,    37,    87,    -1,    87,    40,
      87,    -1,    87,    41,    87,    -1,    87,    42,    87,    -1,
      87,    43,    87,    -1,    87,    44,    87,    -1,    87,    45,
      87,    -1,    87,    46,    87,    -1,    48,    87,    49,    -1,
      89,    -1,    29,    -1,    30,    -1,    32,    -1,    31,    -1,
      33,    -1,    34,    -1,    37,    29,    -1,    37,    30,    -1,
      37,    32,    -1,    37,    31,    -1,    37,    33,    -1,    37,
      34,    -1,    40,    29,    -1,    40,    30,    -1,    40,    32,
      -1,    40,    31,    -1,    40,    33,    -1,    40,    34,    -1,
      35,    -1,    47,    88,    -1,    36,    -1,    36,    58,    89,
      -1,    20,    85,    50,    91,    51,    -1,    20,    85,    50,
      91,    51,    -1,    93,    -1,    91,    93,    -1,    77,    -1,
      76,    -1,    86,    -1,    81,    -1,    84,    -1,    24,    -1,
      23,    -1,    90,    -1,    93,    -1,    19,    85,    39,    50,
      74,    51,    -1,    19,    85,    39,    92,    93,    -1,    19,
      85,    39,    92,    -1,    21,    39,    50,    74,    51,    -1,
      21,    39,    92,    -1,     5,    48,    78,    49,    50,    74,
      51,    48,    80,    49,    -1,     5,    48,    49,    50,    74,
      51,    48,    49,    -1,     7,    77,    -1,     7,    94,    -1,
       8,    77,    -1,     8,    94,    -1,    10,    50,    91,    51,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    85,    85,    89,    90,    94,    95,    99,   100,   101,
     102,   106,   107,   109,   110,   114,   118,   119,   123,   124,
     125,   129,   130,   131,   132,   136,   137,   141,   142,   146,
     147,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   165,   169,   170,   171,   175,   176,   180,   184,
     185,   186,   187,   188,   192,   193,   194,   195,   199,   200,
     204,   208,   209,   210,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   285,   286,   290,   291,   295,   296,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   310,   311,
     312,   313,   314,   317,   318,   321,   322,   325,   326,   329
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Package", "Import", "Func", "Return",
  "Go", "Defer", "Chan", "Select", "Const", "Var", "Map", "Type", "Struct",
  "Interface", "If", "Else", "Case", "Switch", "Default", "Fallthrough",
  "Continue", "Break", "Range", "Do", "While", "For", "DecInt", "OctInt",
  "BinInt", "HexInt", "DecFloat", "HexFloat", "String", "Variable", "Plus",
  "Equals", "Colon", "Minus", "Times", "Devides", "Mod", "And", "Or",
  "Xor", "Not", "OpenBracket", "ClosingBracket", "OpenCurlyBracket",
  "ClosingCurlyBracket", "OpenSquareBracket", "ClosingSquareBracket",
  "ChannelArrow", "UNARY", "';'", "','", "'.'", "'>'", "'<'", "$accept",
  "program_struct", "program", "default_block", "type_block",
  "struct_fields_list", "int_body", "package_block", "import_block",
  "import_list", "func_head", "func_block", "func_return_block",
  "func_body", "code_block", "return_block", "inline_call_block", "args",
  "arg", "variable_list", "if_block", "if_else_block", "else_block",
  "for_block", "cond", "assignment", "expression", "factor",
  "object_field", "switch_block", "switch_body", "switch_code_block",
  "case_block", "anon_func_block", "gorutine_block", "defer_block",
  "select_block", 0
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
     305,   306,   307,   308,   309,   310,    59,    44,    46,    62,
      60
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    66,    66,    67,    67,    68,    69,    69,    70,    70,
      70,    71,    71,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    76,    77,    77,    77,    78,    78,    79,    80,
      80,    80,    80,    80,    81,    81,    81,    81,    82,    82,
      83,    84,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    89,    90,    90,    91,    91,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    93,
      93,    93,    93,    94,    94,    95,    95,    96,    96,    97
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     2,     5,     6,     5,
       6,     2,     3,     1,     2,     2,     2,     4,     1,     3,
       2,     3,     4,     4,     5,     4,     4,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     4,     3,     1,     3,     2,     1,
       1,     3,     3,     3,     5,     6,     6,     7,     6,     7,
       4,     5,     4,     5,     1,     1,     1,     4,     4,     4,
       4,     3,     3,     4,     4,     3,     4,     4,     5,     4,
       5,     3,     3,     3,     3,     3,     5,     5,     5,     6,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     1,     3,     5,     5,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     5,
       4,     5,     3,    10,     8,     2,     2,     2,     2,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    15,     1,     0,     0,   103,   104,
     106,   105,   107,   108,   121,   123,     0,     0,     0,     0,
      16,   102,     0,     0,     2,     3,     5,     0,   109,   110,
     112,   111,   113,   114,   115,   116,   118,   117,   119,   120,
     122,     0,    18,     0,     0,     6,     0,     4,   124,    17,
       0,    20,     0,     0,     0,     0,    19,     0,    21,     0,
      46,     0,     0,     0,     0,     0,     0,     0,    37,    36,
       0,     0,     0,    29,    32,    31,    34,    35,    33,    38,
      39,    40,    41,     0,     0,    48,    27,    23,    22,     0,
       0,    42,    92,     0,     0,   145,   146,   147,   148,     0,
       0,    64,     0,    66,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    30,     0,     7,     0,
       9,     0,    13,     0,    24,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   127,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,   123,    84,    82,    83,     0,    91,    49,
      43,     0,    50,    81,    45,    11,     0,     8,    10,    14,
      28,   101,    93,    94,    95,    96,    97,    98,    99,   100,
       0,     0,     0,     0,   149,   128,     0,     0,     0,     0,
       0,     0,    75,     0,    71,     0,    72,     0,    62,     0,
       0,     0,     0,    79,    76,    77,     0,    44,     0,    12,
       0,     0,     0,   135,   134,     0,   130,   129,   132,   133,
     131,   136,   142,   137,     0,    88,    86,    87,    70,    67,
      68,    69,    54,    73,    74,   125,    61,    78,    80,    51,
     102,    52,    53,     0,     0,     0,   140,     0,    89,     0,
      56,    55,     0,     0,     0,   139,   141,     0,     0,     0,
      57,     0,     0,   138,     0,     0,     0,   144,     0,     0,
      60,     0,     0,     0,     0,   143,    58,     0,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    24,    25,    26,   119,   121,     3,     7,    41,
      44,    45,    87,    72,    73,    74,    75,    59,    60,   161,
      76,   250,   251,    77,   102,    78,   104,    92,    21,    79,
     138,   222,   139,    96,    80,    81,    82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -199
static const yytype_int16 yypact[] =
{
      30,     0,    58,    26,  -199,  -199,   776,    86,  -199,  -199,
    -199,  -199,  -199,  -199,  -199,    32,   494,   520,   836,   836,
    -199,  -199,    81,    91,    86,  -199,  -199,   108,  -199,  -199,
    -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,
    -199,   585,  -199,    54,    55,  -199,   124,  -199,  -199,  -199,
     836,  -199,    11,   551,    95,    97,  -199,   112,   114,    66,
    -199,   796,    27,    27,   103,   118,   508,   508,  -199,  -199,
     482,    56,    14,  -199,  -199,  -199,  -199,  -199,  -199,  -199,
    -199,  -199,  -199,     3,     5,  -199,  -199,    98,   114,   121,
     796,   145,  -199,   110,    34,  -199,  -199,  -199,  -199,    82,
     123,   685,   205,  -199,   145,   522,   551,   618,   128,   816,
     138,   122,   715,   836,   130,  -199,  -199,   142,  -199,    28,
    -199,    36,  -199,   143,    98,  -199,   692,   796,   796,   796,
     796,   796,   796,   796,   796,    50,   508,   153,     4,  -199,
     155,   160,   117,   136,   161,   551,   796,   736,   756,    82,
      61,   551,  -199,    40,  -199,   145,   462,   559,  -199,   146,
    -199,    67,  -199,  -199,  -199,  -199,   165,  -199,  -199,  -199,
    -199,  -199,   125,   125,   125,   125,   145,   145,   145,   145,
     158,    69,   637,   113,  -199,  -199,   613,   796,   796,   796,
     796,   217,   145,   796,   145,   796,   145,     8,  -199,   275,
     173,   796,   174,  -199,   145,   462,   855,  -199,   874,  -199,
     551,   170,   460,  -199,  -199,   551,  -199,  -199,  -199,  -199,
    -199,  -199,  -199,  -199,   175,  -199,   145,   462,   145,   145,
     145,   145,   203,   145,   145,  -199,  -199,   145,  -199,   169,
    -199,    32,  -199,   300,   551,   551,    82,   325,  -199,     1,
     204,  -199,   180,   350,   375,  -199,  -199,   508,   551,     2,
    -199,   181,   187,  -199,   642,   400,   508,  -199,   855,   551,
    -199,   661,    71,   425,   551,  -199,  -199,   450,  -199
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -199,  -199,  -199,   212,  -199,  -199,  -199,  -199,  -199,  -199,
     -68,  -199,   150,  -102,   -70,  -172,   -48,   104,   157,  -198,
    -166,  -199,    -3,  -155,   -60,   -61,    85,    -6,   -26,  -138,
      99,    39,  -135,   191,  -199,  -199,  -199
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -124
static const yytype_int16 yytable[] =
{
      20,    48,   116,   185,   150,   103,   103,   105,   239,   103,
     107,   216,    40,    42,    95,    97,   122,   218,   257,   266,
      61,    62,    63,   136,    64,   137,    65,   136,   219,   137,
       6,    66,    93,     1,    67,    51,     4,    68,    69,   117,
     216,    43,    70,   191,    56,   221,   218,    57,   223,   199,
      71,   258,   258,   169,   118,   184,   120,   219,     5,   235,
      58,   154,   185,    94,   166,   115,   164,    61,    62,    63,
     272,    64,    43,    65,   221,   103,   182,   223,    66,   167,
     116,    67,   112,   156,    68,    69,    57,   168,   112,    70,
      27,    22,   114,   108,   109,   110,   111,    71,   200,   180,
      23,   136,    52,   137,   112,    53,   162,   163,   243,   203,
     113,   255,   198,   247,   114,    88,   207,    43,   211,    61,
     275,   116,   220,    89,   208,    65,    89,    46,   208,   116,
      66,   205,   136,    67,   137,   217,   213,   214,   225,    54,
      55,    70,   253,   254,    15,    83,    91,    84,    85,    71,
      86,   220,   164,    99,   100,   123,   265,    57,   135,   140,
     227,   188,   158,   215,   217,   152,    94,   273,   131,   132,
     133,   134,   277,   116,    48,   126,   157,   116,   165,   170,
     240,   189,   127,   116,   116,   128,   129,   130,   131,   132,
     133,   134,   183,   186,   155,   116,   103,   264,   187,   190,
     162,   209,   242,   116,   206,   103,   271,   116,   210,   153,
     238,   248,   172,   173,   174,   175,   176,   177,   178,   179,
     244,   249,   259,    61,    62,    63,   208,    64,   261,    65,
     267,   192,   194,   196,    66,   268,    47,    67,   124,   181,
      68,    69,   204,   141,     0,    70,   125,   260,   197,   142,
     143,   246,   144,    71,    98,   145,     0,     0,     0,     0,
       0,   146,   162,     0,   147,   148,     0,     0,   232,     0,
       0,   226,   228,   229,   230,   231,     0,     0,   233,     0,
     234,    61,    62,    63,     0,    64,   237,    65,     0,     0,
       0,     0,    66,     0,     0,    67,     0,     0,    68,    69,
       0,     0,     0,    70,     0,     0,    61,    62,    63,     0,
      64,    71,    65,     0,     0,     0,     0,    66,     0,     0,
      67,     0,     0,    68,    69,     0,   236,     0,    70,     0,
       0,    61,    62,    63,     0,    64,    71,    65,     0,     0,
       0,     0,    66,     0,     0,    67,     0,     0,    68,    69,
       0,   252,     0,    70,     0,     0,    61,    62,    63,     0,
      64,    71,    65,     0,     0,     0,     0,    66,     0,     0,
      67,     0,     0,    68,    69,     0,   256,     0,    70,     0,
       0,    61,    62,    63,     0,    64,    71,    65,     0,     0,
       0,     0,    66,     0,     0,    67,     0,     0,    68,    69,
       0,   262,     0,    70,     0,     0,    61,    62,    63,     0,
      64,    71,    65,     0,     0,     0,     0,    66,     0,     0,
      67,     0,     0,    68,    69,     0,   263,     0,    70,     0,
       0,    61,    62,    63,     0,    64,    71,    65,     0,     0,
       0,     0,    66,     0,     0,    67,     0,     0,    68,    69,
       0,   270,     0,    70,     0,     0,    61,    62,    63,     0,
      64,    71,    65,     0,     0,     0,    61,    66,     0,     0,
      67,     0,    65,    68,    69,     0,   276,    66,    70,   136,
      67,   137,     0,   213,   214,     0,    71,     0,    70,     0,
       0,     0,     0,     0,    65,     0,    71,     0,     0,  -102,
       0,   278,  -102,  -102,  -102,  -102,     0,     0,  -102,     0,
     245,     8,     9,    10,    11,    12,    13,    14,   101,    16,
      65,     0,    17,    28,    29,    30,    31,    32,    33,    18,
      90,     0,   106,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,   101,    16,     0,     0,    17,    34,
      35,    36,    37,    38,    39,    18,    90,    61,    62,    63,
     141,    64,     0,    65,     0,     0,   142,   143,    66,   144,
       0,    67,   149,     0,    68,    69,     0,     0,   146,    70,
       0,   147,   148,     0,   201,     0,     0,    71,     8,     9,
      10,    11,    12,    13,    14,   153,    16,     0,     0,    17,
       0,     0,     0,     0,     0,     0,    18,    90,     0,     0,
       0,     0,     0,   202,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     0,     0,    17,     0,     0,     0,     0,
       0,     0,    18,     0,    49,     0,     0,     0,     0,     0,
       0,    50,     8,     9,    10,    11,    12,    13,    14,   153,
      16,     0,     0,    17,     0,     0,   141,     0,     0,     0,
      18,    90,   142,   143,     0,   144,     0,   224,   151,     0,
       0,     0,     0,     0,   146,   141,   212,   147,   148,     0,
     141,   142,   143,     0,   144,     0,   142,   143,     0,   144,
       0,     0,   269,   146,     0,     0,   147,   148,   146,   141,
       0,   147,   148,     0,     0,   142,   143,     0,   144,     0,
       0,   274,     0,     0,     0,     0,     0,   146,     0,     0,
     147,   148,   108,   109,   110,   111,  -123,  -123,  -123,   127,
       0,  -123,   128,   129,   130,   131,   132,   133,   134,   113,
       0,   171,     0,    27,     8,     9,    10,    11,    12,    13,
      14,   159,    16,     0,     0,    17,     0,     0,     0,     0,
       0,     0,    18,     0,   160,     8,     9,    10,    11,    12,
      13,    14,    15,    16,   193,     0,    17,     0,     0,     0,
       0,     0,     0,    18,    90,     8,     9,    10,    11,    12,
      13,    14,    15,    16,   195,     0,    17,     0,     0,     0,
       0,     0,     0,    18,    90,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,     0,    17,     0,     0,     0,
       0,     0,     0,    18,    19,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,     0,    17,     0,     0,     0,
       0,     0,     0,    18,    90,     8,     9,    10,    11,    12,
      13,    14,   153,    16,     0,     0,    17,     0,     0,     0,
       0,     0,     0,    18,    90,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,     0,    17,     0,     0,     0,
       0,     0,     0,    18,     8,     9,    10,    11,    12,    13,
      14,   159,    16,     0,     0,    17,     0,     0,     0,     0,
       0,     0,    18,     8,     9,    10,    11,    12,    13,    14,
     241,    16,     0,     0,    17,     0,     0,     0,     0,     0,
       0,    18
};

static const yytype_int16 yycheck[] =
{
       6,    27,    72,   138,   106,    66,    67,    67,   206,    70,
      70,   183,    18,    19,    62,    63,    84,   183,    17,    17,
       6,     7,     8,    19,    10,    21,    12,    19,   183,    21,
       4,    17,     5,     3,    20,    41,    36,    23,    24,    36,
     212,    36,    28,   145,    50,   183,   212,    36,   183,   151,
      36,    50,    50,   121,    51,    51,    51,   212,     0,    51,
      49,   109,   197,    36,    36,    51,   114,     6,     7,     8,
     268,    10,    36,    12,   212,   136,   136,   212,    17,    51,
     150,    20,    48,   109,    23,    24,    36,    51,    48,    28,
      58,     5,    58,    37,    38,    39,    40,    36,    58,    49,
      14,    19,    48,    21,    48,    50,   112,   113,   210,   157,
      54,   246,    51,   215,    58,    49,    49,    36,    49,     6,
      49,   191,   183,    57,    57,    12,    57,    36,    57,   199,
      17,   157,    19,    20,    21,   183,    23,    24,   186,    15,
      16,    28,   244,   245,    36,    50,    61,    50,    36,    36,
      36,   212,   200,    50,    36,    57,   258,    36,    48,    36,
     186,    44,    40,    50,   212,    37,    36,   269,    43,    44,
      45,    46,   274,   243,   200,    90,    38,   247,    36,    36,
     206,    45,    37,   253,   254,    40,    41,    42,    43,    44,
      45,    46,    39,    38,   109,   265,   257,   257,    38,    38,
     206,    36,   208,   273,    58,   266,   266,   277,    50,    36,
      36,    36,   127,   128,   129,   130,   131,   132,   133,   134,
      50,    18,    18,     6,     7,     8,    57,    10,    48,    12,
      49,   146,   147,   148,    17,    48,    24,    20,    88,   135,
      23,    24,   157,    38,    -1,    28,    89,   250,   149,    44,
      45,   212,    47,    36,    63,    50,    -1,    -1,    -1,    -1,
      -1,    56,   268,    -1,    59,    60,    -1,    -1,    51,    -1,
      -1,   186,   187,   188,   189,   190,    -1,    -1,   193,    -1,
     195,     6,     7,     8,    -1,    10,   201,    12,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    -1,    -1,     6,     7,     8,    -1,
      10,    36,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    51,    -1,    28,    -1,
      -1,     6,     7,     8,    -1,    10,    36,    12,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    51,    -1,    28,    -1,    -1,     6,     7,     8,    -1,
      10,    36,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    51,    -1,    28,    -1,
      -1,     6,     7,     8,    -1,    10,    36,    12,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    51,    -1,    28,    -1,    -1,     6,     7,     8,    -1,
      10,    36,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    51,    -1,    28,    -1,
      -1,     6,     7,     8,    -1,    10,    36,    12,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    51,    -1,    28,    -1,    -1,     6,     7,     8,    -1,
      10,    36,    12,    -1,    -1,    -1,     6,    17,    -1,    -1,
      20,    -1,    12,    23,    24,    -1,    51,    17,    28,    19,
      20,    21,    -1,    23,    24,    -1,    36,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    36,    -1,    -1,    37,
      -1,    51,    40,    41,    42,    43,    -1,    -1,    46,    -1,
      50,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      12,    -1,    40,    29,    30,    31,    32,    33,    34,    47,
      48,    -1,    50,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    29,
      30,    31,    32,    33,    34,    47,    48,     6,     7,     8,
      38,    10,    -1,    12,    -1,    -1,    44,    45,    17,    47,
      -1,    20,    50,    -1,    23,    24,    -1,    -1,    56,    28,
      -1,    59,    60,    -1,    25,    -1,    -1,    36,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    54,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    38,    -1,    -1,    -1,
      47,    48,    44,    45,    -1,    47,    -1,    54,    50,    -1,
      -1,    -1,    -1,    -1,    56,    38,    39,    59,    60,    -1,
      38,    44,    45,    -1,    47,    -1,    44,    45,    -1,    47,
      -1,    -1,    50,    56,    -1,    -1,    59,    60,    56,    38,
      -1,    59,    60,    -1,    -1,    44,    45,    -1,    47,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      59,    60,    37,    38,    39,    40,    41,    42,    43,    37,
      -1,    46,    40,    41,    42,    43,    44,    45,    46,    54,
      -1,    49,    -1,    58,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    49,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    62,    68,    36,     0,     4,    69,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    40,    47,    48,
      88,    89,     5,    14,    63,    64,    65,    58,    29,    30,
      31,    32,    33,    34,    29,    30,    31,    32,    33,    34,
      88,    70,    88,    36,    71,    72,    36,    64,    89,    49,
      56,    88,    48,    50,    15,    16,    88,    36,    49,    78,
      79,     6,     7,     8,    10,    12,    17,    20,    23,    24,
      28,    36,    74,    75,    76,    77,    81,    84,    86,    90,
      95,    96,    97,    50,    50,    36,    36,    73,    49,    57,
      48,    87,    88,     5,    36,    77,    94,    77,    94,    50,
      36,    36,    85,    86,    87,    85,    50,    85,    37,    38,
      39,    40,    48,    54,    58,    51,    75,    36,    51,    66,
      51,    67,    71,    57,    73,    79,    87,    37,    40,    41,
      42,    43,    44,    45,    46,    48,    19,    21,    91,    93,
      36,    38,    44,    45,    47,    50,    56,    59,    60,    50,
      74,    50,    37,    36,    77,    87,    89,    38,    40,    36,
      49,    80,    88,    88,    77,    36,    36,    51,    51,    71,
      36,    49,    87,    87,    87,    87,    87,    87,    87,    87,
      49,    78,    85,    39,    51,    93,    38,    38,    44,    45,
      38,    74,    87,    38,    87,    38,    87,    91,    51,    74,
      58,    25,    54,    77,    87,    89,    58,    49,    57,    36,
      50,    49,    39,    23,    24,    50,    76,    77,    81,    84,
      86,    90,    92,    93,    54,    77,    87,    89,    87,    87,
      87,    87,    51,    87,    87,    51,    51,    87,    36,    80,
      89,    36,    88,    74,    50,    50,    92,    74,    36,    18,
      82,    83,    51,    74,    74,    93,    51,    17,    50,    18,
      83,    48,    51,    51,    85,    74,    17,    49,    48,    50,
      51,    85,    80,    74,    50,    49,    51,    74,    51
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
#line 1820 "yacc.tab.c"
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


#line 332 "yacc.y"


int main(){
    yyparse();
    if(error_flag == 0)
        printf("Compiled successful!\n");
    return 0;
}

