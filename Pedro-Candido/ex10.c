#include <stdio.h>
int main(void){
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    int idade;
    printf("Digite sua idade: ");
    scanf(" %d", &idade);
    int matricula;
    printf("Digite sua matricula: ");
    scanf(" %d", &matricula);
    int n1;
    printf("Digite sua primeira nota: ");
    scanf(" %d", &n1);
    int n2;
    printf("Digite sua segunda nota: ");
    scanf(" %d", &n2);
    int n3;
    printf("Digite sua terceira nota: ");
    scanf(" %d", &n3);
     int media;
    media= (n1+n2+n3)/3;
    printf("Seu nome e %s, voce tem %d anos\nSua matricula: %d\nA media das suas notas: %d\n", nome, idade, matricula, media);
    return 0;
}