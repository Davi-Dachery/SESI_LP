#include <stdio.h>

void main(){
    int numero;

    printf("Digite um numero positivo: ");
    scanf("%i", &numero);

    while (numero <= 0){
        printf("Erro! O numero deve ser positivo. \n");
        printf("Tente novamente: ");
        scanf("%i", &numero);
    }

    printf("Obrigado! Voce digitou o numero: %i \n", numero);
}