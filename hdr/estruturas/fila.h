#ifndef FILA_H
#define FILA_H

#include "../labirinto.h"
#include "node.h"

/*
 * Função que insere um nó na fila.
 * f: quem tá a mais tempo na fila
 * r: quem acabou de chegar na fila
 *
 * @param f: ponteiro para o comeco da fila.
 * @param r: ponteiro para o final da fila.
 * @param novoNo: nó a ser inserido na fila.
 */

void inserirFila(no **f, no **r, no *novoNo);

/*
 * Função que remove um nó da fila.
 * f: quem tá a mais tempo na fila
 * r: quem acabou de chegar na fila
 *
 * @param f: ponteiro para o comeco da fila.
 * @param r: ponteiro para o final da fila.
 *
 * @return: nó removido da fila.
 */
no *removerFila(no **f, no **r);

/*
 * Função que desaloca todos os nós da fila.
 *
 * @param f: ponteiro para o comeco da fila.
 */
void desalocarFila(no **f);

#endif // FILA_H