/* Questão 13 — Sistema de empréstimo bancário
Solicite salário mensal e valor da parcela. Aprove somente se a parcela representar no máximo 30% do salário. Rejeite valores não positivos.*/

#include <stdio.h>

int main(void) {
    double salario, parcela, porcento;

/*Validação do salário*/    
    printf("Digite o salário: ");

    if (scanf("%lf", &salario) != 1) {
        printf("Salário em formato inválido. Digite como um número, utilizando . para os centavos\n");
        return 1;
    }
    if (salario < 0) {
        printf("Salário INVÁLIDO. Digite um número positivo.\n");
        return 1;
    }
/*Validação da parcela*/
    printf("Digite o valor da parcela: \n");
    if (scanf("%lf", &parcela) != 1) {
        printf("Parcela em formato inválido. Digite como um número, utilizando . para os centavos\n");
        return 1;
    }
    if (parcela < 0) {
        printf("Parcela INVÁLIDA. Digite um número positivo.\n");
        return 1;
    }

    porcento = (parcela/salario)*100;

    if (parcela <= (0.3*salario)) {
        printf("Parcela válida. Ela representa %.2f%% do salário.\n", porcento);
    }
    else {
        printf("Parcela inválida, pois passa de 30%% do salário\n");
    }

    return 0;
}