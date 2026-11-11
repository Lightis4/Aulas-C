#include <stdio.h>

int main(void) {

    float salario, bonus, total;

    printf("Qual o seu salario atual? \n");
    scanf("%f", &salario);

    printf("Qual o valor do seu bonus: \n");
    scanf("%f", &bonus);

    total = salario + bonus;

    printf("O total é: %.2f\n", total);

    return 0;
}
