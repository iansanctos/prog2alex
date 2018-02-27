#include <stdio.h>
int soma(int num1, int num2);
//caso queira que a funcao seja chamada a qualquer hora no programa precisa colocar um prototipo no inicio do prog.
int main()
{
    int res, num1, num2;
    printf("informe 2 numeros:");
    scanf("\n %d\n%d", &num1, &num2);
    res= soma(num1, num2);
    printf("\n soma=%d", res);
}
    int soma(int num1, int num2)
{
    return (num1+num2);
    // caso tenha mais de 1 variavel da funcao colocar entre parenteses
}