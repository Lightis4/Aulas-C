/*Questão 15 — Sistema de login
Solicite código de usuário e senha, ambos numéricos. Usuário: 2026; senha: 1234. Exiba “Login
realizado com sucesso”, “Usuario incorreto” ou “Senha incorreta”.*/

#include <stdio.h>

int validar_positivo (int numero) {
    return numero > 0;
}

int teste_codigo (int codigo) {
    return codigo == 2026;
}

int teste_senha (int senha) {
    return senha == 1234;
}

int main(void) {
    int codigo_usuario, senha;
    char enter;

    printf("Digite o Código de usuário:\n");
    if (scanf("%d%c", &codigo_usuario, &enter) != 2 || enter != '\n') {
        printf("Código em formato inválido. Digite um número inteiro.\n");
        return 1;
    }

    if (validar_positivo(codigo_usuario) == 0) {
        printf("Código inválido. Digite um número POSITIVO.\n");
        return 1;
    }

    if (teste_codigo(codigo_usuario) == 0) {
        printf("Usuário incorreto.\n");
        return 1;
    }
    else {
        printf("Digite a Senha:\n");
            if (scanf("%d%c", &senha, &enter) != 2 || enter != '\n') {
                printf("Senha em formato inválido. Digite um número inteiro.\n");
                return 1;
            }

            if (validar_positivo(senha) == 0) {
                printf("Senha inválida. Digite um número POSITIVO.\n");
            return 1;
            }

            if (teste_senha(senha) == 0) {
                printf("Senha incorreta.\n");
                return 1;
            }
            else {
                printf("Login realizado com sucesso!\n");
            }
    }

    return 0;
}