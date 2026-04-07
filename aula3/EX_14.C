#include <stdio.h>

void main(){
    int inicio;

    printf("Digite um numero para começar a contagem: ");
    scanf("%i", &inicio);

    for (int i = inicio; i >= 0; i = i - 1){
        printf("%i \n", i);
    }

    printf("FIM! \n");
}