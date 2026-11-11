//Questão 01 — Número positivo ou negativo
//Desenvolva um programa que solicite um número inteiro e informe se ele é positivo, negativo ou igual a zero.
//Exemplo: Digite um numero: -5 → O numero e negativo.

#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero >0 ) {
        printf("%d -> O número é POSITIVO.\n", numero);
    }
    else if (numero <0 ) {
        printf("%d -> O número é NEGATIVO.\n", numero);
    }
    else {
        printf("%d -> O número é zero.\n", numero);
    }

    return 0;
}