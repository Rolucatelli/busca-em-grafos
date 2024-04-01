#include <stdio.h>
#include <stdlib.h>
#include "../../hdr/labirinto.h"
#include "../../hdr/estruturas/node.h"

void buscarLista(no *ptlista, int x, no **ant, no **pont)
{
    *pont = NULL;
    *ant = ptlista;
    no *ptr = ptlista->prox;

    while (ptr != NULL)
    {
        if (ptr->chave < x)
        {
            *ant = ptr;
            ptr = ptr->prox;
        }
        else
        {
            if (ptr->chave == x)
            {
                *pont = ptr;
            }
            ptr = NULL; // break;
        }
    }
}

no *inserirLista(no *ptlista, no *novo_no)
{
    no *ant, *pont;
    buscarLista(ptlista, novo_no->chave, &ant, &pont);
    if (pont == NULL)
    {
        novo_no->prox = ant->prox;
        ant->prox = novo_no;
        return NULL;
    }
    return pont;
}

no *removerLista(no *ptlista, int x)
{
    no *ant, *pont;
    buscarLista(ptlista, x, &ant, &pont);
    if (pont != NULL)
    {
        ant->prox = pont->prox;
        return pont;
    }
    else
    {
        return NULL;
    }
}

no *buscarPai(no *ptlista, Coordenada filho, int mov)
{
    Coordenada movsPossiveis[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    mov = (mov < 2) ? mov + 2 : mov - 2;
    Coordenada pai = filho;
    pai.x += movsPossiveis[mov].x;
    pai.y += movsPossiveis[mov].y;

    while (ptlista->prox != NULL && !estaNaSaida(ptlista->prox->Coordenada, pai))
    {
        ptlista = ptlista->prox;
    }
    if (ptlista->prox != NULL)
    {
        return ptlista->prox;
    }
    else
    {
        return NULL;
    }
}

void desalocarLista(no *ptlista)
{
    no *tmp;
    while (ptlista != NULL)
    {
        tmp = ptlista;
        ptlista = ptlista->prox;
        free(tmp);
    }
}