#include <stdio.h>
#include <string.h>
int main()
{
    
char nome[50];
char sobrenome[50];
char nomecompleto[50];


    printf("entre com o nome:");
    gets(nome);
    
    printf("entre com o sobrenome:");
    gets(sobrenome);
    strcat(nome, sobrenome);

    printf("(nome: %s )\n", nomecompleto);

    

return 0;

}