//Questão 05 — Cadastro de estudante
//Solicite idade, inicial do nome e nota de uma avaliação. Utilize scanf() para receber os dados e printf() para exibi-los.

#include <stdio.h>

int main(void) {
    int idade;
    char inicial_nome;
    float nota;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial_nome);
    
    printf("Digite a nota: ");
    scanf("%f", &nota);


    printf("\nIdade: %d \n", idade);
    printf("Inicial do nome: %c \n", inicial_nome);
    printf("Nota: %.1f \n", nota);

    return 0;
}