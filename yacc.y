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

%nonassoc IFX
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
%token Comma

%token OpenBracket
%token ClosingBracket
%token OpenCurlyBracket
%token ClosingCurlyBracket
%token OpenSquareBracket
%token ClosingSquareBracket
%token ChannelArrow
%token Less
%token More

%token StatementNotEquals
%token DynamicAssignment
%token Ellipsis

%left Plus Minus Times Devides
%right UNARY

%%

program_struct              : package_block import_block program 
                            ;


program                     : default_block
                            | program default_block
                            ;


default_block               : type_block
                            | assignment
                            | Func func_block
                            ;


type_block                  : Type Variable Struct OpenCurlyBracket ClosingCurlyBracket
                            | Type Variable Struct OpenCurlyBracket struct_fields_list ClosingCurlyBracket
                            | Type Variable Interface OpenCurlyBracket ClosingCurlyBracket
                            | Type Variable Interface OpenCurlyBracket int_body ClosingCurlyBracket
                            ;


struct_fields_list          : struct_field
                            | struct_fields_list struct_field
                            ;


struct_field                : object_field
                            | object_field Func OpenBracket ClosingBracket
                            | object_field Func OpenBracket ClosingBracket object_field
                            | object_field Func OpenBracket args ClosingBracket
                            | Variable Chan object_field
                            | Variable Chan Interface OpenCurlyBracket ClosingCurlyBracket
                            | Variable Chan Struct OpenCurlyBracket ClosingCurlyBracket
                            | Map array_index Interface OpenCurlyBracket ClosingCurlyBracket
                            | Map array_index Struct OpenCurlyBracket ClosingCurlyBracket
                            ;


int_body                    : func_head
                            | int_body func_head
                            ; 
            

package_block               : Package Variable
                            ;



import_block                : Import factor
                            | Import OpenBracket import_list ClosingBracket
                            ;  


import_list                 : factor
                            | import_list ';' factor
                            | import_list factor
                            ;


func_block                  : func_head OpenCurlyBracket func_body ClosingCurlyBracket
                            ;


func_head                   : Variable OpenBracket ClosingBracket
                            | Variable OpenBracket args ClosingBracket
                            | Variable OpenBracket ClosingBracket func_return_block
                            | Variable OpenBracket args ClosingBracket func_return_block
                            | Variable OpenBracket ClosingBracket ChannelArrow Chan Struct OpenCurlyBracket ClosingCurlyBracket
                            | OpenBracket args ClosingBracket func_head
                            ;


func_return_block           : object_field
                            | Chan object_field
                            | OpenBracket func_return_block Comma object_field ClosingBracket
                            ;


func_body                   : code_block
                            | func_body code_block
                            ;


code_block                  : inline_call_block
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


variable_list               : expression
                            | variable_list Comma expression
                            ;


return_block                : Return
                            | Return variable_list
                            ;


inline_call_block           : object_field OpenBracket ClosingBracket
                            | object_field OpenBracket args ClosingBracket
                            | object_field OpenBracket String ClosingBracket
                            | object_field OpenBracket String Comma variable_list ClosingBracket
                            ;


args                        : arg
                            | args Comma arg 
                            ;      


arg                         : object_field
                            | factor
                            | object_field object_field
                            | object_field Chan object_field
                            | object_field Chan Struct OpenCurlyBracket ClosingCurlyBracket
                            | object_field Chan Chan Struct OpenCurlyBracket ClosingCurlyBracket
                            | object_field Ellipsis object_field
                            | object_field Ellipsis 
                            | object_field Ellipsis object_field OpenCurlyBracket ClosingCurlyBracket
                            | object_field Ellipsis Interface
                            | object_field Ellipsis Interface OpenCurlyBracket ClosingCurlyBracket
                            ;


if_block                    : If condition OpenCurlyBracket func_body ClosingCurlyBracket 
                            | If condition OpenCurlyBracket func_body ClosingCurlyBracket else_block
                            | If condition OpenCurlyBracket func_body ClosingCurlyBracket if_else_block
                            | If condition OpenCurlyBracket func_body ClosingCurlyBracket if_else_block else_block
                            | If object_field OpenCurlyBracket func_body ClosingCurlyBracket 
                            | If object_field OpenCurlyBracket func_body ClosingCurlyBracket else_block
                            | If object_field OpenCurlyBracket func_body ClosingCurlyBracket if_else_block
                            | If object_field OpenCurlyBracket func_body ClosingCurlyBracket if_else_block else_block
                            ;


