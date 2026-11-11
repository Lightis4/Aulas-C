//Questão 06 — Soma de dois números
//Solicite dois números inteiros e apresente a soma entre eles. Exemplo: 10 + 5 = 15.

#include <stdio.h>

int main(void) {
    int n1, n2, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("%d + %d = %d \n", n1, n2, soma);

    return 0;
}