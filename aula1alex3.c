#include<stdio.h>
int soma()
{
    int num1,num2,total;
    printf("informe o primeiro numero:");
    scanf("%d", &num1);
    printf("informe o segundo numero:");
    scanf("%d", &num2);
    total=num1+num2;
    printf("A soma de %d e %d = %d", num1, num2, total);

}
int main()
{
    int resp;
    resp=soma();
    return 0;
}