#include <stdio.h>
/*Sistema de Login Simples
Leia usuário e senha:
Usuário correto: admin
Senha correta: 1234
Informe se o login foi bem-sucedido ou não.
*/



int main() {
    int usuario, senha;

    printf("Digite o usuario (numero): ");
    scanf("%i", &usuario);

    printf("Digite a senha: ");
    scanf("%i", &senha);

    if (usuario == 1 && senha == 1234) {
        printf("Login bem-sucedido\n");
    } else {
        printf("Login incorreto\n");
    }
}