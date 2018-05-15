#include <stdio.h>
struct reg_hora
{
  int hora;
  int min;
  int seg;
    
};

void imprimeHora(struct reg_hora p)
{
    printf("\n%d:%d:%d",p.hora,p.min,p.seg);
}

void lerHora(struct reg_hora *p)
{
       printf("\nEntre com hora:");
    scanf("%d", &p->hora); //OPCAO DE POR COM A SETA.
        printf("\nEntre com minuto:");
    scanf("%d", &(*p).min);//OU POR O * ASTERISTICO.
        printf("\nEntre com segundo:");
    scanf("%d", &(*p).seg);
}
void adicionarMin(struct reg_hora *p, int min)
{
    int hh = min/60;
    int mm= min-(hh*60);
    
    p->hora += hh;
    p->min += mm;
}
int main()
{
    struct reg_hora hora;
    int novo_min;
      lerHora(&hora);
    
    printf("\nEntre com minutos a adicionar:");
    scanf("%d", &novo_min);
    adicionarMin(&hora, novo_min);
    imprimeHora(hora);
    return 0;
    
}