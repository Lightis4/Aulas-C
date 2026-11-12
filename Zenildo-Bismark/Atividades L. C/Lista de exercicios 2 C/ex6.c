// Questão 06 — Classificação de notas
// Solicite a nota final de um aluno, entre 0 e 10, e classifique conforme a tabela. Notas fora de 0 a
// 10 são inválidas.
// Nota Situação
// 9 a 10 Excelente
// 7 a menos de 9 Bom
// 5 a menos de 7 Recuperação
// Abaixo de 5 Reprovado


#include <stdio.h>

int main(void) {
    float nota;
    char nome[100];

    printf("Digite seu nome: ");
    scanf(" %99[^\n]", nome);

    printf("Digite sua nota entre 0 e 10: ");
    scanf("%f", &nota);

    if (nota > 10 || nota < 0) {
        printf("A nota %.2f esta fora dos requisitos do sistema!\n", nota);
    }
    else if (nota >= 9) {
        printf("%s, sua nota %.2f foi considerada EXCELENTE!\n", nome, nota);
    }
    else if (nota >= 7) {
        printf("%s, sua nota %.2f foi considerada BOA!\n", nome, nota);
    }
    else if (nota >= 5) {
        printf("%s, sua nota %.2f foi considerada RECUPERACAO!\n", nome, nota);
    }
    else {
        printf("%s, sua nota %.2f foi considerada REPROVADO!\n", nome, nota);
    }

    return 0;
}
