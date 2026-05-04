#include <stdio.h>
/* Leia um nC:mero inteiro e informe se ele C) par ou C-mpar.3) Maior entre dois nC:meros
*/

int main(){
int num1;

printf("Digite num1: ");
scanf("%i", &num1);


if (num1 % 2 == 0) {
	printf("par");
    
}else{
	printf("impar");
}

}