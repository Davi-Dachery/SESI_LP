#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);

        if(vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    printf("\nVetor após substituição:\n");

    for(i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

}