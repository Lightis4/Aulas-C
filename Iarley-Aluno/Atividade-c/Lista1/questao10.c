#include <stdio.h>

int main(){
    char nome[100];
    int idade;
    int matricula;
    float n1, n2, n3;
    float media;

    printf("Digite o nome: ");
    scanf(" %99[^\n]", nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a matricula: ");
    scanf("%d", &matricula);

    printf("Digite nota 1: ");
    scanf("%f", &n1);

    printf("Digite  nota 2: ");
    scanf("%f", &n2);

    printf("Digite  nota 3: ");
    scanf("%f", &n3);

    media =(n1+n2+n3) /3;

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Matricula: %d\n", matricula);
    printf("Notas: %.2f, %.2f, %.2f\n", n1, n2, n3);
    printf("Media: %.2f\n", media);

    return 0;
}