#include <stdio.h> 
#include <stdlib.h>

typedef struct cordenada{
    int x;
    int y;
} Cordenada;

// char **lerLabirinto(FILE *arquivo){

//     char temp;
//     char **labirinto = (char **) calloc(10, sizeof(char*));
//     for (int i = 0; i < 10; i++)
//     {
//         labirinto[i] = (char *) calloc(10 , sizeof(char));
//     }
    
    
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             labirinto[i][j] = fgetc(arquivo);
//         }
        
//     }

    
//     return labirinto;   
// }

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
        for (int j = 0; j < 11; j++)
        {
            fscanf(arquivo, "%c", &temp);
            if(temp == '\n'){
                fscanf(arquivo, "%c", &temp);
            }
            labirinto[i][j] = temp;
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



void imprimirCaminho(Cordenada *caminho, int movsFeitos){
    for (int i = 0; i < movsFeitos; i++)
    {
        printf("%d,%d\n", caminho[i].x, 9 - caminho[i].y);
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