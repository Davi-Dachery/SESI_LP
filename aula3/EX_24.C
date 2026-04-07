#include <stdio.h>

void main(){
    int numero;
    int divisores = 0;

    printf("Digite um numero para saber se ele e primo: ");
    scanf("%i", &numero);

    for (int i = 1; i <= numero; i = i + 1){
        if (numero % i == 0){
            divisores = divisores + 1;
        }
    }

    if (divisores == 2){
        printf("O numero %i e PRIMO! \n", numero);
    } else {
        printf("O numero %i NAO e primo. \n", numero);
    }
}