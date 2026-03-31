#include <stdio.h>
/*13) Operação Matemática
Leia dois números e uma operação (+, -, *, /).
Realize a operação e exiba o resultado.
*/


int main() {
    float n1, n2;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);  // espaço antes de %c ignora o enter anterior

    if (op == '+')
        printf("Resultado: %.2f\n", n1 + n2);
    else if (op == '-')
        printf("Resultado: %.2f\n", n1 - n2);
    else if (op == '*')
        printf("Resultado: %.2f\n", n1 * n2);
    else if (op == '/') {
        if (n2 != 0)
            printf("Resultado: %.2f\n", n1 / n2);
        else
            printf("Erro: divisao por zero\n");
    } 
    else
        printf("Operacao invalida\n");
}

    