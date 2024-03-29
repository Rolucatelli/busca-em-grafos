#ifndef BUSCAITERATIVA_H
#define BUSCAITERATIVA_H
#include "../labirinto.h"

/*
    Função que busca um caminho entre a entrada e a saida de um labirinto
    utilizando o algoritmo de busca iterativa

    @param labirinto matriz de caracteres representando o labirinto
    
    @return vetor de cordenadas representando o caminho encontrado

*/
Cordenada *buscaIterativa(char **labirinto);

#endif // BUSCAITERATIVA_H