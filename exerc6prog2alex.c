/*6-Crie uma função unilasalle_resultado(). Esta função deverá receber 3 parâmetros de entrada av1, av2 e av3 e 
retornar 0 ou 1:  (1-passou, 0-não passou).
6.1- Faça um programa para testar sua função.

protótipo:
int unilasalle_resultado (float av1, float av2, float av3);*/
#include <stdio.h>
float nf()
{
    float av1 ,av2,av3,media;
    printf("informe as notas da sua av1, av2 e av3:");
    scanf("%f%f%f", &av1,&av2,&av3);
    media= (av1+av2+av3)/3;
    if (media<6)
    {
        printf("0 - não passou");
    }
    else
    printf("1 - voce passou");
}
int main()
{
float media;
media = nf();


    
}

