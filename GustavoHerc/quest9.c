/*
Solicite o salário de um funcionário e o valor de um bônus. Calcule e apresente o salário total.*/

#include <stdio.h>
int main(void) {
    float salario, bonus, sal_total;

    printf("Informe o seu salario: " );
    scanf("%f",&salario);

    printf("O seu bonus e: ");
    scanf("%f",&bonus);

    sal_total = (salario + bonus);

    printf("O salario total e: %.2f ",sal_total);

    return 0;
}