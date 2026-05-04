#include <stdio.h>

void main(){
    int idade;
    int soma = 0;
    int contador = 0;
    int media;

    printf("Digite uma idade (ou 0 para encerrar): ");
    scanf("%i", &idade);

    while (idade != 0){
        soma = soma + idade;
        contador = contador + 1;

        printf("Digite a proxima idade (ou 0 para encerrar): ");
        scanf("%i", &idade);
    }

    if (contador > 0){
        media = soma / contador;
        printf("A media das %i idades digitadas e: %i \n", contador, media);
    } else {
        printf("Nenhuma idade foi digitada. \n");
    }
}