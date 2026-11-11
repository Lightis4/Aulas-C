#include <stdio.h>

int main(){
    float salario;
    float bonus;
    float total;


    printf("Digite o salario:  ");
    scanf("%f", &salario);

    printf("Digite o valor do bonus: ");
    scanf("%f", &bonus);

    total= salario+bonus;

    printf("Salario total: R$ %.2f\n", total);


    return 0;

}