#include <stdio.h>

int main(void){ 
    double a, b;

    printf("Digite dois numeros: ");

    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Soma: %.2f\n", a + b);

    return 0;
}