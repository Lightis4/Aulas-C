
#include <stdio.h>

int main() {

    char nome[50];
    int idade, matricula;
    float nota1, nota2, nota3, media;

    printf("Digite seu nome: ");
    scanf("%49[^\n]", nome);

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

    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Matricula: %d\n", matricula);
    printf("Primeira nota: %.2f\n", nota1);
    printf("Segunda nota: %.2f\n", nota2);
    printf("Terceira nota: %.2f\n", nota3);
    printf("Media final: %.2f\n", media);

    printf("===============================\n");

    return 0;
}
