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


%start program_struct

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
%token Default
%token Fallthrough

%token Continue
%token Break

%token Range
%token Do
%token While
%token For

%token DecInt
%token OctInt
%token BinInt
%token HexInt

%token DecFloat
%token HexFloat

%token Variable


%%

program_struct      :   package_block import_block program 
                    ;

program             : default_block
                    | program default_block
                    ;

default_block   :   type_block
                |   Func func_block
                ;

type_block      :   Type Variable Struct '{' '}'
                |   Type Variable Struct '{' struct_fields_list '}'
                |   Type Variable Interface '{' '}'
                |   Type Variable Interface '{' int_body '}'
                ;

struct_fields_list  :   Variable Variable
                    |   struct_fields_list Variable Variable
                    ;
int_body            :   func_head
                    |   int_body func_head
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

func_head       :   Variable '(' ')'
                |   Variable '(' args ')'
                |   Variable '(' ')' func_return_block
                |    Variable '(' args ')' func_return_block
                ;

func_block      :   func_head '{' func_body '}'
                |   func_head '{' func_body '}'
                ;

func_return_block    :   Variable
                |   func_return_block ',' Variable
                ;

func_body       :   code_block
                |   func_body code_block
                ;

code_block      :   inline_call_block
                |   return_block
                |   assignment
                |   if_block
                |   for_block
                |   Break
                |   Continue
                |   switch_block
                |   gorutine_block
                ;

return_block    :   Return assignment
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

for_block           : For multi_cond '{' func_body '}'
                    | For '{' func_body '}'
                    | For cond'{' func_body '}'
                    ;

multi_cond          :   cond
                    |   assignment
                    |   multi_cond ';' cond
                    |   multi_cond ';' assignment
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

assignment          : Variable ':''=' express
                    | Variable ':''=' assignment
                    | Variable ':''=' object_field
                    | Variable ':''=' Variable
                    | Variable ':''=' Range assignment
                    | Variable ':''=' inline_call_block
                    | Variable '=' express
                    | Variable '=' assignment
                    | Variable '=' Variable
                    | Variable '=' inline_call_block
                    | express
                    ;

object_field        : Variable
                    | Variable '.' object_field
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
                    | OctInt
                    | HexInt
                    | BinInt
                    | DecFloat
                    | HexFloat
                    | string_block
                    | object_field
                    | '!' factor
                    | '(' express ')'
                    ;

switch_block        : Switch multi_cond '{' switch_body '}'
                    | Switch cond'{' switch_body '}'
                    ;
switch_body     :   switch_code_block
                |   switch_body switch_code_block
                ;

switch_code_block       :   inline_call_block
                        |   return_block
                        |   assignment
                        |   if_block
                        |   for_block
                        |   Break
                        |   Continue
                        |   switch_block
                        |   case_block
                        ;

case_block              :   Case assignment ':' '{' func_body '}'
                        |   Case assignment ':' code_block case_block
                        |   Default ':' '{' func_body '}'
                        |   Default ':' code_block
                        ;

anon_func_block         :   Func '(' args ')' '{' func_body '}' '(' variable_list ')'
                        |   Func '('  ')' '{' func_body '}' '(' ')'
                        ;

gorutine_block          :   Go inline_call_block
                        |   Go anon_func_block
                        ;
%%



int main(){
    yyparse();
    if(error_flag == 0)
        printf("Compiled successful!\n");
    return 0;
}