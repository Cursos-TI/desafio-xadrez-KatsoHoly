#include <stdio.h>

int main() {
    int torre, bispo = 0, rainha = 0;

    // //Mover a Torre 5 vezes para cima
    printf("Movimento da Torre:\n");
    for (torre = 0; torre < 5; torre++) {
        printf("cima\n"); // Cima 5 vezes
    }

    // //Mover o Bispo 5 vezes na diagonal para cima e direita
    printf("\nMovimento do Bispo:\n");
    while (bispo < 5) {
        printf("Cima Direita\n"); // Diagonal para cima e direita
        bispo++;
    }

    // //Mover a Rainha 8 vezes para a esquerda
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n"); // Esquerda 8 vezes
        rainha++;
    } while (rainha < 8);

    return 0;
}