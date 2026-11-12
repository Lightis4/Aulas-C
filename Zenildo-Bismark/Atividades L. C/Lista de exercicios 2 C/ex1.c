// Questão 01 — Número positivo ou negativo
// Desenvolva um programa que solicite um número inteiro e informe se ele é positivo, negativo ou
// igual a zero.

#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0){
        printf("O numero %d e POSITIVO!", numero);
    }

    else if (numero < 0){
        printf("O numero %d e NEGATIVO", numero);
    }

    else{
        printf("O numero e ZERO!");
    }

    return 0;
}