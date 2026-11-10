#include <stdio.h>

int main(void) {
    int usuario, senha;

    printf("Digite o codigo de usuario: ");
    scanf("%d", &usuario);
    printf("Digite a senha: ");
    scanf("%d", &senha);

    if (usuario != 2026) {
        printf("Usuario incorreto\n");
    } else if (senha != 1234) {
        printf("Senha incorreta\n");
    } else {
        printf("Login realizado com sucesso\n");
    }
    return 0;
}
