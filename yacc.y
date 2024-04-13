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

func_block      :   Func Variable '(' ')' '{' func_body '}'
                |   Func Variable '(' args ')' '{' func_body '}'
                |   Func Variable '(' ')' func_return_block '{' func_body '}'
                |   Func Variable '(' args ')' func_return_block '{' func_body '}'
                ;

func_return_block    :   Variable
                |   func_return_block ',' Variable
                ;

func_body       :   code_block
                |   func_body code_block
                ;

code_block      :   inline_call_block
                |   return_block
                |   if_block
                ;

return_block    :   Return Variable
                |   Return DecInt
                ;

inline_call_block   :       Variable '(' ')'
                    |       Variable '(' variable_list ')'
                    |       Variable '.' inline_call_block
                    ;

args                :  arg 
                    |  args ',' arg
                    ;      

arg                :   Variable Variable
                    ;


variable_list       :   Variable
                    |   string_block
                    |   Variable '.' variable_list
                    |   variable_list ',' Variable
                    |   variable_list ',' string_block
                    ;

string_block        :   '"' Variable '"'
                    ;

if_block            : If cond '{' func_body '}'
                    | If cond '{' func_body '}' else_block
                    | If cond '{' func_body '}' if_else_block
                    | If cond '{' func_body '}' if_else_block else_block
                    ;

if_else_block       :   Else If cond '{' func_body '}'
                    |   if_else_block Else If cond '{' func_body '}'
                    ;

else_block          :   Else '{' func_body '}'
                    ;
    

cond                : express
                    | cond '&''&' express
                    | cond '|''|' express
                    | cond '!''=' express
                    | cond '=''=' express
                    | cond '>' express
                    | cond '<' express
                    | cond '>''=' express
                    | cond '<''=' express
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

factor              : DecInt
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