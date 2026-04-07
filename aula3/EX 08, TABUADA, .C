#include <stdio.h>

void main(){
    int num;

    printf("Digite um numero para ver a tabuada: ");
    scanf("%i", &num);

    for (int i=1; i < 11; i=i+1){
        int resultado = num * i;
        printf("%i x %i = %i \n", num, i, resultado);
    }
}