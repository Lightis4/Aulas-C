#include <stdio.h>

int main(void) {
    double salarioFuncionario = 1621.00;
    double bonus = 150.50;

    printf("salario sem bonus: %.2f\n", salarioFuncionario);
    printf("salario com bonus: %.2f\n", salarioFuncionario + bonus);


    return 0;
}