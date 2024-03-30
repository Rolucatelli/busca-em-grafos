#include <stdio.h>
#include <stdlib.h>
#include "../../hdr/labirinto.h"
#include "../../hdr/estruturas/pilha.h"

void buscaIterativa(char **labirinto)
{
    Cordenada movsPossiveis[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    no *topo = NULL;
    Cordenada entrada = encontrarEntrada(labirinto);
    Cordenada saida = encontrarSaida(labirinto);

    Cordenada *caminho = (Cordenada *)malloc(100 * sizeof(Cordenada));
    Cordenada player = entrada;
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
                    andar(labirinto, &player, mov);
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
        caminho[i++] = removerPilha(&topo)->cordenada;
    }

    imprimirCaminho(caminho, movsFeitos);
    desalocarPilha(&topo);
}

void andar(char **labirinto, Cordenada *player, int mov)
{
    Cordenada movsPossiveis[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    labirinto[player->x][player->y] = '1';
    player->x += movsPossiveis[mov].x;
    player->y += movsPossiveis[mov].y;
}

int estaNaSaida(Cordenada player, Cordenada saida)
{
    return (player.x == saida.x && player.y == saida.y) ? 1 : 0;
}

int movValido(char **labirinto, int x, int y)
{
    return (x >= 0 && y >= 0 && x < 10 && y < 10 && (labirinto[x][y] == '0' || labirinto[x][y] == 'S')) ? 1 : 0;
}

int daPraAndar(char **labirinto, Cordenada player, int mov)
{
    Cordenada movsPossiveis[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    while (mov < 4)
    {
        int novoX = player.x + movsPossiveis[mov].x;
        int novoY = player.y + movsPossiveis[mov].y;

        if (movValido(labirinto, novoX, novoY))
        {
            return 1;
        }
        mov++;
    }

    return 0;
}