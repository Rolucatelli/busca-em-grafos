#ifndef BUSCAITERATIVA_H
#define BUSCAITERATIVA_H
#include "../labirinto.h"

/*
    Função que busca um caminho entre a entrada e a saida de um labirinto
    utilizando o algoritmo de busca iterativa

    @param labirinto matriz de caracteres representando o labirinto
    

*/
void buscaIterativa(char **labirinto);

/*
    * Função que move o jogador em uma determinada direção
    * 
    * @param player cordenada do jogador
    * @param mov direção que o jogador deve se mover
*/
void andar(Cordenada *player, int mov);

/*
    * Função que verifica se o jogador está na saída
    * 
    * @param player cordenada do jogador
    * @param saida cordenada da saída
    * 
    * @return 1 se o jogador estiver na saída, 0 se não estiver
*/
int estaNaSaida(Cordenada player, Cordenada saida);

/*
    * Função que verifica se um movimento é válido
    * 
    * @param labirinto matriz de caracteres representando o labirinto
    * @param x cordenada x do movimento
    * @param y cordenada y do movimento
    * 
    * @return 1 se o movimento for válido, 0 se não for válido
*/
int movValido(char **labirinto, int x, int y);

/*
    * Função que verifica se é possível andar em uma determinada direção
    * 
    * @param labirinto matriz de caracteres representando o labirinto
    * @param player cordenada do jogador
    * 
    * @return 1 se for possível andar, 0 se não for possível
*/
int daPraAndar(char **labirinto, Cordenada player, int mov);

#endif // BUSCAITERATIVA_H