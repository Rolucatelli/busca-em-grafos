#ifndef BUSCALARGURA_H
#define BUSCALARGURA_H
#include "../labirinto.h"

/*
    Função que busca um caminho entre a entrada e a saida de um labirinto
    utilizando o algoritmo de busca em largura

    @param labirinto matriz de caracteres representando o labirinto

    @return vetor de cordenadas representando o caminho encontrado

*/
Cordenada *buscaLargura(char **labirinto);

#endif // BUSCALARGURA_H