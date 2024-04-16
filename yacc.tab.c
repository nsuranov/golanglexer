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
  YYSYMBOL_channel_assignment = 91,        /* channel_assignment  */
  YYSYMBOL_assignment = 92,                /* assignment  */
  YYSYMBOL_array_index = 93,               /* array_index  */
  YYSYMBOL_array_assignment = 94,          /* array_assignment  */
  YYSYMBOL_factor_list = 95,               /* factor_list  */
  YYSYMBOL_factor_value = 96,              /* factor_value  */
  YYSYMBOL_value = 97,                     /* value  */
  YYSYMBOL_auto_type_assignment = 98,      /* auto_type_assignment  */
  YYSYMBOL_dif_assigment_obj = 99,         /* dif_assigment_obj  */
  YYSYMBOL_expression = 100,               /* expression  */
  YYSYMBOL_express = 101,                  /* express  */
  YYSYMBOL_term = 102,                     /* term  */
  YYSYMBOL_factor = 103,                   /* factor  */
  YYSYMBOL_object_field = 104,             /* object_field  */
  YYSYMBOL_switch_block = 105,             /* switch_block  */
  YYSYMBOL_multi_switch_condition_body = 106, /* multi_switch_condition_body  */
  YYSYMBOL_multi_switch_condition = 107,   /* multi_switch_condition  */
  YYSYMBOL_switch_body = 108,              /* switch_body  */
  YYSYMBOL_switch_code_block = 109,        /* switch_code_block  */
  YYSYMBOL_case_block = 110,               /* case_block  */
  YYSYMBOL_anon_func_block = 111,          /* anon_func_block  */
  YYSYMBOL_gorutine_block = 112,           /* gorutine_block  */
  YYSYMBOL_defer_block = 113,              /* defer_block  */
  YYSYMBOL_select_block = 114,             /* select_block  */
  YYSYMBOL_select_body = 115,              /* select_body  */
  YYSYMBOL_select_case_block = 116         /* select_case_block  */
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
#define YYLAST   1448

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  206
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  400

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
     187,   188,   189,   193,   194,   198,   202,   203,   204,   205,
     209,   210,   214,   218,   219,   220,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   305,   306,   307,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   336,   337,   338,   339,   342,   343,   346,   347,   350,
     351,   354,   355,   356,   357,   358,   359,   360,   361,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   376,
     377,   378,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   413,   414,   415,   416,   417,   418,   421,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   444,   445,   449,   450,   451,
     455,   456,   457,   460,   461,   465,   466,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   480,   481,   482,   483,
     484,   485,   486,   487,   490,   491,   494,   495,   498,   499,
     502,   506,   507,   521,   522,   523,   524
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
  "if_else_block", "else_block", "for_block", "condition",
  "channel_assignment", "assignment", "array_index", "array_assignment",
  "factor_list", "factor_value", "value", "auto_type_assignment",
  "dif_assigment_obj", "expression", "express", "term", "factor",
  "object_field", "switch_block", "multi_switch_condition_body",
  "multi_switch_condition", "switch_body", "switch_code_block",
  "case_block", "anon_func_block", "gorutine_block", "defer_block",
  "select_block", "select_body", "select_case_block", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-235)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-166)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,   -14,    28,    51,  -235,  -235,  1318,  1211,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,    25,  1406,  1412,  1330,  1330,
    -235,  -235,  -235,  -235,    46,   103,   120,   127,   107,  1211,
    -235,  -235,    29,   -29,  -235,  -235,  -235,  -235,   493,   133,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  1330,  -235,  1198,   278,  -235,   269,   131,   151,
    -235,    39,   -28,   118,   150,  1330,   173,   546,  1330,  1295,
     168,  -235,   187,   185,    97,  -235,   -45,  -235,  -235,  -235,
    -235,  1330,  -235,  1330,  1330,  1330,  1330,  1330,  -235,   -24,
    1246,   194,  1330,   201,   182,   170,   188,  -235,   478,   548,
    -235,   197,  -235,   181,   409,   548,   983,   199,   -29,  1330,
    1130,  -235,   102,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,   230,   232,   134,  -235,  1342,    10,    10,   223,  1354,
    1161,  -235,  -235,  1173,   533,  -235,  -235,    45,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  1330,   478,   548,  1136,  1254,
     240,   -30,    49,  -235,   219,  -235,   548,   234,   237,  1330,
     367,   257,  -235,    87,   548,   298,   260,  -235,  -235,   242,
     232,   277,  1342,  1369,  -235,   265,   102,  -235,  -235,  -235,
    -235,   305,  1354,   446,  1369,   152,   180,   411,  -235,    54,
     272,   166,  -235,  1246,  1002,   212,  -235,  -235,   478,   548,
    1136,   122,   291,   478,   548,  1136,    90,   295,  -235,   101,
    -235,   125,  -235,   276,   300,   325,   548,  1390,  -235,  -235,
    -235,  -235,  -235,   308,   242,  -235,  1258,  -235,  1342,  1342,
    1342,  1342,  1342,  1342,  1342,  1342,    50,    14,    -3,  -235,
    1037,  1258,  1354,  1354,  1354,   309,  1246,  1283,  1306,  1398,
    1354,   307,    15,  -235,   180,   180,     8,     8,   594,  1246,
    1246,  -235,  -235,  -235,  -235,  -235,  -235,   312,  -235,  -235,
    -235,  -235,   296,   234,   121,  -235,   316,  -235,  -235,   211,
     211,   211,   211,  1369,  1369,  1369,  1369,   303,   143,   324,
     306,   327,  -235,  -235,  -235,   411,   411,   411,  1354,   627,
    1354,   411,  1354,   411,    16,   233,  1358,  1011,  -235,  -235,
      44,    68,  -235,  -235,  -235,   659,   691,  -235,  -235,   337,
    -235,  1390,  1390,  1246,   322,   341,  1046,   411,   360,   411,
     411,  1081,  1116,  -235,  -235,  1246,  -235,    45,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,   328,  -235,
    -235,   723,  1246,   344,  1246,   305,    -6,   365,  -235,  1246,
     180,  1246,   180,   755,  -235,   333,   787,   330,   819,  -235,
    1354,  1246,    -4,  -235,   851,  -235,   883,  -235,  -235,   336,
     339,   305,  1072,   915,  1354,  -235,  -235,  -235,  1295,  -235,
    1246,  -235,  1214,   146,   947,  1246,  -235,  -235,   979,  -235
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    16,     1,     0,     0,   112,   111,
     114,   113,   115,   116,   117,   165,     0,     0,     0,     0,
     118,   149,    17,   151,     0,     0,     0,     0,    42,     2,
       3,     5,     0,   118,    86,     6,    43,    79,     0,     0,
     152,   153,   155,   154,   156,   157,   158,   159,   161,   160,
     162,   163,     0,   164,     0,     0,   142,    19,     0,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,    42,    50,     0,    52,   166,   148,
      18,     0,    21,     0,     0,     0,     0,     0,   150,     0,
       0,     0,     0,    82,     0,     0,     0,    99,    81,    80,
     100,   117,   104,     0,     0,    77,    76,    45,    52,     0,
       0,    47,    46,    48,    51,    20,   143,   144,   145,   146,
     147,     0,    22,     0,    53,     0,     0,     0,     0,     0,
       0,    37,    36,     0,     0,    29,    32,    31,    34,    35,
      33,    38,    39,    40,    41,     0,    92,    90,    91,     0,
      93,     0,     0,   103,     0,   101,    97,     0,     0,     0,
     106,     0,   118,   125,   119,   120,     0,    55,    27,    24,
      23,     0,     0,    49,   132,     0,     0,   196,   197,   198,
     199,     0,     0,     0,    75,   165,     0,   173,   174,   149,
      79,     0,   170,     0,   173,     0,    26,    30,    89,    87,
      88,   165,     0,    85,    83,    84,   106,     0,     8,     0,
      10,     0,    14,     0,     0,     0,   121,     0,   124,   128,
     123,   131,   130,     0,    25,    54,     0,   132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   175,     0,     0,     0,     0,     0,     0,
       0,    98,    78,    96,    94,    95,    12,     0,     9,    11,
      15,   102,   106,     0,     0,   107,   110,    28,   141,   133,
     134,   135,   136,   137,   138,   139,   140,     0,     0,     0,
       0,     0,   200,   202,    74,    67,    66,    68,     0,     0,
       0,    71,     0,    70,   165,     0,    75,     0,   169,   176,
       0,     0,   171,   172,    65,     0,     0,    13,   126,     0,
     105,     0,     0,     0,     0,     0,     0,    69,    56,    73,
      72,     0,     0,   183,   182,     0,   178,   177,   180,   181,
     179,   184,   193,   185,   168,   167,    63,    64,     0,   108,
     109,     0,     0,     0,     0,   206,     0,    58,    57,     0,
     191,     0,   188,     0,   127,     0,     0,     0,     0,   204,
       0,     0,     0,    59,     0,   190,     0,   187,   192,     0,
       0,   203,     0,     0,     0,   189,   186,   195,     0,   205,
       0,    62,     0,     0,     0,     0,   194,    60,     0,    61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -235,  -235,  -235,   364,  -235,  -235,  -235,  -235,  -235,  -235,
    -148,  -235,   224,    43,   -97,   -35,  -234,    -7,   160,   227,
    -225,  -235,    42,   -94,   -74,   163,     4,   -61,  -204,  -235,
      80,   114,   273,  -235,  -118,    86,   332,   451,   -16,   -67,
     274,    31,    18,   -27,  -180,   281,  -235,  -235,  -235,  -235,
    -233
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    29,    30,    31,   209,   211,     3,     7,    54,
      59,    60,   169,   134,   135,    32,   136,    20,   123,   124,
     138,   357,   358,   139,   187,    34,   140,    70,   219,   274,
     275,    21,    37,   163,   184,    55,    56,   174,    23,   141,
     191,   192,   252,   342,   343,   178,   142,   143,   144,   238,
     239
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    94,   264,    76,   212,   293,   253,   173,   207,   114,
      93,    35,   -44,   370,   121,   384,   175,     1,   237,    73,
      25,    26,    33,    78,     4,   -44,   208,   289,     5,    67,
     122,    33,    77,    35,   107,   -44,   250,   197,   251,     8,
       9,    10,    11,    12,    13,    14,   185,    16,   176,   371,
      17,   371,   290,   292,   226,   183,     6,   -42,    98,   194,
      18,   182,   108,   270,   241,   250,   113,   251,   318,    38,
      72,   308,   309,   336,   253,   253,   148,    91,    38,    92,
     -42,   249,   338,   137,    58,   146,   -44,    58,   121,   250,
      39,   251,   336,    73,   165,   -43,   214,   336,   336,   218,
     344,   338,   222,   162,   287,   210,   338,   338,   240,   -44,
     279,   280,   281,   282,   283,   284,   285,   286,   -43,   177,
     179,    36,   369,    33,   345,   176,    33,   137,    15,   200,
     309,   309,   306,   205,   188,    95,    96,   188,   198,   267,
     261,    61,   203,    36,    67,   217,    64,    65,   389,    66,
      38,    99,    36,   104,   105,    38,   221,   268,    62,    77,
      38,   197,    69,    58,    67,    63,    68,   166,   295,   296,
     297,    15,    69,   301,   303,    38,   305,   320,   147,    67,
     375,   269,   377,    36,    89,   321,   137,    39,   170,    97,
     265,    64,    65,   -42,    66,   156,   164,   324,   171,   263,
     396,   250,   197,   251,    36,    38,    90,   171,   109,    67,
      73,    68,   319,   339,   107,   100,   -42,   249,   197,   197,
     150,   255,   111,   112,   327,   151,   329,   110,   330,   256,
     257,   199,   339,    78,   145,   204,   258,   339,   339,   137,
     341,   149,   108,   152,   189,   216,   154,   189,    36,    33,
      33,   137,   137,   137,   197,   153,   232,   233,   234,   341,
     188,   188,   235,    73,   341,   341,   197,   260,   167,   197,
     168,   197,   310,   311,   331,   256,   257,   197,   181,   197,
     206,   242,   243,   244,   213,   245,   197,   312,   313,   299,
     215,    67,   137,   247,   248,   220,   382,   197,   176,   355,
     337,   197,   315,   316,   360,   362,   223,    36,   137,   137,
     392,   340,  -148,  -148,  -148,   121,   137,    83,   236,   337,
      84,    85,    86,    87,   337,   337,   237,   254,   137,   262,
     340,   276,    88,   266,   271,   340,   340,  -151,   272,   273,
    -151,  -151,  -151,  -151,   137,   137,   277,   137,   307,   298,
     317,   217,   137,   393,   137,  -129,   137,   322,   323,   137,
      36,   137,   325,    36,   137,    68,   351,   137,   326,   137,
     189,   189,    36,    36,    36,   348,   137,   352,   363,   353,
     356,    33,   364,   137,   367,   372,   379,   137,   137,   202,
     387,   137,   388,    71,   224,   366,   288,   368,   225,   373,
     291,   349,   374,   190,   376,     0,  -165,   195,   180,  -165,
    -165,  -165,  -165,    36,   383,   116,   117,   118,   119,   120,
      38,    36,   217,     0,    67,     0,     0,     0,     0,    36,
      36,     0,    39,   394,     0,   276,   350,    36,   398,     0,
      36,     0,     0,     0,     0,    36,    36,     0,    83,    36,
       0,    84,    85,    86,    87,     0,     0,    22,     0,   242,
     243,   244,     0,   245,     0,    36,    36,   155,    36,    53,
      57,   247,   248,    36,     0,    36,     0,    36,     0,     0,
      36,     0,    36,     0,     0,    36,     0,     0,    36,     0,
      36,     0,     0,     0,   242,   243,   244,    36,   245,     0,
       0,   246,    36,    79,    36,    82,   247,   248,    36,    36,
       0,     0,    36,     0,     0,     0,    79,  -118,    79,   106,
    -118,  -118,  -118,  -118,     8,     9,    10,    11,    12,    13,
      14,    74,   115,     0,    79,    79,    79,    79,    79,     0,
     125,   126,   127,    79,   128,    25,    26,    75,     0,     0,
       0,     0,   129,     0,     0,   130,     0,     0,   131,   132,
      79,    79,     0,   133,     8,     9,    10,    11,    12,    13,
      14,    28,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,   101,    15,    16,     0,    83,    17,   196,
      84,    85,    86,    87,     0,     0,    79,     0,    18,    52,
      79,   125,   126,   127,   102,   128,    25,    26,     0,     0,
      79,   103,     0,   129,     0,     0,   130,     0,     0,   131,
     132,     0,     0,   227,   133,     8,     9,    10,    11,    12,
      13,    14,    28,   227,   125,   126,   127,     0,   128,    25,
      26,     0,     0,     0,     0,     0,   129,     0,     0,   130,
     314,     0,   131,   132,     0,     0,     0,   133,     8,     9,
      10,    11,    12,    13,    14,    28,   125,   126,   127,     0,
     128,    25,    26,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,   328,   131,   132,     0,     0,     0,   133,
       8,     9,    10,    11,    12,    13,    14,    28,   125,   126,
     127,     0,   128,    25,    26,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,   346,   131,   132,     0,     0,
       0,   133,     8,     9,    10,    11,    12,    13,    14,    28,
     125,   126,   127,     0,   128,    25,    26,     0,     0,     0,
       0,     0,   129,     0,     0,   130,     0,   347,   131,   132,
       0,     0,     0,   133,     8,     9,    10,    11,    12,    13,
      14,    28,   125,   126,   127,     0,   128,    25,    26,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,   365,
     131,   132,     0,     0,     0,   133,     8,     9,    10,    11,
      12,    13,    14,    28,   125,   126,   127,     0,   128,    25,
      26,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,   378,   131,   132,     0,     0,     0,   133,     8,     9,
      10,    11,    12,    13,    14,    28,   125,   126,   127,     0,
     128,    25,    26,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,   380,   131,   132,     0,     0,     0,   133,
       8,     9,    10,    11,    12,    13,    14,    28,   125,   126,
     127,     0,   128,    25,    26,     0,     0,     0,     0,     0,
     129,     0,     0,   130,     0,   381,   131,   132,     0,     0,
       0,   133,     8,     9,    10,    11,    12,    13,    14,    28,
     125,   126,   127,     0,   128,    25,    26,     0,     0,     0,
       0,     0,   129,     0,     0,   130,     0,   385,   131,   132,
       0,     0,     0,   133,     8,     9,    10,    11,    12,    13,
      14,    28,   125,   126,   127,     0,   128,    25,    26,     0,
       0,     0,     0,     0,   129,     0,     0,   130,     0,   386,
     131,   132,     0,     0,     0,   133,     8,     9,    10,    11,
      12,    13,    14,    28,   125,   126,   127,     0,   128,    25,
      26,     0,     0,     0,     0,     0,   129,     0,     0,   130,
       0,   391,   131,   132,     0,     0,     0,   133,     8,     9,
      10,    11,    12,    13,    14,    28,   125,   126,   127,     0,
     128,    25,    26,     0,     0,     0,     0,     0,   129,     0,
       0,   130,     0,   397,   131,   132,     0,     0,     0,   133,
       8,     9,    10,    11,    12,    13,    14,    28,   125,     0,
       0,     0,  -148,    25,    26,  -148,  -148,  -148,  -148,     0,
     129,     0,   250,   130,   251,   399,   333,   334,     0,     0,
       0,   133,     8,     9,    10,    11,    12,    13,    14,    28,
     242,   243,   244,   125,   245,     0,     0,   259,    25,    26,
       0,     0,   247,   248,     0,   129,   335,   250,   130,   251,
       0,   333,   334,     0,     0,     0,   133,     8,     9,    10,
      11,    12,    13,    14,    28,   242,   243,   244,   125,   245,
       0,   294,     0,    25,    26,     0,     0,   247,   248,     0,
     129,   354,   250,   130,   251,     0,   333,   334,     0,     0,
       0,   133,     8,     9,    10,    11,    12,    13,    14,    28,
     242,   243,   244,   125,   245,     0,     0,   390,    25,    26,
       0,     0,   247,   248,     0,   129,   359,   250,   130,   251,
       0,   333,   334,     0,   157,   158,   133,     8,     9,    10,
      11,    12,    13,    14,    28,     0,     0,   159,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,   160,    16,
       0,   361,    17,    25,    26,  -151,     0,     0,  -151,  -151,
    -151,  -151,    18,    52,     0,    25,    26,     0,     0,   161,
       0,     0,     8,     9,    10,    11,    12,    13,    14,   185,
      16,     0,     0,    17,     8,     9,    10,    11,    12,    13,
      14,   185,    16,    18,   182,    17,   186,    24,     0,     0,
       0,     0,     0,    25,    26,    18,   182,    27,   193,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     0,     0,
      17,     0,     8,     9,    10,    11,    12,    13,    14,    28,
      18,    52,    80,   125,   126,   127,     0,   128,    25,    26,
       0,    81,   242,   243,   244,   129,   245,     0,   130,   395,
       0,   131,   132,     0,   247,   248,   133,     8,     9,    10,
      11,    12,    13,    14,    28,     8,     9,    10,    11,    12,
      13,    14,   201,    16,     0,     0,    17,   228,     0,     0,
     229,   230,   231,   232,   233,   234,    18,    52,     0,   235,
       0,     0,   278,   202,     8,     9,    10,    11,    12,    13,
      14,    15,    16,   300,     0,    17,     8,     9,    10,    11,
      12,    13,    14,    74,     0,    18,   182,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   302,     0,    17,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    18,   182,
      17,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      18,    19,    17,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    18,    52,    17,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    18,   172,    17,   228,     0,   332,
     229,   230,   231,   232,   233,   234,    18,   182,   228,   235,
       0,   229,   230,   231,   232,   233,   234,     0,     0,     0,
     235,     8,     9,    10,    11,    12,    13,    14,   176,     8,
       9,    10,    11,    12,    13,    14,   304,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51
};