if_else_block               : Else If condition OpenCurlyBracket func_body ClosingCurlyBracket
                            | if_else_block Else If condition OpenCurlyBracket func_body ClosingCurlyBracket
                            ;


else_block                  : Else OpenCurlyBracket func_body ClosingCurlyBracket
                            ;


for_block                   : For condition OpenCurlyBracket func_body ClosingCurlyBracket
                            | For multi_switch_condition_body OpenCurlyBracket func_body ClosingCurlyBracket
                            | For OpenCurlyBracket func_body ClosingCurlyBracket
                            ;


condition                   : expression
                            | auto_type_assignment ';' condition 
                            | expression StatementAnd condition 
                            | expression StatementOr condition
                            | expression StatementEquals factor
                            | expression StatementNotEquals factor
                            | expression StatementEquals factor StatementAnd condition
                            | expression StatementEquals factor StatementOr condition
                            | expression StatementNotEquals factor StatementAnd condition
                            | expression StatementNotEquals factor StatementOr condition
                            | expression More condition
                            | expression Less condition 
                            | expression More Equals condition
                            | expression Less Equals condition
                            | Not factor
                            | OpenBracket condition ClosingBracket
                            ;


channel_assignment          : Variable ChannelArrow expression
                            | Var Variable Variable Equals ChannelArrow Variable
                            | ChannelArrow expression
                            | ChannelArrow inline_call_block 
                            | Variable ChannelArrow Struct OpenCurlyBracket ClosingCurlyBracket OpenCurlyBracket ClosingCurlyBracket 
                            ;


assignment                  : auto_type_assignment
                            | channel_assignment
                            | object_field Equals expression
                            | Var Variable Variable
                            | Var Variable Variable Equals expression
                            | Const Variable Variable Equals expression
                            | Const Variable Equals expression
                            | Var Variable array_index Variable
                            | Var Variable array_index Variable Equals array_assignment
                            | Var Variable array_index Variable Equals object_field
                            | Var Variable array_index Variable Equals inline_call_block
                            | Var Variable Chan Struct OpenCurlyBracket ClosingCurlyBracket 
                            | object_field array_index Equals expression
                            | object_field array_index Equals Struct OpenCurlyBracket ClosingCurlyBracket OpenCurlyBracket ClosingCurlyBracket 
                            | Var Variable Variable Equals Variable array_index
                            | object_field Equals Make OpenBracket array_index object_field Comma factor ClosingBracket
                            | object_field Equals Make OpenBracket array_index object_field Comma factor Comma factor ClosingBracket
                            | object_field Equals Make OpenBracket Chan Struct OpenCurlyBracket ClosingCurlyBracket ClosingBracket
                            | object_field Equals Make OpenBracket Chan object_field Comma factor ClosingBracket
                            | object_field Equals Func OpenBracket args ClosingBracket OpenCurlyBracket func_body ClosingCurlyBracket 
                            | object_field Equals Map array_index Struct OpenCurlyBracket ClosingCurlyBracket OpenCurlyBracket ClosingCurlyBracket 
                            | variable_list Equals variable_list
                            | object_field Equals Range object_field
                            | object_field Equals Variable OpenCurlyBracket variable_list ClosingCurlyBracket
                            | Variable Plus Plus
                            | Variable Minus Minus
                            ;


array_index                 : OpenSquareBracket expression ClosingSquareBracket
                            | OpenSquareBracket Ellipsis ClosingSquareBracket
                            | OpenSquareBracket String ClosingSquareBracket
                            | OpenSquareBracket ClosingSquareBracket
                            ;


array_assignment            : OpenCurlyBracket factor_list ClosingCurlyBracket
                            ;


factor_list                 : object_field Colon expression Comma factor_list
                            | object_field Colon expression Comma
                            | object_field Colon expression 
                            ;


