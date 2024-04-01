#include <stdio.h>
#include <stdlib.h>
#include "../../hdr/labirinto.h"
#include "../../hdr/estruturas/fila.h"
#include "../../hdr/estruturas/lista.h"
#include "../../hdr/estruturas/pilha.h"

void buscaLargura(char **labirinto)
{
    Coordenada entrada = encontrarEntrada(labirinto);
    Coordenada saida = encontrarSaida(labirinto);
    Coordenada *caminho = (Coordenada *)malloc(100 * sizeof(Coordenada));
    Coordenada player = entrada;
    Coordenada movsPossiveis[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    no *f, *r, *ptLista, *tmp;
    ptLista = malloc(sizeof(no));
    ptLista->prox = NULL;
    f = r = NULL;
    int mov = 0, movsFeitos = 1;
    inserirLista(ptLista, alocarNo(0, entrada, -100));

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
                    no *novoNo = alocarNo(movsFeitos++, andar(labirinto, player, mov), mov);
                    inserirFila(&f, &r, novoNo);
                    inserirLista(ptLista, novoNo);
                }

                mov++;
            }
            mov = 0;
        }
        if (f != NULL)
        {
            tmp = removerFila(&f, &r);
            player = tmp->Coordenada;
        }
    }
    no *topo = NULL;
    inserirPilha(&topo, tmp);
    no *pai = NULL;
    do
    {
        pai = buscarPai(ptLista, tmp->Coordenada, tmp->mov);
        inserirPilha(&topo, pai);
        tmp = pai;
    } while (!estaNaSaida(pai->Coordenada, entrada));
    int i = 0;
    while (topo != NULL)
    {
        caminho[i++] = removerPilha(&topo)->Coordenada;
    }

    imprimirCaminho(caminho, i);
    desalocarPilha(&topo);
    desalocarLista(ptLista);
    desalocarFila(&f);
    free(caminho);
    return;
}