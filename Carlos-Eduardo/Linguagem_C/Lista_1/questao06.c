#include <stdio.h>
int main(void) {
    int num1, num2, soma;

    printf("Digite um numero:");
    scanf("%d", &num1);

    printf("Digite outro numero:");
    scanf("%d", &num2);

    soma = (num1 + num2);

    printf("a soma entre %d + %d e igual a: %d", num1, num2, soma);

    return 0;
}