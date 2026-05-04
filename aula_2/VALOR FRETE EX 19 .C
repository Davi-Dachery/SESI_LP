#include <stdio.h>
/*19) Cálculo de Frete
Leia o peso de uma encomenda:
Até 5kg → R$10
5 a 20kg → R$20
Acima de 20kg → R$50
*/


int main() {
    float peso;

    printf("Digite o peso da encomenda em kg: ");
    scanf("%f", &peso);

    if (peso <= 5) {
        printf("Valor do frete: R$ 10.00\n");
    } 
    else if (peso > 5 && peso <= 20) {
        printf("Valor do frete: R$ 20.00\n");
    } 
    else {
        printf("Valor do frete: R$ 50.00\n");
    }
}