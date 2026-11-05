#include <stdio.h>

int main(void){
    float salario, bonus, salario_bonus;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    bonus = salario * 0.15;
    salario_bonus = salario + bonus;
    printf("O salario mais o bonus fica: %.2f\n", salario_bonus);
}