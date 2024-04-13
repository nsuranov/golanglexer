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

%token Package
%token Import
%token Func
%token Return

%token Go
%token Defer
%token Chan
%token Select


%token Const
%token Var
%token Map
%token Type
%token Struct
%token Interface

%token If
%token Else
%token Case
%token Switch
%token Fallthrough

%token Continue
%token Break

%token Range
%token Do
%token While
%token For

%token DecInt
%token Variable


%%

program             : default_block
                    | program default_block
                    ;

default_block   :   package_block
                |   import_block
                |   func_block
                ;

package_block   :   Package Variable
                ;

import_block    : Import '"' Variable '"'
                | Import '(' import_list ')'
                ;  


import_list     : '"' Variable '"'
                | import_list ';' '"' Variable '"'
                | import_list '"' Variable '"'
                ;

func_block      :   Func Variable '(' ')' '{' code_block '}'
                ;

code_block      :   if_block
                |   loop_block
                |   func_call
                |   return_block
                ;




%%



int main(){
    yyparse();
    if(error_flag == 0)
        printf("Compiled successful!\n");
    return 0;
}