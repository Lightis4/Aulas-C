#include <stdio.h>

int main() {
    int anoqnasci;
    int idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoqnasci);

    idade = 2026 - anoqnasci;

    printf("Idade aproximada: %d anos\n", idade);

    return 0;
}