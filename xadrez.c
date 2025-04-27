#include <stdio.h>

int main() {
    int torre, bispo = 0, rainha = 0;


    printf("Movimento da Torre:\n");
    for (torre = 0; torre < 5; torre++) {
        printf("Direita\n"); // Direita 5 vezes
    }


    printf("\nMovimento do Bispo:\n");
    while (bispo < 5) {
        printf("Cima Direita\n"); // Diagonal para cima e direita
        bispo++;
    }


    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n"); // Esquerda 8 vezes
        rainha++;
    } while (rainha < 8);

    return 0;
}