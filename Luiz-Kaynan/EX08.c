#include <stdio.h>
int main(void) {
    int ano_nascimento, idade;
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    idade = 2026 - ano_nascimento;
    printf("Sua idade aproximada em 2026 e/sera de: %d anos\n", idade);
    return 0;
}