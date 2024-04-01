#include <stdio.h>
#include <stdlib.h>
#include "../../hdr/labirinto.h"
#include "../../hdr/estruturas/pilha.h"

void buscaIterativa(char **labirinto)
{
    Coordenada movsPossiveis[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    no *topo = NULL;
    Coordenada entrada = encontrarEntrada(labirinto);
    Coordenada saida = encontrarSaida(labirinto);

    Coordenada *caminho = (Coordenada *)malloc(100 * sizeof(Coordenada));
    Coordenada player = entrada;
    int mov = 0, movsFeitos = 1;

    while (!estaNaSaida(player, saida))
    {
        if (daPraAndar(labirinto, player, mov))
        {
            while (mov < 4)
            {
                int novoX = player.x + movsPossiveis[mov].x;
                int novoY = player.y + movsPossiveis[mov].y;
                if (movValido(labirinto, novoX, novoY))
                {
                    player = andar(labirinto, player, mov);
                    inserirPilha(&topo, alocarNo(movsFeitos++, player, mov));
                    mov = 0;
                    break;
                }
                mov++;
            }
        }
        else
        {
            no *temp = removerPilha(&topo);
            if (temp != NULL)
            {
                mov = temp->mov + 1;
                player.x -= movsPossiveis[temp->mov].x;
                player.y -= movsPossiveis[temp->mov].y;
                movsFeitos--;

                free(temp);
            }
        }
    }

    invertePilha(&topo);
    inserirPilha(&topo, alocarNo(movsFeitos, entrada, mov));
    int i = 0;
    while (topo != NULL)
    {
        caminho[i++] = removerPilha(&topo)->Coordenada;
    }

    imprimirCaminho(caminho, movsFeitos);
    desalocarPilha(&topo);
    free(caminho);
}
