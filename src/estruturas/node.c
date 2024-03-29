#include <stdio.h>
#include <stdlib.h>
#include "../../hdr/labirinto.h"

typedef struct no_
{
    int chave;
    Cordenada cordenada;
    struct no_ *prox;
} no;

no *alocarNo(int chave, Cordenada cordenada)
{
    no *retorno = malloc(sizeof(no));
    retorno->chave = chave;
    retorno->cordenada = cordenada;
    retorno->prox = NULL;
    return retorno;
}


