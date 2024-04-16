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

%token Make

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
                    | assignment
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

variable_list       :   Variable
                    |   value
                    |   inline_call_block
                    |   Variable '.' variable_list
                    |   variable_list ',' Variable
                    |   variable_list ',' String
                    |   variable_list ',' inline_call_block
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

                    /*
                    
switch_block        : Switch multi_cond OpenCurlyBracket switch_body ClosingCurlyBracket
                    | Switch cond OpenCurlyBracket switch_body ClosingCurlyBracket
                    | Switch OpenCurlyBracket switch_body ClosingCurlyBracket
                    ;
switch_body     :   case_block
                |   switch_body case_block
                ;

switch_code_multiblock  :   switch_code_block
                        |   switch_code_multiblock switch_code_block
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

case_block              :   Case Variable Colon   switch_code_block 
                        |   Case Variable Colon   OpenCurlyBracket switch_code_multiblock ClosingCurlyBracket
                        |   Case express Colon   switch_code_block 
                        |   Case express Colon   OpenCurlyBracket switch_code_multiblock ClosingCurlyBracket
                        |   Default Colon   OpenCurlyBracket switch_code_multiblock ClosingCurlyBracket
                        |   Default Colon   switch_code_block
                        ;

anon_func_block         :   Func OpenBracket args ClosingBracket OpenCurlyBracket func_body ClosingCurlyBracket OpenBracket variable_list ClosingBracket
                        |   Func OpenBracket  ClosingBracket OpenCurlyBracket func_body ClosingCurlyBracket OpenBracket ClosingBracket
                        ;

gorutine_block          :   Go inline_call_block
                        |   Go anon_func_block
                        ;

defer_block             :   Defer inline_call_block
                        |   Defer anon_func_block
                        ;

select_block        : Select OpenCurlyBracket switch_body ClosingCurlyBracket
                    ;

*/

multi_cond          :   cond
                    |   multi_cond ';' cond
                    |   multi_cond ',' cond
                    |   auto_type_assignment
                    ;


cond                : express
                    | inline_call_block
                    | cond ChannelArrow express
                    | cond StatementAnd express
                    | cond StatementOr express
                    | cond Not Equals express
                    | cond Equals Equals express
                    | cond More express
                    | cond Less express
                    | cond More Equals express
                    | cond Less Equals express
                    ;


assignment          : auto_type_assignment
                    | Variable ChannelArrow factor
                    | Variable Equals express
                    | Variable Equals inline_call_block
                    | Var Variable Variable
                    | Var Variable Variable Equals express
                    | Var Variable Variable Equals object_field
                    | Var Variable Variable Equals inline_call_block
                    | Var Variable Variable Equals ChannelArrow Variable
                    | Const Variable Variable Equals express
                    | Const Variable Variable Equals object_field
                    | Const Variable Variable Equals inline_call_block
                    | Const Variable Equals express
                    | Const Variable Equals object_field
                    | Const Variable Equals inline_call_block
                    | Var Variable array_index Variable
                    | Var Variable array_index Variable Equals array_assignment
                    | Var Variable array_index Variable Equals object_field
                    | Var Variable array_index Variable Equals inline_call_block
                    | Variable array_index Equals express
                    | Var Variable Variable Equals Variable array_index
                    ;

array_index         :   OpenSquareBracket express ClosingSquareBracket
                    |   OpenSquareBracket '.''.''.' ClosingSquareBracket
                    |   OpenSquareBracket String ClosingSquareBracket
                    |   OpenSquareBracket ClosingSquareBracket
                    ;

array_assignment    :   OpenCurlyBracket factor_list ClosingCurlyBracket
                    |
                    ;

factor_list         :   factor_value   
                    |   factor_list','factor_value
                    ;

factor_value        :   value Colon  value
                    |   value
                    ;

value               : OctInt
                    |DecInt
                    | HexInt
                    | BinInt
                    | DecFloat
                    | HexFloat
                    | String
                    ;
                    
auto_type_assignment:variable_list Colon  Equals express
                    |variable_list Colon  Equals object_field
                    | variable_list Colon  Equals Range express
                    | variable_list Colon  Equals inline_call_block
                    | variable_list Colon  Equals ChannelArrow Variable
                    | variable_list Colon   Equals Variable array_index
                    | variable_list Colon   Equals dif_assigment_obj
                    | variable_list Colon   Equals Map array_index Variable array_assignment
                    | variable_list Colon   Equals Make OpenBracket Map array_index Variable ClosingBracket
                    | variable_list Colon   Equals  Variable array_assignment
                    ;

dif_assigment_obj   :   object_field
                    |   dif_assigment_obj array_index
                    |   dif_assigment_obj inline_call_block
                    ;
/* Одна из версий не нужна, вроде эта, но лучше не удалять
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
*/

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
                    | express
                    ;

express             : term
                    | express Plus  term
                    | express Minus  term
                    | express Times   term
                    | express Devides    term
                    | express Mod  term
                    ;

term                : factor
                    ;


factor              : value
                    | OpenBracket express ClosingBracket
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
                    | String
                    | object_field
                    ;
%%

int main(){
    yyparse();
    if(error_flag == 0)
        printf("Compiled successful!\n");
    return 0;
}
