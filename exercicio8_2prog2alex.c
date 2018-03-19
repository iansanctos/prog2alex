#include <stdio.h>
#include<string.h>
int main()
{
char nome[50];
char sobrenome[50];
char aux[50];

    printf("entre com o nome:");
    gets(nome);
    
    printf("entre com o sobrenome:");
    gets(sobrenome);
    strcpy(aux, nome);
    strcpy(nome,sobrenome);
    printf("(nome: %s, sobrenome: %s)\n", nome, sobrenome);
    strcpy(sobrenome,aux);
    printf("(nome: %s, sobrenome: %s)\n", nome, aux);
    

return 0;

}