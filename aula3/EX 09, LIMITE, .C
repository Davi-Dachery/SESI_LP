#include <stdio.h>

void main(){
    int limite;

    printf("Digite um numero: ");
    scanf("%i", &limite);

    for (int i=1; i <= limite; i=i+1){
        printf("%i \n", i);
    }
}