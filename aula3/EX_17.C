#include <stdio.h>

void main(){
    int numero;
    int contador = 0;

    printf("Digite um numero (ou um negativo para parar): ");
    scanf("%i", &numero);

    while (numero >= 0){
        contador = contador + 1;

        printf("Digite outro numero: ");
        scanf("%i", &numero);
    }

    printf("Voce digitou %i numeros positivos. \n", contador);
}