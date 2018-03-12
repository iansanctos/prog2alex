#include <stdio.h>
#include<string.h>
int main()
{
char senha[50];
char secreta[50]="1234";

    printf("informe a senha:");
    gets(senha);

if(!strcmp(senha,secreta)) // a exclamacao "!" é a mesma coisa que if(strcmp(senha,secreta)==0)
    printf("\nSao Iguais");
else
    printf("\nSão diferentes");

return 0;

}