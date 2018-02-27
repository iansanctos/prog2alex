#include <stdio.h>
// contagem regressiva com parametro.
void contagem_regressiva(int ini, int fim)
// informa a variavel do parametro dentro do ().
{
    int i;
    for(i=ini;i>fim;i--)
        printf("\n%d",i);
        printf("\nBOM!!!");
}

int main()
{
    contagem_regressiva(10, 8);

    // informa o parametro dentro do ().
 return 0;
}