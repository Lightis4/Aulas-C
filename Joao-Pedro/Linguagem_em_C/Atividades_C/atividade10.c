#include <stdio.h>

int main(void){
 
    int idade, matricula;
    double nota1, nota2, nota3, media;
    char nome [50];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade: ");
    scanf(" %d", &idade);

    printf("Digite sua matricula: ");
    scanf(" %d", &matricula);

    printf("Digite sua nota1: ");
    scanf(" %lf", &nota1);

    printf("Digite sua nota2: ");
    scanf(" %lf", &nota2);

    printf("Digite sua nota3: ");
    scanf(" %lf", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("A media e: %.2lf\n", media);

    return 0;
}