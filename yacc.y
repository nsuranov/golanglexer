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

%token IFX
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
%token String
%token Variable

%token Plus
%token Equals
%token Colon
%token Minus
%token Times
%token Devides
%token Mod
%token And
%token Or 
%token StatementOr
%token StatementAnd;
%token StatementEquals;
%token Xor
%token Not 

%token OpenBracket
%token ClosingBracket
%token OpenCurlyBracket
%token ClosingCurlyBracket
%token OpenSquareBracket
%token ClosingSquareBracket
%token ChannelArrow
%token Less
%token More


%left Plus Minus Times Devides
%right UNARY

%%

program_struct      : package_block import_block program 
                    ;


program             : default_block
                    | program default_block
                    ;


default_block       : type_block
                    | Func func_block
                    ;


type_block          : Type Variable Struct OpenCurlyBracket ClosingCurlyBracket
                    | Type Variable Struct OpenCurlyBracket struct_fields_list ClosingCurlyBracket
                    | Type Variable Interface OpenCurlyBracket ClosingCurlyBracket
                    | Type Variable Interface OpenCurlyBracket int_body ClosingCurlyBracket
                    ;


struct_fields_list  : Variable Variable
                    | struct_fields_list Variable Variable
                    ;


int_body            : func_head
                    | int_body func_head
                    ; 
            

package_block       : Package Variable
                    ;


import_block        : Import factor
                    | Import OpenBracket import_list ClosingBracket
                    ;  


import_list         : factor
                    | import_list ';' factor
                    | import_list factor
                    ;


func_head           : Variable OpenBracket ClosingBracket
                    | Variable OpenBracket args ClosingBracket
                    | Variable OpenBracket ClosingBracket func_return_block
                    | Variable OpenBracket args ClosingBracket func_return_block
                    ;


func_block          : func_head OpenCurlyBracket func_body ClosingCurlyBracket
                    ;


func_return_block   : Variable
                    | func_return_block ',' Variable
                    ;


func_body           : code_block
                    | func_body code_block
                    ;


code_block          : inline_call_block
                    | return_block
                    | assignment
                    | if_block
                    | for_block
                    | Break
                    | Continue
                    | switch_block
                    | gorutine_block
                    | defer_block
                    | select_block
                    ;


return_block        : Return expression 
                    ;


inline_call_block   : Variable OpenBracket ClosingBracket
                    | Variable OpenBracket variable_list ClosingBracket
                    | Variable '.' inline_call_block
                    ;


args                : arg 
                    | args ',' arg
                    ;      


arg                 : Variable Variable
                    ;


variable_list       : factor
                    | Variable '.' variable_list
                    | variable_list ',' Variable
                    | variable_list ',' factor
                    ;


if_block            : If condition OpenCurlyBracket func_body ClosingCurlyBracket %prec IFX
                    | If condition OpenCurlyBracket func_body ClosingCurlyBracket else_block
                    | If condition OpenCurlyBracket func_body ClosingCurlyBracket if_else_block
                    | If condition OpenCurlyBracket func_body ClosingCurlyBracket if_else_block else_block
                    ;


if_else_block       : Else If condition OpenCurlyBracket func_body ClosingCurlyBracket
                    | if_else_block Else If condition OpenCurlyBracket func_body ClosingCurlyBracket
                    ;


else_block          : Else OpenCurlyBracket func_body ClosingCurlyBracket
                    ;


for_block           : For condition OpenCurlyBracket func_body ClosingCurlyBracket
                    | For OpenCurlyBracket func_body ClosingCurlyBracket
                    ;


condition           : condition StatementAnd condition 
                    | condition StatementOr condition
                    | condition StatementEquals condition 
                    | condition Not Equals condition
                    | condition More condition
                    | condition Less condition 
                    | condition More Equals condition
                    | condition Less Equals condition
                    | OpenBracket condition ClosingBracket
                    | expression
                    ;


assignment          : Variable Colon Equals expression
                    | Variable Colon Equals object_field
                    | Variable Colon Equals Range expression
                    | Variable Colon Equals inline_call_block
                    | Variable Colon Equals ChannelArrow Variable
                    | Variable ChannelArrow expression
                    | Variable Equals expression
                    | Variable Equals object_field
                    | Variable Equals inline_call_block
                    | Var Variable Variable
                    | Var Variable Variable Equals expression
                    | Var Variable Variable Equals object_field
                    | Var Variable Variable Equals inline_call_block
                    | Var Variable Variable Equals ChannelArrow Variable
                    | Variable Plus Plus
                    | Variable Minus Minus
                    ;


expression          : factor
                    | expression Plus expression 
                    | expression Minus expression
                    | expression Times expression
                    | expression Devides expression
                    | expression Mod expression
                    | expression And expression
                    | expression Or expression
                    | expression Xor expression
                    | OpenBracket expression ClosingBracket
                    ;


factor              : object_field
                    | DecInt
                    | OctInt
                    | HexInt
                    | BinInt
                    | DecFloat
                    | HexFloat
                    | Plus DecInt %prec UNARY
                    | Plus OctInt %prec UNARY
                    | Plus HexInt %prec UNARY
                    | Plus BinInt %prec UNARY
                    | Plus DecFloat %prec UNARY
                    | Plus HexFloat %prec UNARY
                    | Minus DecInt %prec UNARY
                    | Minus OctInt %prec UNARY
                    | Minus HexInt %prec UNARY
                    | Minus BinInt %prec UNARY
                    | Minus DecFloat %prec UNARY
                    | Minus HexFloat %prec UNARY
                    | String
                    | Not factor
                    ;


object_field        : Variable
                    | Variable '.' object_field
                    ;


switch_block        : Switch condition OpenCurlyBracket switch_body ClosingCurlyBracket
                    ;


switch_body         : case_block
                    | switch_body case_block
                    ;

switch_code_block   : inline_call_block
                    | return_block
                    | assignment
                    | if_block
                    | for_block
                    | Break
                    | Continue
                    | switch_block
                    | case_block
                    ;

case_block          : Case expression Colon OpenCurlyBracket func_body ClosingCurlyBracket
                    | Case expression Colon switch_code_block case_block
                    | Case expression Colon switch_code_block
                    | Default Colon OpenCurlyBracket func_body ClosingCurlyBracket
                    | Default Colon switch_code_block
                    ;

anon_func_block     : Func OpenBracket args ClosingBracket OpenCurlyBracket func_body ClosingCurlyBracket OpenBracket variable_list ClosingBracket
                    | Func OpenBracket ClosingBracket OpenCurlyBracket func_body ClosingCurlyBracket OpenBracket ClosingBracket
                    ;

gorutine_block      : Go inline_call_block
                    | Go anon_func_block
                    ;

defer_block         : Defer inline_call_block
                    | Defer anon_func_block
                    ;

select_block        : Select OpenCurlyBracket switch_body ClosingCurlyBracket
                    ;

%%

int main(){
    yyparse();
    if(error_flag == 0)
        printf("Compiled successful!\n");
    return 0;
}
