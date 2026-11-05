// Questão 06 — Soma de dois números
// Solicite dois números inteiros e apresente a soma entre eles. Exemplo: 10 + 5 = 15.

#include <stdio.h>

int main(void){
    int n1;
    int n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("A soma de n1 + n2 é: %d", n1 + n2);

    return 0;
}