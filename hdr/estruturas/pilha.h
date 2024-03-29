#ifndef PILHA_H
#define PILHA_H

#include "../labirinto.h"
#include "node.h"

/**
 * Função que insere um nó no topo da pilha.
 *
 * @param topo: ponteiro para o topo da pilha.
 * @param novoNo: nó a ser inserido.
 */
void inserirPilha(no **topo, no *novoNo);

/**
 * Função que remove um nó do topo da pilha.
 *
 * @param topo: ponteiro para o topo da pilha.
 *
 * @return nó removido.
 */
no *removerPilha(no **topo);

#endif // PILHA_H
