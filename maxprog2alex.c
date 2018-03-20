#include <stdio.h>
 float max(float n1, float n2)
 {
    if(n1>n2){

        return n1;
    }
    else
    {
        return n2;
    }
 }
 
 int main()
 {
      float n1;
     float n2;
     printf("informe 2 numeros:");
     scanf("\n%f\n%f",&n1, &n2);
     printf("informe 2 numeros:");
     scanf("\n%f\n%f",&n1, &n2);
     float x =max(n1,n2);
     printf("%f",x);
     return 0;
     
     
 }
 /*COMO FAZER PILHA 
 main() > 
 a=10 > 
 b=20 > 
 *result >< 
 max() > 
 a=10 > 
 *b=20 >< 
 b vai para result()*/