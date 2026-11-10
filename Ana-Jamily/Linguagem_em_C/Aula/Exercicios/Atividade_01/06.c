#include <stdio.h>

int main(void) {
    int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("%d + %d = %d\n", num1, num2, soma);

    return 0;
}