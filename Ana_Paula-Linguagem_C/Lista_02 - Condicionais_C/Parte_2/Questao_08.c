//Questão 08 — Desconto em compras
//Solicite o valor da compra e apresente o desconto e o valor final. Rejeite valores negativos.

#include <stdio.h>

int main(void) {
    float valor_compra, desconto, valor_desconto, valor_final;
    
    printf("Digite o valor da compra: \n");
    scanf("%f", &valor_compra);
    
    if (valor_compra >= 0 && valor_compra < 100){
        desconto = 0;
    }
    else if (valor_compra >= 100 && valor_compra < 300){
        desconto = 0.05;
    }
    else if (valor_compra >= 300 && valor_compra < 500){
        desconto = 0.1;
    }
    else if (valor_compra >= 500){
        desconto = 0.15;
    }
    else {
        printf("\nValor de compra informado inválido!\n");
        return 1;
    }
    
    valor_desconto = valor_compra*desconto;
    valor_final = valor_compra - valor_desconto;

    printf("\nValor da compra: R$%.2f \n", valor_compra);
    printf("Valor do desconto: R$%.2f \n", valor_desconto);
    printf("Valor final: R$%.2f \n", valor_final);
    
    return 0;
}