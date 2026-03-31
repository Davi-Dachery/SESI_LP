#include <stdio.h>
/*18) Verificação de Ano de Eleição
Leia um ano e informe se é ano de eleição (múltiplo de 4).
*/


int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 2 == 0) {
        printf("Este e um ano de eleicao (Municipal ou Geral).\n");
    } 
    else {
        printf("Nao e ano de eleicao.\n");
    }
}