#include <stdio.h>
struct reg_hora
{
  int hora;
  int min;
  int seg;
    
};
int main()
{
    struct reg_hora hora;
    int novo_min;
         printf("\nEntre com hora:");
    scanf("%d", &hora.hora);
        printf("\nEntre com minuto:");
    scanf("%d", &hora.min);
        printf("\nEntre com segundo:");
    scanf("%d", &hora.seg);
    
    printf("\nEntre com minutos a adicionar:");
    scanf("%d", &novo_min);
    
    hora.min += novo_min;
    
    printf("\nNova Hora:%d:%d:%d",hora.hora,hora.min,hora.seg);
    return 0;
    
}