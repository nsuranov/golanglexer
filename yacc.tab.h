/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_YACC_TAB_H_INCLUDED
# define YY_YY_YACC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IFX = 258,                     /* IFX  */
    Package = 259,                 /* Package  */
    Import = 260,                  /* Import  */
    Func = 261,                    /* Func  */
    Return = 262,                  /* Return  */
    Go = 263,                      /* Go  */
    Defer = 264,                   /* Defer  */
    Chan = 265,                    /* Chan  */
    Select = 266,                  /* Select  */
    Const = 267,                   /* Const  */
    Var = 268,                     /* Var  */
    Map = 269,                     /* Map  */
    Make = 270,                    /* Make  */
    Type = 271,                    /* Type  */
    Struct = 272,                  /* Struct  */
    Interface = 273,               /* Interface  */
    If = 274,                      /* If  */
    Else = 275,                    /* Else  */
    Case = 276,                    /* Case  */
    Switch = 277,                  /* Switch  */
    Default = 278,                 /* Default  */
    Fallthrough = 279,             /* Fallthrough  */
    Continue = 280,                /* Continue  */
    Break = 281,                   /* Break  */
    Range = 282,                   /* Range  */
    Do = 283,                      /* Do  */
    While = 284,                   /* While  */
    For = 285,                     /* For  */
    DecInt = 286,                  /* DecInt  */
    OctInt = 287,                  /* OctInt  */
    BinInt = 288,                  /* BinInt  */
    HexInt = 289,                  /* HexInt  */
    DecFloat = 290,                /* DecFloat  */
    HexFloat = 291,                /* HexFloat  */
    String = 292,                  /* String  */
    Variable = 293,                /* Variable  */
    Plus = 294,                    /* Plus  */
    Equals = 295,                  /* Equals  */
    Colon = 296,                   /* Colon  */
    Minus = 297,                   /* Minus  */
    Times = 298,                   /* Times  */
    Devides = 299,                 /* Devides  */
    Mod = 300,                     /* Mod  */
    And = 301,                     /* And  */
    Or = 302,                      /* Or  */
    StatementOr = 303,             /* StatementOr  */
    StatementAnd = 304,            /* StatementAnd  */
    StatementEquals = 305,         /* StatementEquals  */
    Xor = 306,                     /* Xor  */
    Not = 307,                     /* Not  */
    OpenBracket = 308,             /* OpenBracket  */
    ClosingBracket = 309,          /* ClosingBracket  */
    OpenCurlyBracket = 310,        /* OpenCurlyBracket  */
    ClosingCurlyBracket = 311,     /* ClosingCurlyBracket  */
    OpenSquareBracket = 312,       /* OpenSquareBracket  */
    ClosingSquareBracket = 313,    /* ClosingSquareBracket  */
    ChannelArrow = 314,            /* ChannelArrow  */
    Less = 315,                    /* Less  */
    More = 316,                    /* More  */
    UNARY = 317                    /* UNARY  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */
