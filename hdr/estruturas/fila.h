#ifndef FILA_H
#define FILA_H

#include "../labirinto.h"
#include "node.h"

/*
 * Função que insere um nó na fila.
 *
 * @param topo: ponteiro para o topo da fila.
 * @param novoNo: nó a ser inserido na fila.
 *
 * @return void.
 */
void inserirFila(no **topo, no *novoNo);

/*
* Função que remove um nó da fila.
*
* @param topo: ponteiro para o topo da fila.
*
* @return no *: nó removido da fila.
*/
no *removerFila(no **topo);

#endif // FILA_H