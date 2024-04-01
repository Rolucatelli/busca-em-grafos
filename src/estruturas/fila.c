#include <stdio.h>
#include <stdlib.h>
#include "../../hdr/labirinto.h"
#include "../../hdr/estruturas/node.h"

void inserirFila(no **f, no **r, no *novoNo)
{
    if (*r == NULL)
    {
        *f = *r = novoNo;
    }
    else
    {
        (*r)->prox = novoNo;
        *r = novoNo;
    }
}

no *removerFila(no **f, no **r)
{
    no *retorno = NULL;
    if (*f != NULL)
    {
        retorno = *f;
        *f = retorno->prox;
        if (*f == NULL)
        {
            *r = *f;
        }
    }
    return retorno;
}

void desalocarFila(no **f)
{
    no *temp;
    while (*f != NULL)
    {
        temp = *f;
        *f = (*f)->prox;
        free(temp);
    }
}
