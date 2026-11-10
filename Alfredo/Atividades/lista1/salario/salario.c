#include <stdio.h>
    int main(void){
        printf("Qual seu salario: ");
        float salario, calculo;
        scanf("%f", &salario);
        
        calculo = salario + 300;
        printf("seu salario mais o bonus de 300 reais e de : %.2f", calculo);
    }