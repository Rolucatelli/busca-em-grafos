#ifndef LISTA_H
#define LISTA_H

#include "../labirinto.h"
#include "node.h"

/*
 * Função que busca um nó na lista.
 *
 * @param ptlista: ponteiro para a lista.
 * @param x: valor a ser buscado.
 * @param ant: ponteiro para o nó anterior ao nó buscado.
 * @param pont: ponteiro para o nó buscado.
 *
 * @return void.
 */
void buscarLista(no *ptlista, int x, no **ant, no **pont);

/*
 * Função que insere um nó na lista.
 *
 * @param ptlista: ponteiro para a lista.
 * @param novo_no: nó a ser inserido na lista.
 *
 * @return no *: ponteiro para o início da lista.
 */
no *inserirLista(no *ptlista, no *novo_no);

/*
 * Função que remove um nó da lista.
 *
 * @param ptlista: ponteiro para a lista.
 * @param x: valor a ser removido.
 *
 * @return no *: ponteiro para o início da lista.
 */
no *removerLista(no *ptlista, int x);


/*
 * Função que retorna o nó pai de um nó filho.
 *
 * @param ptlista: ponteiro para a lista.
 * @param filho: coordenada do nó filho.
 * @param mov: movimento feito para chegar no nó filho.
 *
 * @return no *: ponteiro para o nó pai.
 */
no *buscarPai(no *ptlista, Coordenada filho, int mov);

/*
 * Função que desaloca a lista.
 *
 * @param ptlista: ponteiro para a lista.
 *
 * @return void.
 */
void desalocarLista(no *ptlista);

#endif // LISTA_H