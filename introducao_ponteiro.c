#include<stdio.h>

int main()
{
   int a, b;
   int *p; //cria um ponteiro para int
   
    printf("entre com o valor de a:");
        scanf("%d",&a);
    printf("entre com o valor de b:");
        scanf("%d",&b);
//1.1 O programa deverá exibir o endereço de memória alocado para as duas variáveis anteriores
    printf("\n O endereço da variavel a= %d", a);
    printf("\n O endereço da variavel b= %d", b);
//1.2 Usando ponteiro, altere o valor de a para o dobro do valor atual, exiba novamente o valor após alterado
    printf("\n valor de a (antes)= %d", a);  
   p=&a;
   *p=*p + 10;
    printf("\n valor de a (depois)= %d", a);  
    printf("\n O valor de p=%d",p);
    
}
