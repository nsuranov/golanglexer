%{
	#include <stdio.h>
	#include <string.h>

	extern int yylineno;
	extern int yylex();
	int error_flag = 0;
	void yyerror(char *str){
		printf("Error in line: %d\n", yylineno);
		error_flag = 1;
	}
%}


%start program
%token If
%token Else
%token While
%token Return
%token Print
%token Int
%token Variable
%token IFX
%token And
%token Or
%token NEquil
%token Equil
%token More
%token Less
%token MoreEquil
%token LessEquil
%left '+' '-'
%left '*' '/'
%right '=' '!'
%left And Or
%left NEquil Equil
%left More Less MoreEquil LessEquil

%%

program             : default_block
                    | program default_block
                    ;

default_block       : if_block
                    | loop_block
                    | return ';'
                    | print ';'
                    | assignment ';'
                    ;

if_block            : If '(' cond ')' '{' program '}' %prec IFX
                    | If '(' cond ')' '{' program '}' Else '{' program '}'
                    ;

loop_block          : While '(' cond ')' '{' program '}'
                    ;

cond                : express
                    | cond And express
                    | cond Or express
                    | cond NEquil express
                    | cond Equil express
                    | cond More express
                    | cond Less express
                    | cond MoreEquil express
                    | cond LessEquil express
                    ;

return              : Return
                    | Return Variable
                    | Return express
                    ;

print               : Print '(' Variable ')'
                    | Print '(' express ')'
                    ;

assignment          : Variable '=' assignment
                    | express
                    | Variable '=' Variable
                    ;

express             : term
                    | express '+' term
                    | express '-' term
                    ;

term                : factor
                    | term '*' factor
                    | term '/' factor
                    | term '%' factor
                    ;

factor              : Int
                    | Variable
                    | '!' factor
                    | '(' express ')'
                    ;

%%



int main(){
    yyparse();
    if(error_flag == 0)
        printf("Compiled successful!\n");
    return 0;
}
