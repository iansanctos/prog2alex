#include <stdio.h>
void troca (int *n1, int *n2);
int main()
{   int num1,num2;
    printf("informe dois numeros");
    scanf("%d%d", &num1,&num2);
    troca(&num1, &num2);
    printf("%d\n%d",num1, num2);
    return 0;
}
void troca (int *n1, int *n2)
{  int j;
    j=*n1;
    *n1=*n2;
    *n2=j;
    
}
/*

aux             3A
*n2 <---------|
*n1 <------|  |
troca()    |  |
    b <----|--| 2A
    a <----|    1A
main()*/ 