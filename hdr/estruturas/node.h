#ifndef NODE_H
#define NODE_H

#include "../labirinto.h"

/*
 * Estrutura que representa um nó
 *
 * @field chave: valor armazenado no nó.
 * @field Coordenada: Coordenada armazenada no nó.
 * @field mov: movimento feito para chegar no nó.
 * @field prox: ponteiro para o próximo nó.
 *
 */
typedef struct no_
{
    int chave;
    Coordenada Coordenada;
    int mov;
    struct no_ *prox;
} no;

/*
 * Aloca um novo nó e inicializa seus campos.
 *
 * @param chave: valor a ser armazenado no nó.
 * @param Coordenada: Coordenada a ser armazenada no nó.
 * @param mov: movimento feito para chegar no nó.
 *
 * @return: ponteiro para o nó alocado.
 */
no *alocarNo(int chave, Coordenada Coordenada, int mov);

#endif // NODE_H