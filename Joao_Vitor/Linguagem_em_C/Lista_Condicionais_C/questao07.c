#include <stdio.h>

int main(void) {
    float a, b;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        printf("Resultado: %.2f\n", a + b);
    } else if (operacao == '-') {
        printf("Resultado: %.2f\n", a - b);
    } else if (operacao == '*') {
        printf("Resultado: %.2f\n", a * b);
    } else if (operacao == '/') {
        if (b == 0) {
            printf("Erro: divisao por zero.\n");
        } else {
            printf("Resultado: %.2f\n", a / b);
        }
    } else {
        printf("Operacao invalida.\n");
    }
    return 0;
}
