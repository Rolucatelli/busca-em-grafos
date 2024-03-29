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

// void busca1(no *ptlista, int x, no **ant, no **pont){
//     *ant = ptlista;
//     *pont = NULL;

//     while (*pont == NULL)
//     {
//         if ((*ant)->chave == x)
//         {
//             *pont = *ant;
//             break;
//         }else{
//             *ant = (*ant)->prox;
//         }

//     }

// }

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
