#include <stdio.h>

 // Recursividade do movimento para esquerda

    void esquerda(int e) {
        if (e > 0)
        {
            printf("Esquerda\n");
            esquerda(e - 1 );
        }
    }

// Recursividade do movimento para direita

    void direita(int d) {
        if (d > 0)
        {
            printf("Direita\n");
            direita(d - 1 );
        }    
    }
// Recursividade do movimento para diagonal

    void diagonal (int Diagonal) {
        if (Diagonal > 0)
        {
            printf("Cima, Direita\n");
            diagonal(Diagonal - 1 );
        }
    }

int main() {

 // Inicialização da variável da Torre
    int torre = 5;

 // Movimento da torre 5 casas para direita
 
    printf("Torre:\n");
    direita (torre);

 // Inicialização da variável do Bispo
    int bispo = 5;

// Movimento do bispo 5 casas para diagonal 

    printf("\nBispo:\n");
    diagonal (bispo);

// Inicialização da variável da Rainha
    int rainha = 8;

// Movimento do bispo 8 casas para esquerda 

    printf("\nRainha:\n");
    esquerda(rainha);

// Movimento do Cavalo 

    printf("\nCavalo:\n");
    for (int i = 1; i < 2; i++)
    {for (int f = 1; f < 3; f++)
    {
       printf("Cima\n");
    }
    
    printf("Direita\n");
    }
    

    return 0;
}
