#include <stdio.h>

int main(void) {
    double salario, parcela;

    printf("Digite o salario mensal: R$ ");
    scanf("%lf", &salario);
    printf("Digite o valor da parcela: R$ ");
    scanf("%lf", &parcela);

    if (salario <= 0 || parcela <= 0) {
        printf("Valores invalidos. Informe numeros positivos.\n");
    } else if (parcela * 10 <= salario * 3) { /* parcela <= 30% do salario */
        printf("Emprestimo aprovado.\n");
    } else {
        printf("Emprestimo negado: a parcela ultrapassa 30%% do salario.\n");
    }
    return 0;
}
