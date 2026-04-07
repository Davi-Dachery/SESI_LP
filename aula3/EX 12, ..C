#include <stdio.h>

void main(){
    int contador = 0;

    for (int i=1; i <= 50; i=i+1){
       
        if (i % 2 == 0){
            contador = contador + 1;
        }
    }

    printf("Existem %i numeros pares entre 1 e 50 \n", contador);
}