#include <stdio.h>

void main(){
    int senhaSecreta = 1234;
    int senhaDigitada;

    printf("Digite a senha para entrar: ");
    scanf("%i", &senhaDigitada);

   
    while (senhaDigitada != senhaSecreta){
        printf("Senha INCORRETA! Tente novamente: ");
        scanf("%i", &senhaDigitada);
    }

    printf("ACESSO PERMITIDO! Bem-vindo. \n");
}