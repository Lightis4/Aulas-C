// Questão 13 — Sistema de empréstimo bancário
// Solicite salário mensal e valor da parcela. Aprove somente se a parcela representar no máximo
// 30% do salário. Rejeite valores não positivos.


#include <stdio.h>

int main(void) {
    float salario;
    float parcela;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    printf("Digite o valor da parcela: ");
    scanf("%f", &parcela);

    if (parcela <= 0 || salario <= 0) {
        printf("Valor INVALIDO!\n");
    }

    else {
        if (parcela <= salario * 0.30) {
            printf("Emprestimo APROVADO!\n");
        }
        else {
            printf("Emprestimo REPROVADO!\n");
        }
    }

    return 0;
}