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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    DEC_CONSTANT = 259,            /* DEC_CONSTANT  */
    HEX_CONSTANT = 260,            /* HEX_CONSTANT  */
    STRING = 261,                  /* STRING  */
    LOGICAL_AND = 262,             /* LOGICAL_AND  */
    LOGICAL_OR = 263,              /* LOGICAL_OR  */
    LS_EQ = 264,                   /* LS_EQ  */
    GR_EQ = 265,                   /* GR_EQ  */
    EQ = 266,                      /* EQ  */
    NOT_EQ = 267,                  /* NOT_EQ  */
    MUL_ASSIGN = 268,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 269,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 270,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 271,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 272,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 273,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 274,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 275,              /* AND_ASSIGN  */
    XOR_ASSIGN = 276,              /* XOR_ASSIGN  */
    OR_ASSIGN = 277,               /* OR_ASSIGN  */
    INCREMENT = 278,               /* INCREMENT  */
    DECREMENT = 279,               /* DECREMENT  */
    SHORT = 280,                   /* SHORT  */
    INT = 281,                     /* INT  */
    LONG = 282,                    /* LONG  */
    LONG_LONG = 283,               /* LONG_LONG  */
    SIGNED = 284,                  /* SIGNED  */
    UNSIGNED = 285,                /* UNSIGNED  */
    CONST = 286,                   /* CONST  */
    IF = 287,                      /* IF  */
    FOR = 288,                     /* FOR  */
    WHILE = 289,                   /* WHILE  */
    CONTINUE = 290,                /* CONTINUE  */
    BREAK = 291,                   /* BREAK  */
    RETURN = 292,                  /* RETURN  */
    UMINUS = 293,                  /* UMINUS  */
    LOWER_THAN_ELSE = 294,         /* LOWER_THAN_ELSE  */
    ELSE = 295                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "parser.y"

	double dval;
	entry_t* entry;
	int ival;

#line 110 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
