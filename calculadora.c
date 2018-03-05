#include <stdio.h>
int menu()
{
    int opc;
    printf("\n*************************");
    printf("\n******CALCULADORA*******");
    printf("\n*************************");
    printf("\n1- Soma");
    printf("\n2- Subtrair");
    printf("\n0- Sair");
    printf("\n*************************");
    do
    {
        printf("\n\n Escolha uma opção:");
        scanf("%d",&opc);
    }
    while(opc<0 || opc>2);
    return opc;
}
int soma()
{
    int num1,num2,total;
    printf("\n*************************");
    printf("\ninforme o primeiro numero:");
    scanf("%d", &num1);
    printf("\n*************************");
    printf("\ninforme o segundo numero:");
    scanf("%d", &num2);
    total=num1+num2;
    printf("\n*************************");
    printf("\nA soma de %d e %d = %d", num1, num2, total);
    printf("\n*************************");
    

}
int sub()
{
    int n1,n2,tot;
    printf("\n*************************");
    printf("\ninforme o primeiro numero:");
    scanf("%d", &n1);
    printf("\n*************************");
    printf("\ninforme o segundo numero:");
    scanf("%d", &n2);
    tot=n1-n2;
    printf("\n*************************");
    printf("\nA subtração de %d e %d = %d", n1, n2, tot);
    printf("\n*************************");
}
int sair()
{
    return 0;
}
int main()
{
    int m, resp,res,g;
    m=menu();
    g=sair();
    if(m==1)
    {
        resp=soma();
    }
    if(m==2)
    {
        res=sub();
    }
    if(m==0)
    {
        g=sair();
    }
    return 0;
}