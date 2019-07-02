%{
/* echo everything except “CSE” */
%}
%option noyywrap
%%
CSE printf("Computer Science & Engineering");
. ECHO;
\n ECHO;
%%
int main(int argc, char *argv[]) {

yylex();
return 0;

}