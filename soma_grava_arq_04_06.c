#include <stdio.h>

void tabela(FILE *arq)
{
	int i,  j;
    for (i=0;i<=9;i++)
    {
        for (j=0;j<=9;j++)
        {
            fprintf(arq, "%2d + %2d = %3d",j ,i ,i+j );
            fprintf(arq, "\n");
        }
    }
}
int main()

{   
    FILE *arq;
    arq=fopen("tabelasoma.txt","w");
    if (arq == NULL)
    {
        fprintf(arq, "Erro ao abrir o arquivo.");
        return 1;
    }
    else
    {
    fprintf(arq, "Tabuada de Soma\n");
    fprintf(arq, "---------------------------------------------");
    tabela(arq);
    fprintf(arq, "---------------------------------------------");
    fclose(arq);
    return 0;
}
    
}