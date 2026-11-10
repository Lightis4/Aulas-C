/*
Questão 05 — Cadastro de estudante
Solicite idade, inicial do nome e nota de uma avaliação. Utilize scanf() para receber os dados e printf() para exibi-los.
*/
#include<stdio.h>

int main(void){

int idade;
char nome;
float nota;

printf("========[CADASTRO ESTUDANTIL]========\n");

    printf("Digite a inicial do seu nome: ");
    scanf("%c", &nome);

    printf("Digite sua idade atual: ");
    scanf("%d", &idade);

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    printf("Sua inicial e %c\n"
        "Sua idade atual e %d\n"
        "Sua nota foi %.1f\n",
        nome, idade, nota);

printf("========[FIM DO CADASTRO]========");

return 0;
}