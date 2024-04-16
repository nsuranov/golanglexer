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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