static const yytype_int16 yycheck[] =
{
       7,    62,   206,    38,   152,   238,   186,   125,    38,    54,
      38,     7,    41,    19,    38,    19,     6,     4,    21,    64,
      12,    13,    29,    39,    38,    54,    56,    13,     0,    57,
      54,    38,    39,    29,    69,    64,    21,   134,    23,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    38,    55,
      42,    55,    38,    56,   172,   129,     5,    41,    65,   133,
      52,    53,    69,   211,   182,    21,    73,    23,   272,    53,
      41,    56,   252,   307,   254,   255,    92,    38,    53,    40,
      64,    65,   307,    90,    38,    92,    41,    38,    38,    21,
      65,    23,   326,    64,   110,    41,   157,   331,   332,   160,
      56,   326,   163,   110,    54,    56,   331,   332,   182,    64,
     228,   229,   230,   231,   232,   233,   234,   235,    64,   126,
     127,     7,   355,   130,    56,    38,   133,   134,    38,   145,
     310,   311,   250,   149,   130,    17,    18,   133,   145,    38,
     201,    38,   149,    29,    57,    55,    39,    40,   381,    42,
      53,    65,    38,    67,    68,    53,   163,    56,    38,   166,
      53,   258,    65,    38,    57,    38,    59,    65,   242,   243,
     244,    38,    65,   247,   248,    53,   250,    56,    92,    57,
     360,    56,   362,    69,    53,    64,   193,    65,    54,    39,
     206,    39,    40,    41,    42,   109,   110,    54,    64,   206,
      54,    21,   299,    23,    90,    53,    55,    64,    40,    57,
      64,    59,   273,   307,   249,    42,    64,    65,   315,   316,
      38,    55,    37,    38,   298,    55,   300,    40,   302,    63,
      64,   145,   326,   249,    40,   149,   193,   331,   332,   246,
     307,    40,   249,    55,   130,   159,    65,   133,   134,   256,
     257,   258,   259,   260,   351,    58,    45,    46,    47,   326,
     256,   257,    51,    64,   331,   332,   363,    55,    38,   366,
      38,   368,   254,   255,    41,    63,    64,   374,    55,   376,
      40,    48,    49,    50,    65,    52,   383,   256,   257,   246,
      53,    57,   299,    60,    61,    38,   370,   394,    38,   326,
     307,   398,   259,   260,   331,   332,    64,   193,   315,   316,
     384,   307,    43,    44,    45,    38,   323,    39,    53,   326,
      42,    43,    44,    45,   331,   332,    21,    55,   335,    38,
     326,   217,    54,    38,    58,   331,   332,    39,    38,    14,
      42,    43,    44,    45,   351,   352,    38,   354,    41,    40,
      38,    55,   359,   388,   361,    57,   363,    41,    55,   366,
     246,   368,    38,   249,   371,    59,   323,   374,    41,   376,
     256,   257,   258,   259,   260,    38,   383,    55,   335,    38,
      20,   388,    54,   390,    40,    20,    53,   394,   395,    59,
      54,   398,    53,    29,   170,   352,   236,   354,   171,   357,
     237,   321,   359,   130,   361,    -1,    39,   133,   127,    42,
      43,    44,    45,   299,   371,    83,    84,    85,    86,    87,
      53,   307,    55,    -1,    57,    -1,    -1,    -1,    -1,   315,
     316,    -1,    65,   390,    -1,   321,   322,   323,   395,    -1,
     326,    -1,    -1,    -1,    -1,   331,   332,    -1,    39,   335,
      -1,    42,    43,    44,    45,    -1,    -1,     6,    -1,    48,
      49,    50,    -1,    52,    -1,   351,   352,    58,   354,    18,
      19,    60,    61,   359,    -1,   361,    -1,   363,    -1,    -1,
     366,    -1,   368,    -1,    -1,   371,    -1,    -1,   374,    -1,
     376,    -1,    -1,    -1,    48,    49,    50,   383,    52,    -1,
      -1,    55,   388,    52,   390,    54,    60,    61,   394,   395,
      -1,    -1,   398,    -1,    -1,    -1,    65,    39,    67,    68,
      42,    43,    44,    45,    31,    32,    33,    34,    35,    36,
      37,    38,    81,    -1,    83,    84,    85,    86,    87,    -1,
       7,     8,     9,    92,    11,    12,    13,    54,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,    26,
     109,   110,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    39,    42,    56,
      42,    43,    44,    45,    -1,    -1,   145,    -1,    52,    53,
     149,     7,     8,     9,    58,    11,    12,    13,    -1,    -1,
     159,    65,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    -1,   172,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   182,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,
      56,    -1,    25,    26,    -1,    -1,    -1,    30,    31,    32,
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
      31,    32,    33,    34,    35,    36,    37,    38,     7,    -1,
      -1,    -1,    39,    12,    13,    42,    43,    44,    45,    -1,
      19,    -1,    21,    22,    23,    56,    25,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      48,    49,    50,     7,    52,    -1,    -1,    55,    12,    13,
      -1,    -1,    60,    61,    -1,    19,    55,    21,    22,    23,
      -1,    25,    26,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    48,    49,    50,     7,    52,
      -1,    54,    -1,    12,    13,    -1,    -1,    60,    61,    -1,
      19,    55,    21,    22,    23,    -1,    25,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      48,    49,    50,     7,    52,    -1,    -1,    55,    12,    13,
      -1,    -1,    60,    61,    -1,    19,    55,    21,    22,    23,
      -1,    25,    26,    -1,    14,    15,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    27,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    55,    42,    12,    13,    39,    -1,    -1,    42,    43,
      44,    45,    52,    53,    -1,    12,    13,    -1,    -1,    59,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    52,    53,    42,    55,     6,    -1,    -1,
      -1,    -1,    -1,    12,    13,    52,    53,    16,    55,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      42,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      52,    53,    54,     7,     8,     9,    -1,    11,    12,    13,
      -1,    63,    48,    49,    50,    19,    52,    -1,    22,    55,
      -1,    25,    26,    -1,    60,    61,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    39,    -1,    -1,
      42,    43,    44,    45,    46,    47,    52,    53,    -1,    51,
      -1,    -1,    54,    59,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    52,    53,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    52,    53,
      42,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      52,    53,    42,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    52,    53,    42,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    52,    53,    42,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    52,    53,    39,    51,
      -1,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      51,    31,    32,    33,    34,    35,    36,    37,    38,    31,
      32,    33,    34,    35,    36,    37,    38,    31,    32,    33,
      34,    35,    36,    31,    32,    33,    34,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    67,    73,    38,     0,     5,    74,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    42,    52,    53,
      83,    97,   103,   104,     6,    12,    13,    16,    38,    68,
      69,    70,    81,    83,    91,    92,    97,    98,    53,    65,
      31,    32,    33,    34,    35,    36,    31,    32,    33,    34,
      35,    36,    53,   103,    75,   101,   102,   103,    38,    76,
      77,    38,    38,    38,    39,    40,    42,    57,    59,    65,
      93,    69,    41,    64,    38,    54,    81,    83,   104,   103,
      54,    63,   103,    39,    42,    43,    44,    45,    54,    53,
      55,    38,    40,    38,    93,    17,    18,    39,    83,   101,
      42,    37,    58,    65,   101,   101,   103,    81,    83,    40,
      40,    37,    38,    83,    54,   103,   102,   102,   102,   102,
     102,    38,    54,    84,    85,     7,     8,     9,    11,    19,
      22,    25,    26,    30,    79,    80,    82,    83,    86,    89,
      92,   105,   112,   113,   114,    40,    83,   101,   104,    40,
      38,    55,    55,    58,    65,    58,   101,    14,    15,    27,
      38,    59,    83,    99,   101,   104,    65,    38,    38,    78,
      54,    64,    53,   100,   103,     6,    38,    83,   111,    83,
     111,    55,    53,    90,   100,    38,    55,    90,    92,    97,
      98,   106,   107,    55,    90,   106,    56,    80,    83,   101,
     104,    38,    59,    83,   101,   104,    40,    38,    56,    71,
      56,    72,    76,    65,    93,    53,   101,    55,    93,    94,
      38,    83,    93,    64,    78,    85,   100,   103,    39,    42,
      43,    44,    45,    46,    47,    51,    53,    21,   115,   116,
      90,   100,    48,    49,    50,    52,    55,    60,    61,    65,
      21,    23,   108,   110,    55,    55,    63,    64,    79,    55,
      55,    93,    38,    83,    94,   104,    38,    38,    56,    56,
      76,    58,    38,    14,    95,    96,    97,    38,    54,   100,
     100,   100,   100,   100,   100,   100,   100,    54,    84,    13,
      38,    91,    56,   116,    54,    90,    90,    90,    40,    79,
      40,    90,    40,    90,    38,    90,   100,    41,    56,   110,
     108,   108,   107,   107,    56,    79,    79,    38,    94,    93,
      56,    64,    41,    55,    54,    38,    41,    90,    56,    90,
      90,    41,    41,    25,    26,    55,    82,    83,    86,    89,
      92,   105,   109,   110,    56,    56,    56,    56,    38,    96,
      97,    79,    55,    38,    55,   109,    20,    87,    88,    55,
     109,    55,   109,    79,    54,    56,    79,    40,    79,   116,
      19,    55,    20,    88,    79,   110,    79,   110,    56,    53,
      56,    56,    90,    79,    19,    56,    56,    54,    53,   116,
      55,    56,    90,    81,    79,    55,    54,    56,    79,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    69,    69,    70,    70,
      70,    70,    71,    71,    72,    72,    73,    74,    74,    75,
      75,    75,    76,    76,    76,    76,    77,    78,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    82,
      83,    83,    83,    84,    84,    85,    86,    86,    86,    86,
      87,    87,    88,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    91,    91,    91,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    94,    94,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    99,
      99,    99,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   101,   101,   101,   101,   101,   101,   102,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   104,   105,   105,   105,
     106,   106,   106,   107,   107,   108,   108,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   111,   112,   112,   113,   113,
     114,   115,   115,   116,   116,   116,   116
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     1,     2,     5,     6,
       5,     6,     2,     3,     1,     2,     2,     2,     4,     1,
       3,     2,     3,     4,     4,     5,     4,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     2,
       3,     4,     3,     1,     3,     2,     5,     6,     6,     7,
       6,     7,     4,     5,     5,     4,     3,     3,     3,     4,
       3,     3,     4,     4,     3,     1,     3,     3,     6,     1,
       3,     3,     3,     5,     5,     5,     1,     5,     5,     5,
       4,     4,     4,     4,     6,     6,     6,     4,     6,     3,
       3,     3,     5,     3,     2,     3,     0,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     5,     4,     5,     5,     4,     7,     9,     5,     1,
       2,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     1,     1,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     3,     5,     5,     4,
       1,     3,     3,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     5,     4,     6,
       5,     4,     5,     3,    10,     8,     2,     2,     2,     2,
       4,     1,     2,     6,     5,     7,     4
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

#line 1673 "yacc.tab.c"

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

#line 526 "yacc.y"


int main(){
    yyparse();
    if(error_flag == 0)
        printf("Compiled successful!\n");
    return 0;
}
