#include <stdio.h>

int main() {
    int vetor[8];
    int i, soma = 0;

    for(i = 0; i < 8; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 8; i++) {
        soma += vetor[i];
    }

    printf("\nSoma dos elementos: %d\n", soma);
}