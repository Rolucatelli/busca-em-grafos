#include <stdio.h>
#include <stdlib.h>

FILE *lerArquivo(char *nomeArquivo){
    FILE *arquivo = fopen(nomeArquivo, "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        exit(1);
    }
    return arquivo;

}