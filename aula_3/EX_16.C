#include <stdio.h>

void main(){
    int numero;
    int soma = 0;

    printf("Digite um numero (ou 0 para sair): ");
    scanf("%i", &numero);

    while (numero != 0){
        soma = soma + numero;

        printf("Digite outro numero (ou 0 para sair): ");
        scanf("%i", &numero);
    }

    printf("A soma total e: %i \n", soma);
}