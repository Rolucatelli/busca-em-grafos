#include <stdio.h>
#include <stdlib.h>
#include "../../hdr/labirinto.h"

typedef struct no_
{
    int chave;
    Cordenada cordenada;
    int mov;
    struct no_ *prox;
} no;

no *alocarNo(int chave, Cordenada cordenada, int mov)
{
    no *retorno = malloc(sizeof(no));
    retorno->chave = chave;
    retorno->cordenada = cordenada;
    retorno->mov = mov;
    retorno->prox = NULL;
    return retorno;
}


