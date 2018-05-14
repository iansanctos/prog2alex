#include <stdio.h>
int main() 
{
    int vet [10];
    int *p=&vet;
    
    printf("\nendereco de vet = %d", &vet);
    printf("\nendereco de vet[0] = %d", &vet[0]);
    printf("\nendereco de vet[1] = %d", &vet[9]);
    
    \\ e como fariam sem a variavel i??
    
    while(p<=&vet[9])
    {
        *p++=8;

    }
    for(i=0;i<10;i++)
    {
        printf("\n vet[%d]=%d", i, vet[i]);
        
    }
    return 0;
}