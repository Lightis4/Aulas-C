// Questão 09 — Calculadora de salário
// Solicite o salário de um funcionário e o valor de um bônus. Calcule e apresente o salário total.

#include <stdio.h>

int main(void){
    float salario;
    float bonus;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Qual o valor do bonus: ");
    scanf("%f", &bonus);

    printf("O valor do seu salario com o bonus e: R$ %.2f", salario + bonus);

    return 0;
}