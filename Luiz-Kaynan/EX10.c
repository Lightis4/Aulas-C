#include <stdio.h>
int main(void) {
    char nome[100];
    int idade;
    int matricula;
    float nota1, nota2, nota3, media;
    printf("Digite o nome completo do aluno: ");
    scanf(" %[^\n]s", nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);
    printf("Digite o numero de matricula: ");
    scanf("%d", &matricula);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf("RELATORIO ACADEMICO\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Matricula: %d\n", matricula);
    printf("Notas Registradas: %.2f | %.2f | %.2f\n", nota1, nota2, nota3);
    printf("Media Final: %.2f\n", media);
    return 0;
}