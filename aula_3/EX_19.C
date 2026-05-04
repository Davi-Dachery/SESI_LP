#include <stdio.h>

void main(){
    int numero;
    int maior;

    printf("Digite um numero (ou 999 para parar): ");
    scanf("%i", &numero);

    maior = numero;

    while (numero != 999){
  
        if (numero > maior){
            maior = numero;
        }

        printf("Digite outro numero (ou 999 para parar): ");
        scanf("%i", &numero);
    }

  
    if (maior != 999){
        printf("O maior numero digitado foi: %i \n", maior);
    } else {
        printf("Voce encerrou o programa sem digitar outros numeros. \n");
    }
}