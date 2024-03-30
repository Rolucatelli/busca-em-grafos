/*
    +-------------------------------------------------------------+
    | UNIFAL – Universidade Federal de Alfenas.                   |
    | BACHARELADO EM CIENCIA DA COMPUTACAO.                       |
    | Trabalho..: Busca em Grafos                                 |
    | Disciplina: Algoritmos e Estrutura de Dados III             |
    | Professor.: Iago Augusto de Carvalho                        |
    | Aluno(s)..: Rodrigo Luís Gasparino Lucatelli                |
    |             José Olavo Monteiro Travassos Pereira da Silva  |
    |             João Felipe Martins Santana                     |
    |             Leonardo Bonardi Marques Silva                  |
    |                                                             |
    |                                                             |
    | Data......: 02/04/2024                                      |
    +-------------------------------------------------------------+
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../hdr/labirinto.h"
#include "../hdr/estruturas/pilha.h"
#include "../hdr/algoritimos/buscaLargura.h"
#include "../hdr/algoritimos/buscaProfundidade.h"
#include "../hdr/algoritimos/iterativo.h"

int main()
{
    char nomeArquivo[50];
    int opcao;
    Cordenada *caminho = NULL;

    printf("Coloque o arquivo do labirinto na pasta 'labirintos' e digite o nome do arquivo e sua extensão (não precisa incluir o caminho):\n");
    scanf("%s", nomeArquivo);

    FILE *arquivo = fopen(nomeArquivo, "r");
    while (arquivo == NULL)
    {
        printf("Arquivo não encontrado, tente novamente:\n");
        scanf("%s", nomeArquivo);
        arquivo = fopen(nomeArquivo, "r");
    }

    char **labirinto = lerLabirinto(arquivo);
    fclose(arquivo);
    system("clear");
    do
    {
        printf("Qual a estratégia que deseja utilizar para encontrar a saída do labirinto?\n");
        printf("0 - *cancelar* \n");
        printf("1 - Busca em largura\n");
        printf("2 - Busca em profundidade\n");
        printf("3 - Método iterativo\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0:
            break;
        case 1:
            printf("Busca em largura\n");
            caminho = buscaLargura(labirinto);

            break;

        case 2:
            printf("Busca em profundidade\n");
            caminho = buscaProdundidade(labirinto);

            break;

        case 3:
            system("clear");
            buscaIterativa(labirinto);
            opcao = 0;
            break;

        case 4:
            imprimirLabirinto(labirinto);
            break;
        default:
            system("clear");
            printf("Opção inválida\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}