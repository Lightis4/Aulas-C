//Questão 05 — Comparação de números
//Solicite dois números inteiros e informe qual é o maior. Caso sejam iguais, apresente uma mensagem indicando a igualdade.

#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    if (n1>n2) {
        printf("%d é maior que %d \n", n1, n2);
    }
    else if (n2>n1) {
        printf("%d é maior que %d \n", n2, n1);
    }
    else {
        printf("%d é igual a %d\n", n1, n2);
    }

    return 0;
}