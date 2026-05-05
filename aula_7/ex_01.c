#include <stdio.h>

int somaDeDoisValores(int a, int b) {
    return a + b;
}

int multiplicacaoDeDoisValores(int a, int b) {
    return a * b;
}

int subtracaoDeDoisValores(int a, int b) {
    return a - b;
}

int divisaoDeDoisValores(int a, int b) {
    if (b == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int n1, n2;
    int soma = 0, multiplicacao = 0, subtracao = 0, divisao = 0;

    printf("Digite primeiro valor: ");
    scanf("%i", &n1);

    printf("Digite segundo valor: ");
    scanf("%i", &n2);

    soma = somaDeDoisValores(n1, n2);
    multiplicacao = multiplicacaoDeDoisValores(n1, n2);
    subtracao = subtracaoDeDoisValores(n1, n2);
    divisao = divisaoDeDoisValores(n1, n2);

    printf("A soma dos dois valores: %i\n", soma);
    printf("A multiplicacao dos dois valores: %i\n", multiplicacao);
    printf("A subtracao dos dois valores: %i\n", subtracao);
    printf("A divisao dos dois valores: %i\n", divisao);

    printf("\n5 + 5 = %i", somaDeDoisValores(5, 5));
    printf("\n3 + 15 = %i", somaDeDoisValores(3, 15));

    printf("\n5 * 5 = %i", multiplicacaoDeDoisValores(5, 5));
    printf("\n3 * 15 = %i\n", multiplicacaoDeDoisValores(3, 15));

    printf("\n5 - 5 = %i", subtracaoDeDoisValores(5, 5));
    printf("\n3 - 15 = %i", subtracaoDeDoisValores(3, 15));

    printf("\n5 / 5 = %i", divisaoDeDoisValores(5, 5));
    printf("\n3 / 15 = %i", divisaoDeDoisValores(3, 15));

}