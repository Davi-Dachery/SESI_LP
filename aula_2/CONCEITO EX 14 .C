#include <stdio.h>
/*14) Classificação de Nota com Conceito
Leia uma nota de 0 a 10 e classifique:
A (>= 9)
B (7 – 8.9)
C (5 – 6.9)
D (< 5)
*/

int main() {
    float nota;

    printf("Digite a nota (0 a 10): ");
    scanf("%f", &nota);

    if (nota >= 9)
        printf("Conceito A\n");
    else if (nota >= 7)
        printf("Conceito B\n");
    else if (nota >= 5)
        printf("Conceito C\n");
    else
        printf("Conceito D\n");
}
    