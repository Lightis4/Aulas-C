#include <stdio.h>

int main(void) {
    char nome[100];
    char matricula[32];
    int idade;
    float n1, n2, n3, media;

    printf("Nome: ");
    scanf(" %99[^\n]", nome);
    printf("Idade: ");
    scanf("%d", &idade);
    printf("Matricula: ");
    scanf(" %31s", matricula);
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("\n===== RELATORIO ACADEMICO =====\n");
    printf("Nome      : %s\n", nome);
    printf("Idade     : %d anos\n", idade);
    printf("Matricula : %s\n", matricula);
    printf("Notas     : %.2f | %.2f | %.2f\n", n1, n2, n3);
    printf("Media     : %.2f\n", media);
    printf("===============================\n");
    return 0;
}
