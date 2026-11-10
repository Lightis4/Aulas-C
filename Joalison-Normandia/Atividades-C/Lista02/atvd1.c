#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("num digitado e positivo\n");
    } else if (numero < 0) {
        printf("num digitado e negativo\n");
    } else {
        printf("num digitado e zero\n");
    }

    return 0;
}