
#include <stdio.h>

int main(void) {
    int usuario;
    int senha;
    char nome[100];

    printf("======= SISTEMA DE LOGIN =======\n");

    printf("Digite seu nome: ");
    scanf(" %99[^\n]", nome);

    printf("Digite seu codigo de usuario: ");
    scanf("%d", &usuario);

    printf("Digite sua senha: ");
    scanf("%d", &senha);

    if (usuario != 2026) {
        printf("%s, USUARIO INCORRETO!\n", nome);
    }

    else if (senha != 1234) {
        printf("%s, SENHA INCORRETA!\n", nome);
    }

    else {
        printf("Bem-vindo(a), %s! LOGIN REALIZADO COM SUCESSO!\n", nome);
    }

    return 0;
}
