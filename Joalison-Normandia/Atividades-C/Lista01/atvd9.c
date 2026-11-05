#include <stdio.h>

int main() {
    float salario, bonus;
    float total = salario + bonus;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite o valor do bonus: ");
    scanf("%f", &bonus);

    printf("Salario: R$ %.2f\n", salario);
    printf("Bonus: R$ %.2f\n", bonus);
    printf("Salario total: R$ %.2f\n", total);

    return 0;
}

// ainda dando 0 