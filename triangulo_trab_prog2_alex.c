#include<stdio.h>
int triangulo_valido(int,int,int);
int main()
{
int t1,t2,t3,resultado;
printf("Informe um valor para o lado 1:");
scanf("%d",&t1);4
printf("Informe um valor para o lado 2:");
scanf("%d",&t2);
printf("Informe um valor para o lado 3:");
scanf("%d",&t3);
resultado=triangulo_valido(t1,t2,t3);
if (resultado==1)
{
    printf("Triangulo valido");
}
else
{
    printf("Triangulo invalido");
}
return 0;
}
int triangulo_valido(int ld1, int ld2, int ld3)
{
int mod1, mod2, mod3;
mod1=fabs(ld2-ld3);
mod2=fabs(ld1-ld3);
mod3=fabs(ld1-ld2);
if(ld1>mod1 && ld1 < (ld2+ld3) && ld2 > mod2 && ld2 < (ld1+ld3) && mod3 < ld3 && ld3 < ld1 + ld2)
    return 1;
}
