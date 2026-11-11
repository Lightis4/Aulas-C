//Questão 10 — Verificação de senha
//Solicite uma senha numérica. A senha correta é 1234. Exiba “Acesso permitido” ou “Acesso negado”.

#include <stdio.h>

int main(void) {
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if (senha == 1234) {
        printf("Acesso permitido.\n");
    }
    else {
        printf("Acesso negado.\n");
    }
    return 0;
}