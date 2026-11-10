#include <stdio.h>

int main(void) {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a > b) {
        printf("O maior numero e %d.\n", a);
    } else if (b > a) {
        printf("O maior numero e %d.\n", b);
    } else {
        printf("Os numeros sao iguais.\n");
    }
    return 0;
}
