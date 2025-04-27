#include <stdio.h>

int main() {
    int torre, bispo = 0, rainha = 0, cavalo = 1;

    // //Mover a Torre 5 vezes para cima
    printf("Movimento da Torre:\n");
    for (torre = 0; torre < 5; torre++) {
        printf("cima\n"); // Cima 5 vezes
    }

    // //Mover o Bispo 5 vezes na diagonal para cima e direita
    printf("Movimento do Bispo:\n");
    while (bispo < 5) {
        printf("Cima Direita\n"); // Diagonal para cima e direita
        bispo++;
    }

    // //Mover a Rainha 8 vezes para a esquerda
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n"); // Esquerda 8 vezes
        rainha++;
    } while (rainha < 8);

    printf("Movimento do Cavalo: \n");
    while (cavalo--)
    {
        for(int cavalo = 0; cavalo < 2; cavalo++){
            printf("Esquerda\n"); //Esquerda 2 vezes
        }
            printf("Cima\n"); //Cima 1 vez
    }   


    return 0;
}