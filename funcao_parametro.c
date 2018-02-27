#include <stdio.h>
// contagem regressiva com parametro.
void contagem_regressiva(int ini int fin)
// informa a variavel do parametro dentro do ().
{
    int i;
    for(i=ini;i>0;i--)
        printf("\n%d",i);
        printf("\nBOM!!!");
}
int main()
{
    contagem_regressiva(10);
    contagem_regressiva(5);
    contagem_regressiva(8);
    // informa o parametro dentro do ().
 return 0;
}