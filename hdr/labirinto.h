#ifndef LABIRINTO_H
#define LABIRINTO_H

#include <stdio.h>
#include <stdlib.h>

/*
 * Estrutura que representa uma cordenada no labirinto
 * x: cordenada x
 * y: cordenada y
 */
typedef struct cordenada
{
    int x;
    int y;
} Cordenada;


/**
 * Função que lê um labirinto de um arquivo e retorna uma matriz 2D representando o labirinto.
 *
 * @param arquivo O arquivo do qual o labirinto é lido.
 * 
 * @return Uma matriz 2D representando o labirinto.
 */
// char **lerLabirinto(FILE *arquivo);

/**
 * Função que aloca uma matriz 2D para representar um labirinto.
 * 
 * @return Uma matriz 2D representando o labirinto.
 */
char **alocarLabirinto();

/**
 * Função que desaloca uma matriz 2D representando um labirinto.
 *
 * @param labirinto A matriz 2D representando o labirinto.
 */
void desalocarLabirinto(char **labirinto);

/**
 * Função que lê um labirinto de um arquivo e retorna uma matriz 2D representando o labirinto.
 *
 * @param arquivo O arquivo do qual o labirinto é lido.
 * 
 * @return Uma matriz 2D representando o labirinto.
 */
char **lerLabirinto(FILE *arquivo);

/**
 * Função que encontrar a entrada do labirinto.
 *
 * @param labirinto A matriz 2D representando o labirinto.
 * 
 * @return Uma Cordenada representando as coordenadas da entrada.
 */
Cordenada encontrarEntrada(char **labirinto);

/**
 * Função que encontrar a saída do labirinto.
 *
 * @param labirinto A matriz 2D representando o labirinto.
 * 
 * @return Uma Cordenada representando as coordenadas da saída.
 */
Cordenada encontrarSaida(char **labirinto);

/**
 * Função que imprime o caminho percorrido pelo jogador.
 *
 * @param caminho Um vetor de cordenadas representando o caminho percorrido.
 * @param movsFeitos O número de movimentos feitos.
 */
void imprimirCaminho(Cordenada *caminho, int movsFeitos);

/**
 * Função que imprime o labirinto.
 *
 * @param labirinto A matriz 2D representando o labirinto.
 */
void imprimirLabirinto(char **labirinto);

#endif // LABIRINTO_H