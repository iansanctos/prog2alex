#include <stdio.h>

int main()
{
    char linha[100];
    FILE *arq;
    printf("\nEntre com a primeira linha do arquivo:");
    gets(linha);
    // abrir arquivo para gravação
    arq = fopen("meuarq.txt","w");
    if(arq == NULL)
    {
        printf("\nerro ao abrir meuarq.txt");
        exit(-1);
    }
    else
    { //gravar 1 linha no arquivo
        fprintf(arq,"linha 1: %s",linha);
                          
    }
    //fecha o arquivo
    fclose(arq);
    return 0;
}