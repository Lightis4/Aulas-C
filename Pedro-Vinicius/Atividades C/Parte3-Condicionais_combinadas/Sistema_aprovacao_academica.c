#include <stdio.h>

int main(void) {
    double nota1, nota2, nota3, media;

    printf("Digite sua primeira nota:");
    if (scanf("%lf", &nota1) != 1 || nota1 > 10.0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Digite sua segunda nota:");
    if (scanf("%lf", &nota2) != 1 || nota2 > 10.0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Digite sua terceira nota:");
    if (scanf("%lf", &nota3) != 1 || nota3 > 10.0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7.0) {
        printf("Aprovado\n");
    } else if (media >= 5 && media < 7) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}