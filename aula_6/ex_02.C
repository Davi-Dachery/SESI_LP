#include <stdio.h>

int main() {
    int matriz[2][2];
    int i, j;
    int soma = 0;

   
    printf("Digite os elementos da matriz 2x2:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j];
        }
    }

 
    printf("Soma dos elementos: %d\n", soma);

    return 0;
}