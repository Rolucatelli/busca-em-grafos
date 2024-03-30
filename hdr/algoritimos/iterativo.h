#ifndef BUSCAITERATIVA_H
#define BUSCAITERATIVA_H
#include "../labirinto.h"

/*
    Função que busca um caminho entre a entrada e a saida de um labirinto
    utilizando o algoritmo de busca iterativa

    @param labirinto matriz de caracteres representando o labirinto
    

*/
void buscaIterativa(char **labirinto);

void andar(Cordenada *player, int mov);

int estaNaSaida(Cordenada player, Cordenada saida);

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