#include <stdio.h>

int main(void) {
    float a, b, c;

    printf("Digite o lado A: ");
    scanf("%f", &a);
    printf("Digite o lado B: ");
    scanf("%f", &b);
    printf("Digite o lado C: ");
    scanf("%f", &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Valores invalidos: os lados devem ser positivos.\n");
    } else if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Os valores nao formam um triangulo.\n");
    } else if (a == b && b == c) {
        printf("Triangulo equilatero\n");
    } else if (a == b || a == c || b == c) {
        printf("Triangulo isosceles\n");
    } else {
        printf("Triangulo escaleno\n");
    }
    return 0;
}
