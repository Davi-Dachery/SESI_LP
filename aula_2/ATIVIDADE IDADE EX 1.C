#include <stdio.h>
/* Classificação de Idade
Leia a idade de uma pessoa e informe:
Criança (0–12)
Adolescente (13–17)
Adulto (18–59)
Idoso (60+)
*/
    int main(){
        int idade;
        
    printf("Qual sua idade?");
    scanf("%i", &idade);
     
        if (idade <=12) {
            printf("crianca");
        } else if (idade <=17) { 
            printf ("adolescente");
        } else if ( idade <= 59) {
            printf ("adulto");
        } else if (idade >=60) {
            printf ("idoso");
        }

    
}