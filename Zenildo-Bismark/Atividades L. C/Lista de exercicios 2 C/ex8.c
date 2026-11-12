// Questão 08 — Desconto em compras
// Solicite o valor da compra e apresente o desconto e o valor final. Rejeite valores negativos.
// Valor da compra Desconto
// Abaixo de R$ 100 0%
// R$ 100 a R$ 299,99 5%
// R$ 300 a R$ 499,99 10%
// R$ 500 ou mais 15%

#include <stdio.h>

int main(void){
    float valor_compra;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    if (valor_compra < 0){
        printf("Valor INVÁLIDO!");
    }

    else if(valor_compra < 100){
        printf("Sua compra foi de R$: %.2f, e infelizmente voce nao ganhou desconto", valor_compra);
    }

    else if(valor_compra < 300){
        printf("Sua compra foi de R$: %.2f, e seu desconto sera de 5%%. O valor final e: %.2f", valor_compra, valor_compra - (0.05 * valor_compra));
    }

    else if(valor_compra < 500){
        printf("Sua compra foi de R$: %.2f, e seu desconto sera de 10%%. O valor final e: %.2f", valor_compra, valor_compra - (0.10 * valor_compra));
    }

    else{
        printf("Sua compra foi de R$: %.2f, e seu desconto sera de 15%%. O valor final e: %.2f", valor_compra, valor_compra - (0.15 * valor_compra));
    }
}