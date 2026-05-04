#include <stdio.h>
/*12) Cálculo de Salário com Bônus
Leia o salário:
Se maior que 3000 → bônus de 5%
Caso contrário → bônus de 10%
Exiba o salário final.
*/



int main() {
    float salario, salarioFinal;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario > 3000) {
        salarioFinal = salario + (salario * 0.05);
    } else {
        salarioFinal = salario + (salario * 0.10);
    }

    printf("Salario final: %.2f\n", salarioFinal);
}