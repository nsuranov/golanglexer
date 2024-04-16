/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
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

#line 84 "yacc.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "yacc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IFX = 3,                        /* IFX  */
  YYSYMBOL_Package = 4,                    /* Package  */
  YYSYMBOL_Import = 5,                     /* Import  */
  YYSYMBOL_Func = 6,                       /* Func  */
  YYSYMBOL_Return = 7,                     /* Return  */
  YYSYMBOL_Go = 8,                         /* Go  */
  YYSYMBOL_Defer = 9,                      /* Defer  */
  YYSYMBOL_Chan = 10,                      /* Chan  */
  YYSYMBOL_Select = 11,                    /* Select  */
  YYSYMBOL_Const = 12,                     /* Const  */
  YYSYMBOL_Var = 13,                       /* Var  */
  YYSYMBOL_Map = 14,                       /* Map  */
  YYSYMBOL_Make = 15,                      /* Make  */
  YYSYMBOL_Type = 16,                      /* Type  */
  YYSYMBOL_Struct = 17,                    /* Struct  */
  YYSYMBOL_Interface = 18,                 /* Interface  */
  YYSYMBOL_If = 19,                        /* If  */
  YYSYMBOL_Else = 20,                      /* Else  */
  YYSYMBOL_Case = 21,                      /* Case  */
  YYSYMBOL_Switch = 22,                    /* Switch  */
  YYSYMBOL_Default = 23,                   /* Default  */
  YYSYMBOL_Fallthrough = 24,               /* Fallthrough  */
  YYSYMBOL_Continue = 25,                  /* Continue  */
  YYSYMBOL_Break = 26,                     /* Break  */
  YYSYMBOL_Range = 27,                     /* Range  */
  YYSYMBOL_Do = 28,                        /* Do  */
  YYSYMBOL_While = 29,                     /* While  */
  YYSYMBOL_For = 30,                       /* For  */
  YYSYMBOL_DecInt = 31,                    /* DecInt  */
  YYSYMBOL_OctInt = 32,                    /* OctInt  */
  YYSYMBOL_BinInt = 33,                    /* BinInt  */
  YYSYMBOL_HexInt = 34,                    /* HexInt  */
  YYSYMBOL_DecFloat = 35,                  /* DecFloat  */
  YYSYMBOL_HexFloat = 36,                  /* HexFloat  */
  YYSYMBOL_String = 37,                    /* String  */
  YYSYMBOL_Variable = 38,                  /* Variable  */
  YYSYMBOL_Plus = 39,                      /* Plus  */
  YYSYMBOL_Equals = 40,                    /* Equals  */
  YYSYMBOL_Colon = 41,                     /* Colon  */
  YYSYMBOL_Minus = 42,                     /* Minus  */
  YYSYMBOL_Times = 43,                     /* Times  */
  YYSYMBOL_Devides = 44,                   /* Devides  */
  YYSYMBOL_Mod = 45,                       /* Mod  */
  YYSYMBOL_And = 46,                       /* And  */
  YYSYMBOL_Or = 47,                        /* Or  */
  YYSYMBOL_StatementOr = 48,               /* StatementOr  */
  YYSYMBOL_StatementAnd = 49,              /* StatementAnd  */
  YYSYMBOL_StatementEquals = 50,           /* StatementEquals  */
  YYSYMBOL_Xor = 51,                       /* Xor  */
  YYSYMBOL_Not = 52,                       /* Not  */
  YYSYMBOL_OpenBracket = 53,               /* OpenBracket  */
  YYSYMBOL_ClosingBracket = 54,            /* ClosingBracket  */
  YYSYMBOL_OpenCurlyBracket = 55,          /* OpenCurlyBracket  */
  YYSYMBOL_ClosingCurlyBracket = 56,       /* ClosingCurlyBracket  */
  YYSYMBOL_OpenSquareBracket = 57,         /* OpenSquareBracket  */
  YYSYMBOL_ClosingSquareBracket = 58,      /* ClosingSquareBracket  */
  YYSYMBOL_ChannelArrow = 59,              /* ChannelArrow  */
  YYSYMBOL_Less = 60,                      /* Less  */
  YYSYMBOL_More = 61,                      /* More  */
  YYSYMBOL_UNARY = 62,                     /* UNARY  */
  YYSYMBOL_63_ = 63,                       /* ';'  */
  YYSYMBOL_64_ = 64,                       /* ','  */
  YYSYMBOL_65_ = 65,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_program_struct = 67,            /* program_struct  */
  YYSYMBOL_program = 68,                   /* program  */
  YYSYMBOL_default_block = 69,             /* default_block  */
  YYSYMBOL_type_block = 70,                /* type_block  */
  YYSYMBOL_struct_fields_list = 71,        /* struct_fields_list  */
  YYSYMBOL_int_body = 72,                  /* int_body  */
  YYSYMBOL_package_block = 73,             /* package_block  */
  YYSYMBOL_import_block = 74,              /* import_block  */
  YYSYMBOL_import_list = 75,               /* import_list  */
  YYSYMBOL_func_head = 76,                 /* func_head  */
  YYSYMBOL_func_block = 77,                /* func_block  */
  YYSYMBOL_func_return_block = 78,         /* func_return_block  */
  YYSYMBOL_func_body = 79,                 /* func_body  */
  YYSYMBOL_code_block = 80,                /* code_block  */
  YYSYMBOL_variable_list = 81,             /* variable_list  */
  YYSYMBOL_return_block = 82,              /* return_block  */
  YYSYMBOL_inline_call_block = 83,         /* inline_call_block  */
  YYSYMBOL_args = 84,                      /* args  */
  YYSYMBOL_arg = 85,                       /* arg  */
  YYSYMBOL_if_block = 86,                  /* if_block  */
  YYSYMBOL_if_else_block = 87,             /* if_else_block  */
  YYSYMBOL_else_block = 88,                /* else_block  */
  YYSYMBOL_for_block = 89,                 /* for_block  */
  YYSYMBOL_condition = 90,                 /* condition  */
  YYSYMBOL_assignment = 91,                /* assignment  */
  YYSYMBOL_array_index = 92,               /* array_index  */
  YYSYMBOL_array_assignment = 93,          /* array_assignment  */
  YYSYMBOL_factor_list = 94,               /* factor_list  */
  YYSYMBOL_factor_value = 95,              /* factor_value  */
  YYSYMBOL_value = 96,                     /* value  */
  YYSYMBOL_auto_type_assignment = 97,      /* auto_type_assignment  */
  YYSYMBOL_dif_assigment_obj = 98,         /* dif_assigment_obj  */
  YYSYMBOL_expression = 99,                /* expression  */
  YYSYMBOL_factor = 100,                   /* factor  */
  YYSYMBOL_express = 101,                  /* express  */
  YYSYMBOL_term = 102,                     /* term  */
  YYSYMBOL_object_field = 103,             /* object_field  */
  YYSYMBOL_switch_block = 104,             /* switch_block  */
  YYSYMBOL_switch_body = 105,              /* switch_body  */
  YYSYMBOL_switch_code_block = 106,        /* switch_code_block  */
  YYSYMBOL_case_block = 107,               /* case_block  */
  YYSYMBOL_anon_func_block = 108,          /* anon_func_block  */
  YYSYMBOL_gorutine_block = 109,           /* gorutine_block  */
  YYSYMBOL_defer_block = 110,              /* defer_block  */
  YYSYMBOL_select_block = 111              /* select_block  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1329

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  191
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  356

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   317


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    93,    93,    97,    98,   102,   103,   104,   107,   108,
     109,   110,   114,   115,   119,   120,   124,   129,   130,   134,
     135,   136,   139,   140,   141,   142,   146,   150,   151,   155,
     156,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   173,   174,   175,   176,   177,   178,   179,   183,
     187,   188,   189,   193,   194,   198,   202,   203,   204,   208,
     209,   210,   211,   215,   216,   220,   224,   225,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   334,
     335,   336,   337,   340,   341,   344,   345,   348,   349,   352,
     353,   354,   355,   356,   357,   358,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   373,   374,   375,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   410,
     411,   412,   415,   416,   417,   418,   419,   420,   423,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   445,   446,   450,   454,   455,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   469,   470,
     471,   472,   473,   476,   477,   480,   481,   484,   485,   488,
     489,   490
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IFX", "Package",
  "Import", "Func", "Return", "Go", "Defer", "Chan", "Select", "Const",
  "Var", "Map", "Make", "Type", "Struct", "Interface", "If", "Else",
  "Case", "Switch", "Default", "Fallthrough", "Continue", "Break", "Range",
  "Do", "While", "For", "DecInt", "OctInt", "BinInt", "HexInt", "DecFloat",
  "HexFloat", "String", "Variable", "Plus", "Equals", "Colon", "Minus",
  "Times", "Devides", "Mod", "And", "Or", "StatementOr", "StatementAnd",
  "StatementEquals", "Xor", "Not", "OpenBracket", "ClosingBracket",
  "OpenCurlyBracket", "ClosingCurlyBracket", "OpenSquareBracket",
  "ClosingSquareBracket", "ChannelArrow", "Less", "More", "UNARY", "';'",
  "','", "'.'", "$accept", "program_struct", "program", "default_block",
  "type_block", "struct_fields_list", "int_body", "package_block",
  "import_block", "import_list", "func_head", "func_block",
  "func_return_block", "func_body", "code_block", "variable_list",
  "return_block", "inline_call_block", "args", "arg", "if_block",
  "if_else_block", "else_block", "for_block", "condition", "assignment",
  "array_index", "array_assignment", "factor_list", "factor_value",
  "value", "auto_type_assignment", "dif_assigment_obj", "expression",
  "factor", "express", "term", "object_field", "switch_block",
  "switch_body", "switch_code_block", "case_block", "anon_func_block",
  "gorutine_block", "defer_block", "select_block", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-255)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-165)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,    51,    27,   111,  -255,  -255,  1095,   988,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,    68,   451,   562,  1107,  1107,
    -255,   306,   507,  -255,  -255,   116,   119,   130,   136,    38,
    1107,   988,  -255,  -255,    28,  -255,  -255,    30,  -255,   118,
     168,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,   267,   306,   371,  1107,  1107,  1107,
    1107,  1107,    96,   158,  -255,   141,   -26,   183,  1119,  1036,
     207,  1107,  1131,   176,  -255,  -255,   178,  1143,  -255,  -255,
    1107,   306,  -255,  -255,  -255,  -255,  -255,  -255,    83,  1024,
     180,  1119,   182,   188,   175,   196,    23,  -255,   507,   112,
    -255,   -22,   173,  -255,   192,   431,   306,   197,   170,   491,
    1107,     2,   171,   300,  -255,   223,   306,   229,   235,    66,
    -255,  1155,    12,    12,   226,  1167,  1167,  -255,  -255,   530,
      70,   425,  -255,  -255,    55,  -255,  -255,  -255,   211,  -255,
    -255,  -255,  -255,  1119,  -255,   507,   326,   359,   238,    49,
      52,   244,  -255,  -255,   220,  -255,   507,   234,   233,  1107,
    1168,   269,  -255,    -8,   507,   288,  -255,  -255,   258,   235,
     287,  1155,  1278,  -255,   274,    87,  -255,  -255,  -255,  -255,
     104,  1167,   454,  1278,  1192,  1024,  1206,  -255,  -255,  -255,
     507,   326,   162,   296,  -255,   507,   326,   -33,   298,  -255,
      85,  -255,    91,  -255,  -255,   279,   304,   338,   507,   979,
    -255,  -255,  -255,  -255,  -255,   317,   258,  -255,  1185,  1155,
    1155,  1155,  1155,  1155,  1155,  1155,  1155,    90,   329,  1155,
     334,    25,  -255,  1220,  1185,  1167,  1167,  1167,   336,  1024,
    1060,  1083,   104,   486,  1024,  -255,  -255,  -255,  -255,  -255,
    -255,   341,  -255,  -255,  -255,  -255,   328,   234,  -255,    19,
    -255,   343,  -255,  -255,   265,   265,   265,   265,  1278,  1278,
    1278,  1278,   332,   107,  1267,   917,  -255,  -255,  -255,  1255,
    1255,  1255,  1167,   593,  1167,  1255,  1167,  1255,    37,  -255,
     629,  -255,  -255,   351,  -255,   979,   979,  1024,   344,   954,
    -255,  -255,  1024,  -255,    55,  -255,  -255,  -255,  -255,  -255,
    -255,  1255,   382,  1255,  1255,  -255,  -255,   349,  -255,  -255,
     665,  1024,  1024,   104,   701,   -12,   385,  -255,  -255,   353,
     737,   773,  -255,  -255,  1167,  1024,    -4,  -255,   355,   354,
    -255,  1227,   809,  1167,  -255,  1131,  1024,  -255,  1241,   109,
     845,  1024,  -255,  -255,   881,  -255
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    16,     1,     0,     0,   110,   109,
     112,   111,   113,   114,   115,   164,     0,     0,     0,     0,
     149,    17,   141,   142,   139,     0,     0,     0,     0,   164,
       0,     2,     3,     5,     0,    44,     6,   149,    78,   148,
       0,   151,   152,   154,   153,   155,   156,   157,   158,   160,
     159,   161,   162,   148,     0,    19,   141,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   148,     4,     0,     0,   165,    18,
       0,    21,   150,   142,   142,   142,   142,   142,     0,     0,
       0,     0,    82,     0,     0,     0,   164,    81,    80,   164,
      50,     0,   115,   102,     0,     0,    79,    45,    52,   165,
       0,     0,   115,   164,    48,   148,    20,     0,    22,     0,
      53,     0,     0,     0,     0,     0,     0,    37,    36,     0,
     190,     0,    29,    32,    31,    34,    35,    33,   191,    38,
      39,    40,    41,     0,    92,    90,    91,     0,    93,     0,
       0,     0,    51,   101,     0,    99,    97,     0,     0,     0,
     104,     0,   119,   122,   116,   117,    55,    27,    24,    23,
       0,     0,    49,   129,     0,     0,   185,   186,   187,   188,
       0,     0,     0,    77,     0,     0,     0,    26,    30,    89,
      87,    88,   164,     0,    85,    83,    84,   104,     0,     8,
       0,    10,     0,    14,    52,     0,     0,     0,   118,     0,
     121,   125,   120,   128,   127,     0,    25,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    86,    96,    94,    95,
      12,     0,     9,    11,    15,   100,   104,     0,   110,     0,
     105,   108,    28,   138,   130,   131,   132,   133,   134,   135,
     136,   137,     0,     0,     0,     0,   189,   168,    76,    69,
      68,    70,     0,     0,     0,    73,     0,    72,     0,    67,
       0,    13,   123,     0,   103,     0,     0,     0,     0,     0,
     175,   174,     0,   170,   169,   172,   173,   171,   176,   182,
     177,    71,    59,    75,    74,   166,    66,     0,   106,   107,
       0,     0,     0,   180,     0,     0,    61,    60,   124,     0,
       0,     0,   179,   181,     0,     0,     0,    62,     0,     0,
     178,     0,     0,     0,   184,     0,     0,    65,     0,     0,
       0,     0,   183,    63,     0,    64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,  -255,   386,  -255,  -255,  -255,  -255,  -255,  -255,
    -146,  -255,   251,  -171,  -121,   -66,  -254,    -5,   195,   254,
    -252,  -255,   100,  -247,   145,    -6,   -53,  -186,  -255,   133,
      -7,  -255,  -255,   -36,   137,   -11,  1022,   257,  -201,   193,
     131,  -222,   316,  -255,  -255,  -255
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    31,    32,    33,   200,   202,     3,     7,    54,
      63,    64,   168,   131,   132,    34,   133,   134,   119,   120,
     135,   326,   327,   136,   182,   137,    73,   211,   259,   260,
      20,    38,   163,   183,    39,    22,    23,    24,   139,   231,
     309,   232,   177,   140,   141,   142
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    36,    35,   101,   203,    96,   107,   334,    56,   277,
     188,   248,    92,    93,   243,   343,   157,   158,   174,    56,
       1,   303,   209,   305,    37,    36,    35,     5,   306,   159,
     175,    70,   152,     8,     9,    10,    11,    12,    13,    14,
     160,    16,    77,   335,    17,   303,   229,   305,   230,    70,
     175,   335,   306,   310,    18,    30,   254,    98,   229,   105,
     230,   161,    37,    97,    35,    37,   277,   108,   283,    76,
     292,   -43,   114,   290,   308,   294,    69,   310,    68,   -42,
     145,   276,    37,   295,   -43,   172,   144,   198,   151,     4,
      62,    69,    77,   315,   -43,    70,   -44,    71,   308,   156,
     164,   332,   -42,    72,   206,   199,   162,   210,   201,  -115,
     214,  -115,  -115,  -115,  -115,  -115,     6,   176,   178,   -44,
     169,   117,   188,   251,    37,   229,   320,   230,   117,    62,
     170,   324,   190,    40,  -115,   218,   195,   118,   189,   245,
      69,   252,   194,    21,   272,   234,   204,   253,   208,    88,
     330,   331,   228,   -42,    62,    53,    55,    65,   213,   -56,
      56,   298,   188,   352,   342,    69,   -42,    74,    66,   188,
      56,   170,   -56,    77,    67,   350,   -42,    72,    37,    90,
     354,    91,   -56,   264,   265,   266,   267,   268,   269,   270,
     271,    81,   247,   274,    74,    74,    74,    74,    74,   188,
      94,    95,   261,   188,   293,    74,    15,    74,   106,   188,
     188,   -44,   -47,    89,   115,    69,   110,   116,   111,    70,
     143,   188,   147,   204,   -44,   -47,   148,   151,    74,   188,
     149,   153,    37,   188,   -44,   -47,    37,    37,     8,     9,
      10,    11,    12,    13,   102,    15,    16,    74,    74,    17,
    -139,   150,  -139,  -139,  -139,  -139,  -139,   154,   173,    18,
      30,    77,   173,   173,   -58,   103,   173,   166,    37,   307,
     304,   184,   104,   167,   186,  -139,    37,   -58,   197,   349,
      74,   180,    96,    37,    74,   205,   207,   -58,   261,   319,
      37,    70,    37,   307,   304,    37,    74,    78,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   212,   173,    17,
     223,   224,   225,    37,    37,    37,   226,    37,   173,    18,
      30,    79,   215,    37,    37,   117,   233,   227,    37,   109,
      80,  -139,  -139,  -139,   246,    37,   250,   255,    37,    37,
      35,   -46,   256,    37,    37,  -126,   138,    37,   146,  -148,
    -148,  -148,   257,    69,   -46,   262,   173,   173,   173,   173,
     173,   173,   173,   173,   -46,   151,   173,   175,   165,  -139,
    -139,  -139,   173,   173,   173,   275,   282,   173,   173,   291,
     279,   280,   281,   209,   296,   285,   287,   297,   138,   317,
       8,     9,    10,    11,    12,    13,    14,   192,    16,   321,
     191,    17,   325,   328,   196,   336,   338,   345,    78,   344,
      57,    18,    30,    58,    59,    60,    61,    75,   193,   173,
     216,   173,   273,   173,   217,    82,   337,   311,   318,   313,
     323,   314,   121,   122,   123,   288,   124,    26,    27,   179,
       0,     0,   138,     0,   125,     0,     0,   126,     0,     0,
     127,   128,     0,     0,   249,   129,     8,     9,    10,    11,
      12,    13,   130,    29,    16,     0,     0,    17,     0,     0,
      57,   173,     0,    58,    59,    60,    61,    18,    30,   341,
     173,   187,    41,    42,    43,    44,    45,    46,   348,   155,
       0,     0,     0,   121,   122,   123,   138,   124,    26,    27,
     138,   138,   235,   236,   237,   125,   238,     0,   126,   239,
       0,   127,   128,     0,   240,   241,   129,     8,     9,    10,
      11,    12,    13,   130,    29,    16,     0,     0,    17,     0,
    -139,     0,  -139,  -139,  -139,  -139,  -139,     0,    18,    30,
     138,     0,   289,     0,     0,  -139,    57,   138,     0,    58,
      59,    60,    61,     0,   138,  -139,     0,     0,     0,   138,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
       0,     0,    17,     0,     0,     0,     0,   138,   138,   138,
       0,   138,    18,   181,     0,   185,     0,   138,   138,     0,
       0,     0,   138,    47,    48,    49,    50,    51,    52,   138,
     121,   122,   123,   138,   124,    26,    27,   138,   138,     0,
       0,   138,   125,     0,     0,   126,     0,     0,   127,   128,
       0,     0,     0,   129,     8,     9,    10,    11,    12,    13,
     130,    29,    16,     0,     0,    17,   121,   122,   123,     0,
     124,    26,    27,     0,     0,    18,    30,     0,   125,   312,
       0,   126,     0,     0,   127,   128,     0,     0,     0,   129,
       8,     9,    10,    11,    12,    13,   130,    29,    16,     0,
       0,    17,   121,   122,   123,     0,   124,    26,    27,     0,
       0,    18,    30,     0,   125,   316,     0,   126,     0,     0,
     127,   128,     0,     0,     0,   129,     8,     9,    10,    11,
      12,    13,   130,    29,    16,     0,     0,    17,   121,   122,
     123,     0,   124,    26,    27,     0,     0,    18,    30,     0,
     125,   329,     0,   126,     0,     0,   127,   128,     0,     0,
       0,   129,     8,     9,    10,    11,    12,    13,   130,    29,
      16,     0,     0,    17,   121,   122,   123,     0,   124,    26,
      27,     0,     0,    18,    30,     0,   125,   333,     0,   126,
       0,     0,   127,   128,     0,     0,     0,   129,     8,     9,
      10,    11,    12,    13,   130,    29,    16,     0,     0,    17,
     121,   122,   123,     0,   124,    26,    27,     0,     0,    18,
      30,     0,   125,   339,     0,   126,     0,     0,   127,   128,
       0,     0,     0,   129,     8,     9,    10,    11,    12,    13,
     130,    29,    16,     0,     0,    17,   121,   122,   123,     0,
     124,    26,    27,     0,     0,    18,    30,     0,   125,   340,
       0,   126,     0,     0,   127,   128,     0,     0,     0,   129,
       8,     9,    10,    11,    12,    13,   130,    29,    16,     0,
       0,    17,   121,   122,   123,     0,   124,    26,    27,     0,
       0,    18,    30,     0,   125,   347,     0,   126,     0,     0,
     127,   128,     0,     0,     0,   129,     8,     9,    10,    11,
      12,    13,   130,    29,    16,     0,     0,    17,   121,   122,
     123,     0,   124,    26,    27,     0,     0,    18,    30,     0,
     125,   353,     0,   126,     0,     0,   127,   128,     0,     0,
       0,   129,     8,     9,    10,    11,    12,    13,   130,    29,
      16,     0,     0,    17,   121,     0,     0,     0,     0,    26,
      27,     0,     0,    18,    30,     0,   125,   355,   229,   126,
     230,     0,   300,   301,     0,     0,     0,   129,     8,     9,
      10,    11,    12,    13,    14,    29,    16,     0,     0,    17,
       0,   121,     0,     0,     0,     0,    26,    27,     0,    18,
      30,     0,   302,   125,     0,   229,   126,   230,     0,   300,
     301,     0,     0,     0,   129,     8,     9,    10,    11,    12,
      13,    14,    29,    16,    25,     0,    17,     0,     0,     0,
      26,    27,     0,     0,    28,     0,    18,    30,     0,   322,
     258,     9,    10,    11,    12,    13,    14,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    29,    16,     0,     0,
      17,   121,   122,   123,     0,   124,    26,    27,     0,     0,
      18,    30,     0,   125,     0,     0,   126,     0,     0,   127,
     128,     0,     0,     0,   129,     8,     9,    10,    11,    12,
      13,   130,    29,    16,     0,     0,    17,     8,     9,    10,
      11,    12,    13,    14,    99,    16,    18,    30,    17,    83,
      84,    85,    86,    87,     0,     0,     0,     0,    18,    30,
     100,     8,     9,    10,    11,    12,    13,    14,    15,    16,
     284,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,   181,     8,     9,    10,    11,    12,    13,
      14,    15,    16,   286,     0,    17,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    18,   181,    17,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    18,    19,    17,
       8,     9,    10,    11,    12,    13,    14,    96,    16,    18,
      30,    17,     8,     9,    10,    11,    12,    13,    14,    99,
      16,    18,    30,    17,     8,     9,    10,    11,    12,    13,
     112,   113,    16,    18,    30,    17,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    18,    30,    17,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    18,   171,    17,
       0,  -164,  -164,  -164,     0,     0,     0,     0,     0,    18,
     181,    69,     0,   209,   219,    70,     0,   220,   221,   222,
     223,   224,   225,   151,     0,     0,   226,     0,     0,   263,
     235,   236,   237,     0,   238,     0,     0,   242,     0,     0,
       0,     0,   240,   241,   235,   236,   237,     0,   238,     0,
       0,   244,     0,     0,     0,     0,   240,   241,   235,   236,
     237,     0,   238,     0,   278,   235,   236,   237,     0,   238,
     240,   241,   346,     0,     0,     0,     0,   240,   241,   235,
     236,   237,     0,   238,     0,     0,   351,     0,     0,     0,
       0,   240,   241,   235,   236,   237,   219,   238,   299,   220,
     221,   222,   223,   224,   225,   240,   241,   219,   226,     0,
     220,   221,   222,   223,   224,   225,     0,     0,     0,   226
};

static const yytype_int16 yycheck[] =
{
       7,     7,     7,    69,   150,    38,    72,    19,    19,   231,
     131,   197,    38,    66,   185,    19,    14,    15,     6,    30,
       4,   275,    55,   275,    31,    31,    31,     0,   275,    27,
      38,    57,    54,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    64,    55,    42,   299,    21,   299,    23,    57,
      38,    55,   299,   275,    52,    53,   202,    68,    21,    70,
      23,    59,    69,    68,    69,    72,   288,    72,   239,    41,
     256,    41,    77,   244,   275,    56,    53,   299,    40,    41,
      91,    56,    89,    64,    54,   121,    91,    38,    65,    38,
      38,    53,    64,    56,    64,    57,    41,    59,   299,   110,
     111,   323,    64,    65,   157,    56,   111,   160,    56,    39,
     163,    41,    42,    43,    44,    45,     5,   122,   123,    64,
      54,    38,   243,    38,   131,    21,   297,    23,    38,    38,
      64,   302,   143,    65,    64,   171,   147,    54,   143,   192,
      53,    56,   147,     6,    54,   181,   151,    56,   159,    53,
     321,   322,    65,    41,    38,    18,    19,    38,   163,    41,
     171,    54,   283,    54,   335,    53,    54,    30,    38,   290,
     181,    64,    54,    64,    38,   346,    64,    65,   185,    38,
     351,    40,    64,   219,   220,   221,   222,   223,   224,   225,
     226,    54,   197,   229,    57,    58,    59,    60,    61,   320,
      17,    18,   209,   324,   257,    68,    38,    70,    71,   330,
     331,    41,    41,    55,    77,    53,    40,    80,    40,    57,
      40,   342,    40,   228,    54,    54,    38,    65,    91,   350,
      55,    58,   239,   354,    64,    64,   243,   244,    31,    32,
      33,    34,    35,    36,    37,    38,    39,   110,   111,    42,
      39,    55,    41,    42,    43,    44,    45,    65,   121,    52,
      53,    64,   125,   126,    41,    58,   129,    38,   275,   275,
     275,   126,    65,    38,   129,    64,   283,    54,    40,   345,
     143,    55,    38,   290,   147,    65,    53,    64,   295,   296,
     297,    57,   299,   299,   299,   302,   159,    40,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    38,   171,    42,
      45,    46,    47,   320,   321,   322,    51,   324,   181,    52,
      53,    54,    64,   330,   331,    38,   181,    53,   335,    72,
      63,    43,    44,    45,    38,   342,    38,    58,   345,   346,
     345,    41,    38,   350,   351,    57,    89,   354,    91,    43,
      44,    45,    14,    53,    54,    38,   219,   220,   221,   222,
     223,   224,   225,   226,    64,    65,   229,    38,   111,    43,
      44,    45,   235,   236,   237,    41,    40,   240,   241,    38,
     235,   236,   237,    55,    41,   240,   241,    55,   131,    38,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    55,
     143,    42,    20,    54,   147,    20,    53,    53,   151,    54,
      39,    52,    53,    42,    43,    44,    45,    31,    59,   282,
     169,   284,   227,   286,   170,    54,   326,   282,   295,   284,
     299,   286,     7,     8,     9,   242,    11,    12,    13,   123,
      -1,    -1,   185,    -1,    19,    -1,    -1,    22,    -1,    -1,
      25,    26,    -1,    -1,   197,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,
      39,   334,    -1,    42,    43,    44,    45,    52,    53,   334,
     343,    56,    31,    32,    33,    34,    35,    36,   343,    58,
      -1,    -1,    -1,     7,     8,     9,   239,    11,    12,    13,
     243,   244,    48,    49,    50,    19,    52,    -1,    22,    55,
      -1,    25,    26,    -1,    60,    61,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    42,    -1,
      39,    -1,    41,    42,    43,    44,    45,    -1,    52,    53,
     283,    -1,    56,    -1,    -1,    54,    39,   290,    -1,    42,
      43,    44,    45,    -1,   297,    64,    -1,    -1,    -1,   302,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,   320,   321,   322,
      -1,   324,    52,    53,    -1,    55,    -1,   330,   331,    -1,
      -1,    -1,   335,    31,    32,    33,    34,    35,    36,   342,
       7,     8,     9,   346,    11,    12,    13,   350,   351,    -1,
      -1,   354,    19,    -1,    -1,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,     7,     8,     9,    -1,
      11,    12,    13,    -1,    -1,    52,    53,    -1,    19,    56,
      -1,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,     7,     8,     9,    -1,    11,    12,    13,    -1,
      -1,    52,    53,    -1,    19,    56,    -1,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,     7,     8,
       9,    -1,    11,    12,    13,    -1,    -1,    52,    53,    -1,
      19,    56,    -1,    22,    -1,    -1,    25,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    52,    53,    -1,    19,    56,    -1,    22,
      -1,    -1,    25,    26,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    52,
      53,    -1,    19,    56,    -1,    22,    -1,    -1,    25,    26,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,     7,     8,     9,    -1,
      11,    12,    13,    -1,    -1,    52,    53,    -1,    19,    56,
      -1,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,     7,     8,     9,    -1,    11,    12,    13,    -1,
      -1,    52,    53,    -1,    19,    56,    -1,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    42,     7,     8,
       9,    -1,    11,    12,    13,    -1,    -1,    52,    53,    -1,
      19,    56,    -1,    22,    -1,    -1,    25,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    52,    53,    -1,    19,    56,    21,    22,
      23,    -1,    25,    26,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    52,
      53,    -1,    55,    19,    -1,    21,    22,    23,    -1,    25,
      26,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     6,    -1,    42,    -1,    -1,    -1,
      12,    13,    -1,    -1,    16,    -1,    52,    53,    -1,    55,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      42,     7,     8,     9,    -1,    11,    12,    13,    -1,    -1,
      52,    53,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    52,    53,    42,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    52,    53,
      54,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    52,    53,    42,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    52,    53,    42,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    52,
      53,    42,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    52,    53,    42,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    52,    53,    42,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    52,    53,    42,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    52,    53,    42,
      -1,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    52,
      53,    53,    -1,    55,    39,    57,    -1,    42,    43,    44,
      45,    46,    47,    65,    -1,    -1,    51,    -1,    -1,    54,
      48,    49,    50,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    60,    61,    48,    49,    50,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    60,    61,    48,    49,
      50,    -1,    52,    -1,    54,    48,    49,    50,    -1,    52,
      60,    61,    55,    -1,    -1,    -1,    -1,    60,    61,    48,
      49,    50,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    60,    61,    48,    49,    50,    39,    52,    41,    42,
      43,    44,    45,    46,    47,    60,    61,    39,    51,    -1,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    67,    73,    38,     0,     5,    74,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    42,    52,    53,
      96,   100,   101,   102,   103,     6,    12,    13,    16,    38,
      53,    68,    69,    70,    81,    83,    91,    96,    97,   100,
      65,    31,    32,    33,    34,    35,    36,    31,    32,    33,
      34,    35,    36,   100,    75,   100,   101,    39,    42,    43,
      44,    45,    38,    76,    77,    38,    38,    38,    40,    53,
      57,    59,    65,    92,   100,    69,    41,    64,   103,    54,
      63,   100,    54,   102,   102,   102,   102,   102,    53,    55,
      38,    40,    38,    92,    17,    18,    38,    83,   101,    38,
      54,    81,    37,    58,    65,   101,   100,    81,    83,   103,
      40,    40,    37,    38,    83,   100,   100,    38,    54,    84,
      85,     7,     8,     9,    11,    19,    22,    25,    26,    30,
      37,    79,    80,    82,    83,    86,    89,    91,   103,   104,
     109,   110,   111,    40,    83,   101,   103,    40,    38,    55,
      55,    65,    54,    58,    65,    58,   101,    14,    15,    27,
      38,    59,    83,    98,   101,   103,    38,    38,    78,    54,
      64,    53,    99,   100,     6,    38,    83,   108,    83,   108,
      55,    53,    90,    99,    90,    55,    90,    56,    80,    83,
     101,   103,    38,    59,    83,   101,   103,    40,    38,    56,
      71,    56,    72,    76,    83,    65,    92,    53,   101,    55,
      92,    93,    38,    83,    92,    64,    78,    85,    99,    39,
      42,    43,    44,    45,    46,    47,    51,    53,    65,    21,
      23,   105,   107,    90,    99,    48,    49,    50,    52,    55,
      60,    61,    55,    79,    55,    92,    38,    83,    93,   103,
      38,    38,    56,    56,    76,    58,    38,    14,    31,    94,
      95,    96,    38,    54,    99,    99,    99,    99,    99,    99,
      99,    99,    54,    84,    99,    41,    56,   107,    54,    90,
      90,    90,    40,    79,    40,    90,    40,    90,   105,    56,
      79,    38,    93,    92,    56,    64,    41,    55,    54,    41,
      25,    26,    55,    82,    83,    86,    89,    91,   104,   106,
     107,    90,    56,    90,    90,    56,    56,    38,    95,    96,
      79,    55,    55,   106,    79,    20,    87,    88,    54,    56,
      79,    79,   107,    56,    19,    55,    20,    88,    53,    56,
      56,    90,    79,    19,    54,    53,    55,    56,    90,    81,
      79,    55,    54,    56,    79,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    69,    69,    70,    70,
      70,    70,    71,    71,    72,    72,    73,    74,    74,    75,
      75,    75,    76,    76,    76,    76,    77,    78,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    82,
      83,    83,    83,    84,    84,    85,    81,    81,    81,    86,
      86,    86,    86,    87,    87,    88,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    92,    92,    93,    93,    94,    94,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    98,    98,    98,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   100,
     100,   100,   101,   101,   101,   101,   101,   101,   102,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   103,   103,   104,   105,   105,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   107,   107,
     107,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     1,     2,     5,     6,
       5,     6,     2,     3,     1,     2,     2,     2,     4,     1,
       3,     2,     3,     4,     4,     5,     4,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     2,
       3,     4,     3,     1,     3,     2,     1,     3,     3,     5,
       6,     6,     7,     6,     7,     4,     5,     4,     3,     3,
       3,     4,     3,     3,     4,     4,     3,     1,     1,     3,
       3,     3,     3,     5,     5,     5,     6,     5,     5,     5,
       4,     4,     4,     4,     6,     6,     6,     4,     6,     3,
       5,     3,     2,     3,     0,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     5,     4,
       5,     5,     4,     7,     9,     5,     1,     2,     2,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     1,     1,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     3,     5,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     5,
       4,     5,     3,    10,     8,     2,     2,     2,     2,     4,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1625 "yacc.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 492 "yacc.y"


int main(){
    yyparse();
    if(error_flag == 0)
        printf("Compiled successful!\n");
    return 0;
}
