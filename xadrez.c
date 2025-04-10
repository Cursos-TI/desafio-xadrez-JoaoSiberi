#include <stdio.h>


int main() {
    // Declaração de variável
    int t = 1;

    //Definição do Movimento da Torre
    printf("Torre:\n\n");

    while (t < 6)
    {
        printf("Direita\n");
        t++;
    }
    //Declaração de Variável 
    int b = 1;

    //Definição do Movimento do Bispo
    printf("\nBispo:\n\n");
    do
    {
        printf("Cima, Direita\n");
        b++;
    } while (b < 6);
    
    //Definição do Movimento da Rainha
    printf("\nRainha:\n\n");

    for ( int r = 1; r < 9; r++)
    {
        printf("Esquerda\n");
    }
    

    return 0;
}
