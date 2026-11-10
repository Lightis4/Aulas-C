#include <stdio.h>

int main(void){

    double salario, bonus, salario_total;

    printf("Digite o salario: ");
    scanf(" %lf", &salario);

    printf("Digite o bonus: ");
    scanf(" %lf", &bonus);

    salario_total = salario + bonus;

    printf("O salario total e: R$ %.2lf\n", salario_total);

    return 0;
}