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
     IF_TOKEN = 258,
     ELSE_TOKEN = 259,
     WHILE_TOKEN = 260,
     INC_TOKEN = 261,
     DEC_TOKEN = 262,
     EQUAL_TOKEN = 263,
     INT_TOKEN = 264,
     VOID_TOKEN = 265,
     RETURN_TOKEN = 266,
     MAIN_TOKEN = 267,
     NUM_TOKEN = 268,
     ID_TOKEN = 269,
     IF_PRIOR = 270,
     IF_ELSE_PRIOR = 271,
     UMINUS = 272
   };
#endif
/* Tokens.  */
#define IF_TOKEN 258
#define ELSE_TOKEN 259
#define WHILE_TOKEN 260
#define INC_TOKEN 261
#define DEC_TOKEN 262
#define EQUAL_TOKEN 263
#define INT_TOKEN 264
#define VOID_TOKEN 265
#define RETURN_TOKEN 266
#define MAIN_TOKEN 267
#define NUM_TOKEN 268
#define ID_TOKEN 269
#define IF_PRIOR 270
#define IF_ELSE_PRIOR 271
#define UMINUS 272




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 37 "parser.ypp"
{
    int num;
    string* id;
    char* str;
    ExpressionValue* ev;
    Condition* c;
    Function* f;
    vector<ExpressionValue*> * vev;
    vector<string*>* vs;
}
/* Line 1529 of yacc.c.  */
#line 94 "parser.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

