#include <stdio.h>

int main(void){
    float salario_mensal, valor_parcela;

    printf("Digite o salario mensal: ");
    scanf("%f", &salario_mensal);

    printf("Digite o valor da parcela: ");
    scanf("%f", &valor_parcela);

    if (valor_parcela < 0 || salario_mensal < 0){
        printf("Valor negativo. Rejeitado.");

    } else if(valor_parcela <= (salario_mensal * 0,30)){
        printf("Valor aprovado.");

    } else {
        printf("Valor rejeitado.");

    }
}