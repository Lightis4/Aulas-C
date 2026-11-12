//Questão 06 — Classificação de notas
//Solicite a nota final de um aluno, entre 0 e 10, e classifique conforme a tabela. Notas fora de 0 a 10 são inválidas.

#include <stdio.h>

int main(void) {
    float nota_final;

    printf("Digite a nota final: ");
    scanf("%f", &nota_final);

    if (nota_final >= 9 && nota_final <= 10) {
        printf("Nota: %.1f - Situação: Excelente.\n", nota_final);
    }
    else if (nota_final >= 7 && nota_final < 9) {
        printf("Nota: %.1f - Situação: Bom.\n", nota_final);
    }
    else if (nota_final >= 5 && nota_final < 7) {
        printf("Nota: %.1f - Situação: Recuperação.\n", nota_final);
    }
    else if (nota_final >= 0 && nota_final < 5) {
        printf("Nota: %.1f - Situação: Reprovado.\n", nota_final);
    }
    else {
        printf("Você digitou uma nota inválida.\n");
    }

    return 0;
}
