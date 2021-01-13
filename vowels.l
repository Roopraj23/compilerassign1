%{
    #include<stdio.h>
    int vowels=0;
    int consts=0;
%}
%%
[aeionAEION] {vowels++;}
[a-zA-Z] {consts++;}
%%
int yywrap(){
    return 1;
}

int main(){
    printf("Enter the string at end press ctr+d \n");
    yylex();
    printf("no of vowels= %d \n no of const= %d \n", vowels, consts);
    return 0;
}