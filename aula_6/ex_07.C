#include <stdio.h>

int main() {
    int matriz[5][5];
    int soma = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 5; i++) {
        soma += matriz[i][4 - i];
    }

    printf("Soma da diagonal secundaria: %d\n", soma);
}