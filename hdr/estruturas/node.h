#ifndef NODE_H
#define NODE_H

#include "../labirinto.h"

/*
    * Estrutura que representa um nó de uma lista encadeada.
    * chave: valor armazenado no nó.
    * cordenada: cordenada armazenada no nó.
    * prox: ponteiro para o próximo nó da lista.
*/
typedef struct no_
{
    int chave;
    Cordenada cordenada;
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
no *alocarNo(int chave, Cordenada cordenada);

#endif // NODE_H