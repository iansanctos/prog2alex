//MANIPULACAO DE STRING
/*1-Qual é a biblioteca de manipulação de strings da linguagem C ?
#include <string.h>

2-Qual é a função para “comparar” strings ?
strcpy(string_destino, string_origem);
Realiza a cópia do conteúdo de uma variável a outra.

3-Qual é a função para “concatenar” strings ?
strcat(string_destino, string_origem);

Realiza a concatenação do conteúdo de uma variável a outra.
Ambas devem ser strings.

4-Qual é a função para descobrir o “tamanho” de uma string?
strlen(vetor)

5-Faça um programa em C que leia 2 nomes e diga:
5.1-Se as strings são iguais ou diferentes
5.2-Imprima os 2 nomes em ordem alfabética
5.3-Imprima o tamanho de cada string
5.4-Gere uma 3a. variável pela concatenação das 2 strings nome1 e nome2
*/
//strcmp usado para comparar strings, não ignora maiuscula e minuscula (==1) (==0) (==-1)
//strcasecmp usado para comparar strings, ignora maiuscula e minuscula (==1) (==0)(==-1)
//strcpy (onde sera copiado, oque sera copiado)
//strlen le o tamanho do vetor
//strcat junta o 1 vetor com o segundo concatena
//gets(vetor) pega uma sequencia de caracteres inclusive espaço, so para no enter.
//setbuf(stdin, NULL) o programa vai simplesmente colocar o enter (\n) organiza.
#include <stdio.h>
#include <string.h>
int main ()
{
    char nome1[15], nome2[15];
    int tam1, tam2;
        printf("Informe 1 nome:\n");
        scanf("%s",nome1);   //SE INFORMAR DO PORQUE NAO TEM O & COMERCIAL
            tam1=strlen(nome1);
        printf("informe o 2 nome:\n");// ESTA FALTANDO FAZER EM ORDEM ALFABETICA
        scanf("%s",nome2);
            tam2=strlen(nome2);
    if (strcasecmp( nome1,nome2)==0) // ENTENDER O PORQUE DO ==0 SABENDO QUE TEM 3 FUNCOES MAIOR IGUAL MENOR
        printf("São Iguais");
    else
        printf("São Diferentes\n");
    
        printf("O tamanho da primeira palavra é: %d\n", tam1);
        printf("O tamanho da segunda palavra é: %d\n", tam2);
    
        strcat(nome1,nome2);//PERGUNTAR DA VARIAVEL DO PRINTF CONCATENADA DANDO ERRO
        printf("A palavra concatenada é:%s", nome1);
        system("pause");
    return 0;
    
}