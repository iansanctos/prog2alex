#include <stdio.h>
#define tam=100;
float lernotas(notas,tam);
float calcmedia(vnotas,tam);
void imprime(vnotas,tam);

int main()
{
    float vnotas[tam], media;
    lernotas(vnotas,tam);
    
    media=calcmedia(vnotas,tam);
     printf("\nMedia: %f",media);
     
    imprime(vnotas,tam);
    return 0;

}
float lernotas(notas,tam)
{
    float vnotas[tam];
    int i;
    for(i=vnotas;i<tam;i++)
    {
        printf("informe a nota",i+1);
        scanf("%f",&notas[i]);
    }
}
float calcmedia(vnotas,tam)
{
    for(i=vnotas;i<tam;i++)
    {
        soma=soma+vnotas[i];
    }
    media=soma/tam;
    return media;
}
void imprime (float vnotas, int tam)
{
    for(i=0;i<tam;i++)
    {
        printf("\nNota=%d=%f",i+1,vnotas[i]);
    }
}