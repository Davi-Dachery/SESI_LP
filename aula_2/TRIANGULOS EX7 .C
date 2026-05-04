#include <stdio.h>
/*7) Verificação de Triângulo
Leia três valores e verifique se podem formar um triângulo.
Caso formem, classifique como:
Equilátero
Isósceles
Escaleno
*/


int main() {
    float a, b, c;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        }
        else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        }
        else {
            printf("Triangulo Escaleno\n");
        }

    } else {
        printf("Nao forma triangulo\n");
    }
}