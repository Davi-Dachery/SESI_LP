#include <stdio.h>


void main(){
    int num1;
    int num2;

    printf("Digite o primeiro numero (inicio): ");
    scanf("%i", &num1);

    printf("Digite o segundo numero (fim): ");
    scanf("%i", &num2);

    for (int i = num1; i <= num2; i = i + 1){
        printf("%i \n", i);
    }
}
