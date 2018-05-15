/*
1.1-Usando struct, crie uma estrutura chamado reg_ponto contento duas coordenadas (x,y) de um plano 2d
1.2-Faça uma função para ler esses 2 pontos passados pelo teclado
1.3-Faça uma função para receber um ponto e imprimir as coordenadas
1.4-Faça uma função para calcular a distância entre 2 pontos
1.5-Faça um programa para testar essas funções
referência: http://mundoeducacao.bol.uol.com.br/matematica/distancia-entre-dois-pontos.htm
*/
#include <stdio.h>
#include <math.h>
struct reg_ponto
{
float x;
float y;
    
};
void lerPonto(struct reg_ponto *p)
{
    printf("\ninforme a cordenada de X:");
        scanf("%f",&p->x);
    printf("\ninforme a cordenada de Y:");
        scanf("%f",&p->y);
}
void imprimePonto(struct reg_ponto p)
{
    printf("\ncoordenadas (x,y) = %.2f e %.2f", p.x, p.y);
}
float calcDistancia(struct reg_ponto pA, struct reg_ponto pB)
{
float d;
    d=sqrt(pow((pB.x-pA.x),2)+pow((pB.y-pA.y),2));
return d;
    
}
int main()
{
struct reg_ponto ponto1;
struct reg_ponto ponto2;
float dist;
lerPonto(&ponto1);
lerPonto(&ponto2);
dist=calcDistancia(ponto1,ponto2);
printf("Distancia entre os 2 pontos = %.2f", dist);
imprimePonto(ponto1);
imprimePonto(ponto2);
    
}
