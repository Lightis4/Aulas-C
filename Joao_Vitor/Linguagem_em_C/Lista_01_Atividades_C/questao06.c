#include <stdio.h>

int main(void) {
    int a, b;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    return 0;
}
