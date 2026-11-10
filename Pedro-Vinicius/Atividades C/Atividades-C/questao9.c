#include <stdio.h>

int main(void){
    double salario, bonus, salarioFinal;

    printf("Digite o salario: ");
    if(scanf("%lf", &salario) != 1 || salario < 0){ // || salario < 0 verifica se o salario é negativo
        printf("Entrada invalida!\n");
        return 1;
    }

    printf("Digite o bonus: ");
    if(scanf("%lf", &bonus) != 1 || bonus < 0){
        printf("Entrada invalida!\n");
        return 1;
    }

    salarioFinal = salario + bonus;
    printf("Salario Total: R$%.2lf\n", salarioFinal);
    return 0;
}