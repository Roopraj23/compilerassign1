/*Lex program to count the number of words*/
/*Declarations*/
%{
#include<stdio.h>
#include<string.h>
int i=0;
%}

/*Translation rules*/
%%
([a-zA-Z0-9])*   {i++;} 

"\n" {printf("%d\n", i); i = 0;}
%%

/*Auxiliary functions*/
int yywrap(){
    return 1;
}

int main(){
    yylex();
    
    return 0;
}

/*
lex wordcount.l
cc lex.yy.c 
./a.out
*/