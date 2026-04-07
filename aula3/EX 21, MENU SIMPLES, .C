#include <stdio.h>

void main(){
    int opcao = 0;

    while (opcao != 3){
        
        printf("\n--- MENU DE OPCOES --- \n");
        printf("1: Dizer Ola \n");
        printf("2: Dizer Tudo bem? \n");
        printf("3: Sair \n");
        printf("Escolha uma opcao: ");
        
        scanf("%i", &opcao);

       
        if (opcao == 1){
            printf("Ola! \n");
        }
        
        if (opcao == 2){
            printf("Tudo bem com voce? \n");
        }

        if (opcao == 3){
            printf("Saindo do programa... \n");
        }

        
        if (opcao < 1 || opcao > 3){
            printf("Opcao invalida! Tente 1, 2 ou 3. \n");
        }
    }
}