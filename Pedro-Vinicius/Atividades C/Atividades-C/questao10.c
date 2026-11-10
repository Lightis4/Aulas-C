#include <stdio.h>

int main(void){
    char nome[100];
    int idade;
    char matricula[50];
    double nota1, nota2, nota3, media;

    printf("Digite o nome do aluno: ");
    if(scanf("%99[^\n]", nome) != 1){ //limitando a leitura para 99 caracteres.
        printf("Entrada invalida!\n");
        return 1;
    }

    printf("Digite a idade do aluno: ");
    if(scanf("%d", &idade) != 1 || idade < 0 || idade > 150){
        printf("Entrada invalida!\n");
        return 1;
    }

    printf("Digite a matricula do aluno: ");
    if(scanf(" %49[^\n]", matricula) != 1 || matricula[0] == '\0'){ //limitando a leitura para 49 e verificando se a matricula não está vazio.
        printf("Entrada invalida!\n");
        return 1;
    }

    printf("Digite as tres notas do aluno: ");
    if(scanf("%lf %lf %lf", &nota1, &nota2, &nota3) != 3 || nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10){
        printf("Entrada invalida!\n");
        return 1;
    }

    media = (nota1 + nota2+ nota3)/ 3.0;

    printf("\n--- Informacoes do Aluno ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Matricula: %s\n", matricula);
    printf("Nota 1: %.2lf\n", nota1);
    printf("Nota 2: %.2lf\n", nota2);
    printf("Nota 3: %.2lf\n", nota3);
    printf("Media: %.2lf\n", media);

    return 0;
}