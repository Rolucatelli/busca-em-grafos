#include <stdio.h>
#include <stdlib.h>
#include "../../hdr/labirinto.h"


Cordenada *buscaIterativa(char **labirinto)
{
    Cordenada entrada = encontrarEntrada(labirinto);
    Cordenada saida = encontrarSaida(labirinto);
    Cordenada *caminho = (Cordenada *)malloc(100 * sizeof(Cordenada));

    // Implemente aqui a busca iterativa

    // Esse return é só para não dar erro de compilação
    return NULL;
}
