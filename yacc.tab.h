/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
     Fallthrough = 276,
     Continue = 277,
     Break = 278,
     Range = 279,
     Do = 280,
     While = 281,
     For = 282,
     DecInt = 283,
     Variable = 284
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
#define Fallthrough 276
#define Continue 277
#define Break 278
#define Range 279
#define Do 280
#define While 281
#define For 282
#define DecInt 283
#define Variable 284




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

