#ifndef LABIRINTO_H
#define LABIRINTO_H

#include <stdio.h>
#include <stdlib.h>

/*
 * Estrutura que representa uma Coordenada no labirinto
 * x: Coordenada x
 * y: Coordenada y
 */
typedef struct Coordenada
{
    int x;
    int y;
} Coordenada;



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
 * @return Uma Coordenada representando as coordenadas da entrada.
 */
Coordenada encontrarEntrada(char **labirinto);

/**
 * Função que encontrar a saída do labirinto.
 *
 * @param labirinto A matriz 2D representando o labirinto.
 * 
 * @return Uma Coordenada representando as coordenadas da saída.
 */
Coordenada encontrarSaida(char **labirinto);

/**
 * Função que imprime o caminho percorrido pelo jogador.
 *
 * @param caminho Um vetor de Coordenadas representando o caminho percorrido.
 * @param movsFeitos O número de movimentos feitos.
 */
void imprimirCaminho(Coordenada *caminho, int movsFeitos);

/**
 * Função que imprime o labirinto.
 *
 * @param labirinto A matriz 2D representando o labirinto.
 */
void imprimirLabirinto(char **labirinto);

/*
    * Função que move o jogador em uma determinada direção
    * 
    * @param labirinto matriz de caracteres representando o labirinto
    * @param player Coordenada do jogador
    * @param mov direção que o jogador deve se mover
    * 
    * @return Coordenada do jogador após o movimento 
*/
Coordenada andar(char **labirinto, Coordenada player, int mov);

/*
    * Função que verifica se o jogador está na saída
    * 
    * @param player Coordenada do jogador
    * @param saida Coordenada da saída
    * 
    * @return 1 se o jogador estiver na saída, 0 se não estiver
*/
int estaNaSaida(Coordenada player, Coordenada saida);

/*
    * Função que verifica se um movimento é válido
    * 
    * @param labirinto matriz de caracteres representando o labirinto
    * @param x Coordenada x do movimento
    * @param y Coordenada y do movimento
    * 
    * @return 1 se o movimento for válido, 0 se não for válido
*/
int movValido(char **labirinto, int x, int y);

/*
    * Função que verifica se é possível andar em uma determinada direção
    * 
    * @param labirinto matriz de caracteres representando o labirinto
    * @param player Coordenada do jogador
    * 
    * @return 1 se for possível andar, 0 se não for possível
*/
int daPraAndar(char **labirinto, Coordenada player, int mov);

#endif // LABIRINTO_H