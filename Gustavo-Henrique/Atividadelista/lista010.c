/*
Questão 10 — Sistema de cadastro acadêmico
Solicite nome, idade, matrícula e três notas. Calcule a média e apresente um relatório com todas as informações. Use tipos adequados e organize a saída com printf().
*/
#include<stdio.h>

int main(void){

float nota1, nota2, nota3, media;
char nome [100];
int idade, matricula;

printf("========[SISTEMA DA CADASTRO ACADEMICO]========\n");

    printf("Digite seu nome: ");
    scanf("%99s", &nome);

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

    printf("Seu nome e %s\n"
    "Voce tem %d anos\n"
    "Sua matricula e %d\n"
    "Sua media foi %.1f\n", nome, idade, matricula, media);

printf("========[FIM DO SISTEMA DE CADASTRO]========");

return 0;
}