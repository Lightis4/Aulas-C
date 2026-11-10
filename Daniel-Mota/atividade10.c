#include <stdio.h>

int main(void){
    char nome[20];
    int idade, matricula;
    float nota1, nota2, nota3, media;

    printf("Digite o seu nome: ");
    scanf("%s", &nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua matricula: ");
    scanf("%d", &matricula);

    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a sua terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3) / 3;
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Matricula: %d\n", matricula);
    printf("Media: %.1f\n", media);
}