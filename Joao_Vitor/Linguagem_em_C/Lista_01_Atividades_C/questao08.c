#include <stdio.h>

int main(void) {
    int ano_nascimento, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    idade = 2026 - ano_nascimento;
    printf("Idade aproximada em 2026: %d anos\n", idade);
    return 0;
}
