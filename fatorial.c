#include <stdio.h>
int fatorial(int num);
int main()
{  
    int num, j;
    printf("informe um numero:");
    scanf("%i", &num);
    j=fatorial(num);
    printf("Sequencia fatorial:%i", j);
    return 0;
}

int fatorial(int num)
{
    int i;
  for(i=1;num>=1;num--)
  i=i*num;
  return i;
    
}