#include <stdio.h>
int main (void) {
    char nome [30];
    int idade, matricula;
    float nota1, nota2, nota3, media;

    printf("Digite seu nome:");
    scanf("%s", &nome);

    printf("Digite seu idade:");
    scanf("%d", &idade);

    printf("Digite sua matricula:");
    scanf("%d", &matricula);

    printf("Digite a primeira nota:");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota:");
    scanf("%f", &nota2);

    printf("Digite sua terceira:");
    scanf("%f", &nota3);

    media = ((nota1 + nota2 + nota3) /3);

    printf("Nome:%s\nIdade:%d\nMatricula:%d\nA media entre as notas e igual a:%1.f", nome, idade, matricula, media);

    return 0;
}