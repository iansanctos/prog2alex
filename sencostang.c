#include <stdio.h>
float seno(float angulo);
float cosseno(float angulo);
 float tangente(float angulo);
int main()
{  
   float ang, j;
      printf("informe o angulo que deseja descobrir o seno, cosceno e tangente");
      scanf("%f",&ang);
         tangente(&ang);
      printf("%f\n%f\n%f", seno(ang),cosseno(ang),tangente(ang));
   return 0;
}
float tangente (float *angulo) 
{
   float s, c;
   s = seno(*angulo);
   c = cosseno(*angulo);
   return s/c;
}
