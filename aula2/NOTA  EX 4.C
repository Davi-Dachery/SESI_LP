
#include <stdio.h>
/*3) Verificação de Aprovação
Leia a nota de um aluno (0 a 10).
Informe:
Aprovado (nota >= 7)
Recuperação (nota entre 5 e 6.9)
Reprovado (nota < 5)
*/

int main(){
    float media = 7.0;
  float n1, n2, n3;
  
    printf("diga sua primeira nota: ", n1);
    scanf("%f", &n1);
    
    printf("diga sua segunda nota: ", n2);
    scanf("%f", &n2);
    
    printf("diga sua terceira nota: ", n3);
    scanf("%f", &n3);
    
    media = (n1 + n2 + n3) / 3;
    
    printf("%.1f + %.1f + %.1f /3 = %.1f :", n1, n2, n3, media );
    
    if (media >=7.0) {
    printf("aprovado");
    }
    else if (media <=6.9) {
    printf("recuperaçao");
    }
   else if (media <= 5) {
    printf("reprovado");
    }
    
}