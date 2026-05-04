#include <stdio.h>

int main() {
    float vetor[10];
    float aux;
    int i, j;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d o numero: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}