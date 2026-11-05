/*
Questão 09 — Calculadora de salário
Solicite o salário de um funcionário e o valor de um bônus. Calcule e apresente o salário total.
*/
#include<stdio.h>

int main(void){

float salario, bonus, soma;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    printf("Digite o valor que recebe por um bonus: ");
    scanf("%f", &bonus);

    soma = (salario + bonus);

    printf("O calculo do seu salario + o bonus e %.2f", soma);

return 0;
}