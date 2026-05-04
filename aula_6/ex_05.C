#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma;

  
    printf("Digite os elementos da matriz 3x3:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }


    for(int i = 0; i < 3; i++) {
        soma = 0;
        for(int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
        printf("Soma da linha %d: %d\n", i + 1, soma);
    }

}