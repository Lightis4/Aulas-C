// Questão 10 — Sistema de cadastro acadêmico
// Solicite nome, idade, matrícula e três notas. Calcule a média e apresente um relatório com todas as
// informações. Use tipos adequados e organize a saída com printf().

#include <stdio.h>

int main(void) {
    char nome[100];
    int idade;
    int matricula;
    float n1;
    float n2;
    float n3;
    float media;

    printf("Digite seu nome: ");
    scanf(" %99[^\n]", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("\n=========== RELATORIO ===========\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Matricula: %d\n", matricula);
    printf("Primeira nota: %.2f\n", n1);
    printf("Segunda nota: %.2f\n", n2);
    printf("Terceira nota: %.2f\n", n3);
    printf("Media: %.2f\n", media);
    printf("=================================\n");

    return 0;
}