#include <stdio.h>

int main(void) {

    int anoNascimento;
    int ano = 2026;

    printf("qual seu ano de nascimento?\n");
    scanf("%d", anoNascimento);

    printf("sua idade aproximada é: %d\n", anoNascimento-ano);

    return 0;
}