auto_type_assignment        : variable_list DynamicAssignment variable_list 
                            | variable_list DynamicAssignment Range object_field
                            | variable_list DynamicAssignment inline_call_block
                            | variable_list DynamicAssignment ChannelArrow Variable
                            | variable_list DynamicAssignment Variable array_index
                            | variable_list DynamicAssignment dif_assignment_obj
                            | variable_list DynamicAssignment Map array_index Variable array_assignment
                            | variable_list DynamicAssignment Make OpenBracket Map array_index Variable ClosingBracket
                            | variable_list DynamicAssignment Make OpenBracket Chan object_field ClosingBracket
                            | variable_list DynamicAssignment Make OpenBracket Chan Chan object_field ClosingBracket
                            | variable_list DynamicAssignment Make OpenBracket Chan Struct OpenCurlyBracket ClosingCurlyBracket ClosingBracket
                            | variable_list DynamicAssignment Make OpenBracket Chan Chan Struct OpenCurlyBracket ClosingCurlyBracket ClosingBracket
                            | variable_list DynamicAssignment Variable array_assignment
                            | variable_list DynamicAssignment object_field OpenCurlyBracket ClosingCurlyBracket
                            | variable_list DynamicAssignment object_field OpenCurlyBracket factor_list ClosingCurlyBracket
                            ;


dif_assignment_obj          : object_field
                            | dif_assignment_obj array_index
                            | dif_assignment_obj inline_call_block
                            ;


expression                  : factor
                            | factor Plus expression 
                            | factor Minus expression
                            | factor Times expression
                            | factor Devides expression
                            | factor Mod expression
                            | factor And expression
                            | factor Or expression
                            | factor Xor expression
                            | OpenBracket expression ClosingBracket
                            | object_field OpenCurlyBracket factor_list ClosingCurlyBracket
                            ;


factor                      : object_field
                            | object_field array_index 
                            | DecInt
                            | OctInt
                            | HexInt
                            | BinInt
                            | DecFloat
                            | HexFloat
                            | String
                            | inline_call_block
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
                            ;


object_field                : Variable
                            | OpenBracket object_field ClosingBracket
                            | Times object_field %prec UNARY
                            | And object_field %prec UNARY
                            | Variable '.' object_field
                            | Not object_field
                            ;


switch_block                : Switch Variable OpenCurlyBracket switch_body ClosingCurlyBracket
                            | Switch multi_switch_condition_body OpenCurlyBracket switch_body ClosingCurlyBracket
                            | Switch auto_type_assignment OpenCurlyBracket switch_body ClosingCurlyBracket
                            | Switch OpenCurlyBracket switch_body ClosingCurlyBracket
                            ;


multi_switch_condition_body : multi_switch_condition
                            | multi_switch_condition_body ';' multi_switch_condition
                            | multi_switch_condition_body Comma multi_switch_condition
                            ;

        
multi_switch_condition      : condition
                            | assignment
                            ;


switch_body                 : case_block
                            | switch_body case_block
                            ;


switch_code_block           : inline_call_block
                            | return_block
                            | assignment
                            | if_block
                            | for_block
                            | Break
                            | Continue
                            | switch_block
                            ;


case_block                  : Case condition Colon OpenCurlyBracket func_body ClosingCurlyBracket
                            | Case condition Colon switch_code_block case_block
                            | Case condition Colon switch_code_block
                            | Case auto_type_assignment Colon switch_code_block
                            | Case args Colon switch_code_block
                            | Default Colon OpenCurlyBracket func_body ClosingCurlyBracket
                            | Default Colon switch_code_block
                            ;


anon_func_block             : Func OpenBracket args ClosingBracket OpenCurlyBracket func_body ClosingCurlyBracket OpenBracket variable_list ClosingBracket
                            | Func OpenBracket ClosingBracket OpenCurlyBracket func_body ClosingCurlyBracket OpenBracket ClosingBracket
                            ;


gorutine_block              : Go inline_call_block
                            | Go anon_func_block
                            ;


defer_block                 : Defer inline_call_block
                            | Defer anon_func_block
                            ;


select_block                : Select OpenCurlyBracket select_body ClosingCurlyBracket
                            ;


select_body                 : select_case_block
                            | select_body select_case_block
                            ;


select_case_block           : Case channel_assignment Colon OpenCurlyBracket func_body ClosingCurlyBracket
                            | Case channel_assignment Colon switch_code_block func_body 
                            | Case channel_assignment Colon func_body 
                            | Case channel_assignment Colon 
                            | Case auto_type_assignment Colon func_body 
                            | Case Variable Equals channel_assignment Colon func_body 
                            | Default Colon OpenCurlyBracket func_body ClosingCurlyBracket
                            | Default Colon 
                            ;


%%

int main(){
    yyparse();
    if(error_flag == 0)
        printf("Compiled successful!\n");
    return 0;
}
