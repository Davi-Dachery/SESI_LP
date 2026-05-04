#include <stdio.h>

int main() {
    int vetor[6];
    int i, menor;

    for(i = 0; i < 6; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];

    for(i = 1; i < 6; i++) {
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("\nMenor valor: %d\n", menor);
}