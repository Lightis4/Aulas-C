#include <stdio.h>
int main(void) {
    float salario, bonus, salario_total;
    printf("Digite o salario base do funcionario: R$ ");
    scanf("%f", &salario);
    printf("Digite o valor do bonus: R$ ");
    scanf("%f", &bonus);
    salario_total = salario + bonus;
    printf("O salario total a receber e: R$ %.2f\n", salario_total);
    return 0;
}