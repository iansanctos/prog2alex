#include <stdio.h>
//LER ARQUIVO TEXTO LINHA A LINHA

int main()
{
    char linha[100];
    char nome[100];
    char ch;
        FILE *arq;
        int fgetc(FILE *arq);
            printf("\nEntre com um arquivo:");
                fgetc(nome);
// abrir arquivo para gravação
        arq = fopen("meuarq.txt","r");
    if(arq == NULL)
    {
        printf("\nerro ao abrir %s",nome);
        exit(-1);
    }
    else
    { 
//gravar 1 linha no arquivo
        while((ch = fgetc(arq))!=EOF)
        {
            printf("%s",linha);
        }
    }
//fecha o arquivo
fclose(arq);
return 0;
}