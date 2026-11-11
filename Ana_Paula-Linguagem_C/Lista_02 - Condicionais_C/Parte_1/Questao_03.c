//Questão 03 — Número par ou ímpar
//Solicite um número inteiro e determine se ele é par ou ímpar.

#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d -> O número é PAR.\n", numero);
    }
    else {
        printf("%d -> O número é ÍMPAR.\n", numero);
    }

    return 0;
}

