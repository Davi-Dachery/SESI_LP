#include <stdio.h>
/*3) Leia dois números inteiros e informe qual é o maior ou se são iguais.
*/

    int main (){
        int num1, num2;
        printf("Digite num1: ");
        scanf("%i", &num1);
        
        printf("Digite num2: ");
        scanf("%i", &num2);
        
        if (num1>num2) {
            printf("num1 maior");
        } else if (num1<num2) {
            printf ("num2 maior");
        }
    }