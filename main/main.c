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
    |             Vinícius Henrique Piotto Boiago                 |
    |             Pedro Henrique de Almeida                       |
    | Data......: 02/04/2024                                      |
    +-------------------------------------------------------------+
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../hdr/algoritimos/iterativo.h"
#include "../hdr/algoritimos/buscaLargura.h"

int main()
{
    char nomeArquivo[50];
    int opcao;

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

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0:
            break;
        case 1:
            system("clear");
            buscaLargura(labirinto);
            opcao = 0;
            break;
        case 2:
            system("clear");
            buscaIterativa(labirinto);
            opcao = 0;
            break;
        default:
            system("clear");
            printf("Opção inválida\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}