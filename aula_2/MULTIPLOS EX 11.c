#include <stdio.h>
/*11) Verificação de Múltiplos
Leia dois números e verifique se o primeiro é múltiplo do segundo.
*/


int main() {
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (b != 0 && a % b == 0) {
        printf("%d e multiplo de %d\n", a, b);
    } 
    else if (a != 0 && b % a == 0) {
        printf("%d e multiplo de %d\n", b, a);
    } 
    else {
        printf("Nenhum numero e multiplo do outro\n");
    }
}