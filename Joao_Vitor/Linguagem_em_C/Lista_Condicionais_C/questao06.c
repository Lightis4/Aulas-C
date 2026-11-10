#include <stdio.h>

int main(void) {
    float nota;

    printf("Digite a nota final (0 a 10): ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Nota invalida.\n");
    } else if (nota >= 9) {
        printf("Excelente\n");
    } else if (nota >= 7) {
        printf("Bom\n");
    } else if (nota >= 5) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}
