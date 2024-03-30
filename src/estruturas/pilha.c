#include <stdio.h>
#include <stdlib.h>
#include "../../hdr/labirinto.h"
#include "../../hdr/estruturas/node.h"


void inserirPilha(no **topo, no *novoNo)
{
    novoNo->prox = *topo;
    *topo = novoNo;
}

no *removerPilha(no **topo)
{
    if (*topo != NULL)
    {
        no *retorno = *topo;
        *topo = retorno->prox;
        return retorno;
    }
    return NULL;
}

void invertePilha(no **topo){
    no* tmp = NULL;
    while (topo != NULL)
    {
        inserirPilha(&tmp, removerPilha(topo));
    }
    *topo = tmp;
}