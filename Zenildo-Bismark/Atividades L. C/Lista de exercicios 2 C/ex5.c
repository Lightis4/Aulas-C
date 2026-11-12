// Questão 05 — Comparação de números
// Solicite dois números inteiros e informe qual é o maior. Caso sejam iguais, apresente uma
// mensagem indicando a igualdade.

#include <stdio.h>

int main(void){
    int n1;
    int n2;
    int maior;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    if (n1 == n2){
        printf("O numero 1: %d, e igual ao numero 2: %d", n1, n2);
    }

    else{
        if (n1 > n2){
            maior = n1;
        }

        else{
            maior = n2;
        }

        printf("O maior numero e: %d", maior);
    }

    return 0;
}