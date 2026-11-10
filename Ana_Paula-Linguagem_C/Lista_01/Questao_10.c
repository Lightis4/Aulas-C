//Questão 10 — Sistema de cadastro acadêmico
//Solicite nome, idade, matrícula e três notas. Calcule a média e apresente um relatório com todas as informações. Use tipos adequados e organize a saída com printf().

#include <stdio.h>

int main(void) {
    char nome[51], matricula[21];
    int idade;
    float nota_1, nota_2, nota_3, media;

    printf("Digite o nome: ");
    scanf(" %50s", nome);

    printf("Digite a matrícula: ");
    scanf(" %20s", matricula);

    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota_1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota_2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota_3);

    media = (nota_1+nota_2+nota_3)/3;

    printf("\n-- RELATÓRIO --\n");
    printf("Nome: %s \n", nome);
    printf("Matrícula: %s \n", matricula);
    printf("Idade: %d \n", idade);
    printf("Notas: %.2f, %.2f e %.2f \n", nota_1, nota_2, nota_3);
    printf("Média: %.1f \n", media);

    return 0;
}