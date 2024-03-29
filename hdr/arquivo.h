#ifndef ARQUIVO_H
#define ARQUIVO_H

#include <stdio.h>
#include <stdlib.h>

/*
 * Função que lê um arquivo e retorna um ponteiro para o arquivo
 *
 * @param nomeArquivo: nome do arquivo a ser lido
 * 
 * @return ponteiro para o arquivo
 */
FILE *lerArquivo(char *nomeArquivo);

#endif // ARQUIVO_H