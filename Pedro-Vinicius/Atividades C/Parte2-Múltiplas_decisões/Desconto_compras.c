#include <stdio.h>

int main(void){
    double valor_compra, desconto,valor_desconto, valor_final;
    printf("Digite o valor da compra: ");
    if(scanf("%lf", &valor_compra) != 1 || valor_compra < 0.0){
        printf("Entrada invalida\n");
        return 1;
    }

    if(valor_compra >= 500.0){
        desconto = 0.15;
    } else if(valor_compra >= 300.00){
        desconto = 0.10;
    }else if(valor_compra >= 100.00){
        desconto = 0.05;
    }else{
        desconto = 0.0;
    }

    valor_desconto = valor_compra * desconto;
    printf("Valor do desconto: %.2lf\n", valor_desconto);
    valor_final = valor_compra - valor_desconto;
    printf("Valor final: %.2lf\n", valor_final);
    return 0;
}