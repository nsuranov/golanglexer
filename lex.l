%{
    #include <stdio.h>
    #include "yacc.tab.h"
    void yyerror(char *str);
    void error(char s){
		printf("Error in line: %d\n", yylineno);
		exit(1);
	}	

%}

%option yylineno
%option noyywrap

%%

"package"               return Package;
"import"                return Import;
"func"                  return Func;
"return"                return Return;

"go"                    return Go;
"chan"                  return Chan;
"select"                return Select;
"defer"                 return Defer;

"const"                 return Const;
"var"                   return Var;
"map"                   return Map;

"type"                  return Type;
"struct"                return Struct;
"interface"             return Interface;

"if"                    return If;
"else"                  return Else;
"case"                  return Case;
"switch"                return Switch;
"default"               return Default;
"fallthrough"           return Fallthrough;

"continue"              return Continue;
"break"                 return Break;

"range"                 return Range;
"for"                   return For;

\=                      return Equals;
\:                      return Colon;
\+                      return Plus; 
\-                      return Minus; 
\*                      return Times; 
\/                      return Devides; 
\%                      return Mod; 
\&                      return And; 
\|                      return Or; 
\^                      return Xor; 
\!                      return Not; 
\(                      return OpenBracket; 
\)                      return ClosingBracket; 
\{                      return OpenCurlyBracket; 
\}                      return ClosingCurlyBracket; 
\[                      return OpenSquareBracket; 
\]                      return ClosingSquareBracket; 
"<-"                    return ChannelArrow;

[[:alpha:]_][[:alnum:]_]*        return Variable;

((0)|([1-9][0-9]*(_?[0-9]+)*))([eE][-+]?[0-9]+(_?[0-9]+)*)? return DecInt;
(0[oO]?(_?[0-7]+)*)([eE][-+]?[0-9]+(_?[0-9]+)*)? return OctInt;
0[bB](_?[01]+)* return BinInt;
(0[xX](_?[0-9a-fA-F]+)+)([pP][-+]?[0-9]+(_?[0-9]+)*)? return HexInt;
(([0-9]+(_?[0-9]+)*\.[0-9]*)|([0-9]*\.[0-9]+(_?[0-9]+)*))([eE][-+]?[0-9]+(_?[0-9]+)*)? return DecFloat;
((0[xX](_?[0-9a-fA-F]+)+\.[0-9a-fA-F]*)|(0[xX][0-9a-fA-F]*\.(_?[0-9a-fA-F]+)+))([pP][-+]?[0-9]+(_?[0-9]+)*) return HexFloat;

"//".*                                    { /* DO NOTHING */ }
[/][*][^*]*[*]+([^*/][^*]*[*]+)*[/]       { /* DO NOTHING */ }

\"(\\.|[^"\\])*\"               return String;
[><"'`;.,~]                 return yytext[0]; 
[[:space:]]+                    ;
.                               error(*yytext);



%%


