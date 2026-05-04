#include <stdio.h>

void main(){
    int num;
    int fatorial = 1;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%i", &num);

    for (int i=1; i <= num; i=i+1){
        fatorial = fatorial * i;
    }

    printf("O fatorial de %i e: %i \n", num, fatorial);
}
