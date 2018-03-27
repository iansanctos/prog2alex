#include <stdio.h>
void incrementa_um (int *num)// asteristico recebe o espaco de memoria alocado.
{
    *num=*num+1;
}

int main()
{
    int x;
    x=10;
    printf("x=%d",x);
    incrementa_um(&x); // & comercial passa a referencia da variavel.
    printf("x=%d",x);
    return 0;
}