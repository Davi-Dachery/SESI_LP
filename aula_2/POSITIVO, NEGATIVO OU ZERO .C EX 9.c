#include <stdio.h>
/*9)Número Positivo, Negativo ou Zero
Leia um número e informe se ele é:
Positivo
Negativo
Zero
*/


int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%i", &numero);
    
    if (numero>0) {
        printf("numero e positivo");
    } else if (numero==0) {
        printf("numero e igual a zero");
    } else{
        printf("numero e igual a negativo");
    }
    }