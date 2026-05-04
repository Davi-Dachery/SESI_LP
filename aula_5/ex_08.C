#include <stdio.h>

int main() {
    int vetor[10];
    int i, soma = 0;
    float media;

    for(i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 10.0;

    printf("\nMédia: %.2f\n", media);
    printf("Valores maiores que a média:\n");

    for(i = 0; i < 10; i++) {
        if(vetor[i] > media) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");

}