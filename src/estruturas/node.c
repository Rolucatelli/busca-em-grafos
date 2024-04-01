#include <stdio.h>
#include <stdlib.h>
#include "../../hdr/labirinto.h"

typedef struct no_
{
    int chave;
    Coordenada Coordenada;
    int mov;
    struct no_ *prox;
} no;

no *alocarNo(int chave, Coordenada Coordenada, int mov)
{
    no *retorno = malloc(sizeof(no));
    retorno->chave = chave;
    retorno->Coordenada = Coordenada;
    retorno->mov = mov;
    retorno->prox = NULL;
    return retorno;
}
