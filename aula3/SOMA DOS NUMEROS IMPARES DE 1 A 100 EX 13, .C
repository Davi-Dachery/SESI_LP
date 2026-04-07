#include <stdio.h>

void main(){
    int soma = 0;

    for (int i=1; i <= 100; i=i+1){
       
        if (i % 2 != 0){
            soma = soma + i;
        }
    }

    printf("A soma dos numeros impares de 1 ate 100 e: %i \n", soma);
}