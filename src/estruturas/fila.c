#include <stdio.h>
#include <stdlib.h>
#include "../../hdr/labirinto.h"
#include "../../hdr/estruturas/node.h"

/*
    f: quem tá a mais tempo na fila
    r: quem acabou de chegar na fila
*/
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

