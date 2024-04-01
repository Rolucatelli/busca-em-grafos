#include <stdio.h> 
#include <stdlib.h>



typedef struct Coordenada{
    int x;
    int y;
} Coordenada;

Coordenada movsPossiveis[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

char **alocarLabirinto(){
    char **labirinto = (char **)malloc(10 * sizeof(char *));
    for (int i = 0; i < 10; i++)
    {
        labirinto[i] = (char *)malloc(10 * sizeof(char));
    }
    return labirinto;
}

void desalocarLabirinto(char **labirinto){
    for (int i = 0; i < 10; i++)
    {
        free(labirinto[i]);
    }
    free(labirinto);
}

char **lerLabirinto(FILE* arquivo){
    char **labirinto = alocarLabirinto();
    char temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            fscanf(arquivo, "%c", &temp);
            if(temp == '\n'){
                fscanf(arquivo, "%c", &temp);
            }
            labirinto[i][j] = temp;
        }
        labirinto[i][10] = '\0';
    }
    return labirinto;
}
    

Coordenada encontrarEntrada(char **labirinto){
    Coordenada entrada;
    entrada.x = -1;
    entrada.y = -1;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(labirinto[i][j] == 'E'){
                entrada.x = i;
                entrada.y = j;
                return entrada;
            }
        }
        
    }
    return entrada;
}

Coordenada encontrarSaida(char **labirinto){
    Coordenada saida;
    saida.x = -1;
    saida.y = -1;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(labirinto[i][j] == 'S'){
                saida.x = i;
                saida.y = j;
                return saida;
            }
        }
        
    }
    return saida;
}



void imprimirCaminho(Coordenada *caminho, int movsFeitos){
    for (int i = 0; i < movsFeitos; i++)
    {
        printf("%d,%d\n", caminho[i].y, 9 - caminho[i].x);
    }
    
    
}

void imprimirLabirinto(char **labirinto){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c", labirinto[i][j]);
        }
        printf("\n");
    }
    
}

Coordenada andar(char **labirinto, Coordenada player, int mov)
{
    
    labirinto[player.x][player.y] = '1';
    player.x += movsPossiveis[mov].x;
    player.y += movsPossiveis[mov].y;
    return player;
}

int estaNaSaida(Coordenada player, Coordenada saida)
{
    return (player.x == saida.x && player.y == saida.y) ? 1 : 0;
}

int movValido(char **labirinto, int x, int y)
{
    return (x >= 0 && y >= 0 && x < 10 && y < 10 && (labirinto[x][y] == '0' || labirinto[x][y] == 'S')) ? 1 : 0;
}

int daPraAndar(char **labirinto, Coordenada player, int mov)
{

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