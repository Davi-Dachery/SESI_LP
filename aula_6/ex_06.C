#include <stdio.h>

int main() {
    int matriz[4][4];
    int maior, menor;


    printf("Digite os elementos da matriz 4x4:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }


    maior = matriz[0][0];
    menor = matriz[0][0];


    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

}