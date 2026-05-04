#include <stdio.h>
/*Cálculo de Desconto
Leia o valor de uma compra:
Se for maior que R$100 → desconto de 10%
Caso contrário → desconto de 5%
Exiba o valor final.
*/

int main() {
    float valor_da_compra, valor_final;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_da_compra);

    if (valor_da_compra >= 100) {
        valor_final = valor_da_compra * 0.90; // 10% desconto
    } else {
        valor_final = valor_da_compra * 0.95; // 5% desconto
    }

    printf("Valor final: %.2f\n", valor_final);

    return 0;
}