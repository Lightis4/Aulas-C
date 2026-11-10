// Questão 05 — Cadastro de estudante
// Solicite idade, inicial do nome e nota de uma avaliação. Utilize scanf() para receber os dados e printf() para
// exibi-los.

#include <stdio.h>

int main(void){
    int idade;
    char nome;
    float nota;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &nome);

    printf("Digite a nota de sua avaliacao: ");
    scanf("%f", &nota);

    printf("+++++++++ SEU CADASTRO +++++++++++\n");
    printf("Idade: %d anos\n", idade);
    printf("Nome: %c\n", nome);
    printf("Nota: %.2f\n", nota);

    return 0;
}