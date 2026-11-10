#include <stdio.h>

int main(void) {
    float salario, bonus, total;

    printf("Digite o salario do funcionario: R$ ");
    scanf("%f", &salario);
    printf("Digite o valor do bonus: R$ ");
    scanf("%f", &bonus);

    total = salario + bonus;
    printf("Salario total: R$ %.2f\n", total);
    return 0;
}
