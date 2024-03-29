#ifndef BUSCAPROFUNDIDADE_H
#define BUSCAPROFUNDIDADE_H
#include "../labirinto.h"

/*
    Função que busca um caminho entre a entrada e a saida de um labirinto
    utilizando o algoritmo de busca em profundidade

    @param labirinto matriz de caracteres representando o labirinto
    
    @return vetor de cordenadas representando o caminho encontrado

*/
Cordenada *buscaProdundidade(char **labirinto);

#endif // BUSCAPROFUNDIDADE_H