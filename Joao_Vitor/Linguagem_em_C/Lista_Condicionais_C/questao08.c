#include <stdio.h>

int main(void) {
    float valor, percentual, desconto;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    if (valor < 0) {
        printf("Valor invalido.\n");
        return 0;
    }

    if (valor >= 500) {
        percentual = 15;
    } else if (valor >= 300) {
        percentual = 10;
    } else if (valor >= 100) {
        percentual = 5;
    } else {
        percentual = 0;
    }

    desconto = valor * percentual / 100;
    printf("Desconto (%.0f%%): R$ %.2f\n", percentual, desconto);
    printf("Valor final: R$ %.2f\n", valor - desconto);
    return 0;
}
