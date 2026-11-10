#include <stdio.h>

int main() {
    char nome[50];
    int idade, matricula;
    float nota1, nota2, nota3, media;

    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\n===== RELATORIO ACADEMICO =====\n");
    printf("Nome: %s", nome);
    printf("Idade: %d anos", idade);
    printf("Matricula: %d", matricula);
    printf("Nota 1: %.2f", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Nota 3: %.2f\n", nota3);
    printf("Media: %.2f\n", media);
    printf("===============================\n");

    return 0;
}