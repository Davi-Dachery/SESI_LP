#include <stdio.h>

void main(){
    int soma = 0;

    for (int i=1; i < 11; i=i+1){
        soma = soma + i;
    }

    printf("A soma de 1 ate 10 e: %i \n", soma);
}