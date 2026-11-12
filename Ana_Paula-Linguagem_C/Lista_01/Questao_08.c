//Questão 08 — Calculadora de idade
//Solicite o ano de nascimento e calcule a idade aproximada considerando o ano de 2026.

#include <stdio.h>

int main(void) {
    int ano_nascimento, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    idade = 2026 - ano_nascimento;

    printf("A idade é: %d \n", idade);

    return 0;
}