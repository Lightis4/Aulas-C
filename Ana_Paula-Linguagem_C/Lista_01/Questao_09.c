//Questão 09 — Calculadora de salário
//Solicite o salário de um funcionário e o valor de um bônus. Calcule e apresente o salário total.

#include <stdio.h>

int main(void) {
    float salario, bonus, salario_total;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    printf("Digite o bônus: ");
    scanf("%f", &bonus);

    salario_total = salario + bonus;

    printf("\nO salário total é: %.2f \n", salario_total);

    return 0;
}