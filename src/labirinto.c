#include <stdio.h> 
#include <stdlib.h>

typedef struct cordenada{
    int x;
    int y;
} Cordenada;

char **lerLabirinto(FILE *arquivo){

    char labirinto[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            labirinto[i][j] = fgetc(arquivo);
        }
        
    }

    return labirinto;   
}

Cordenada encontrarEntrada(char **labirinto){
    Cordenada entrada;
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

Cordenada encontrarSaida(char **labirinto){
    Cordenada saida;
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

