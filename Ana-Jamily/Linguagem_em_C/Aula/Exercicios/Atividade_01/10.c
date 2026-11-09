#include <stdio.h>

int main(void) {
    char nome[50];
    int idade, matricula;
    float nota1, nota2, nota3, media;

    printf("Qual o seu nome?\n");
    scanf("%s", nome);

    printf("Qual a sua idade?\n");
    scanf("%i", &idade);

    printf("Qual o numero da sua matricula?\n");
    scanf("%i", &matricula);

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nRELATORIO:\nNome: %s\nIdade: %i\nMatricula: %i\nMedia: %.2f\n", nome, idade, matricula, media);

    return 0;
}