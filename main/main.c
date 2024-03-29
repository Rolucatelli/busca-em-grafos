#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Modelo para fazer o include:      #include "../hdr/arquivo.h"
#include "../hdr/arquivo.h"
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

    FILE *arquivo = lerArquivo(nomeArquivo);
    char **labirinto = lerLabirinto(arquivo);
    fclose(arquivo);

    printf("Qual a estratégia que deseja utilizar para encontrar a saída do labirinto?\n");
    printf("1 - Busca em largura\n");
    printf("2 - Busca em profundidade\n");
    printf("3 - Método iterativo\n");

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Busca em largura\n");
        caminho = buscaLargura(labirinto);

        break;

    case 2:
        printf("Busca em profundidade\n");
        caminho = buscaProdundidade(labirinto);

        break;

    case 3:
        printf("Método iterativo\n");
        caminho = buscaIterativa(labirinto);

        break;
    
    default:
        break;
    }
    return 0;
}