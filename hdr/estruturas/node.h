#ifndef NODE_H
#define NODE_H

#include "../labirinto.h"

/*
 * Estrutura que representa um nó
 *
 * @field chave: valor armazenado no nó.
 * @field cordenada: cordenada armazenada no nó.
 * @field mov: movimento feito para chegar no nó.
 * @field prox: ponteiro para o próximo nó.
 *
 */
typedef struct no_
{
    int chave;
    Cordenada cordenada;
    int mov;
    struct no_ *prox;
} no;

/*
 * Aloca um novo nó e inicializa seus campos.
 *
 * @param chave: valor a ser armazenado no nó.
 * @param cordenada: cordenada a ser armazenada no nó.
 *
 * @return: ponteiro para o nó alocado.
 */
no *alocarNo(int chave, Cordenada cordenada, int mov);

#endif // NODE_H