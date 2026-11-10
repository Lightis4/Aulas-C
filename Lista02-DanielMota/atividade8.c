#include <stdio.h>

int main(void){
    float compra, desconto, compra_desconto;

    printf("Digite o valor da sua compra: ");
    scanf("%f", &compra);

    if (compra < 100){
        printf("O valor abaixo de 100 fica: %.2f", compra);

    } else if (compra <= 299.99){
        desconto = compra * 0.05;
        compra_desconto = compra - desconto;
        printf("5%% de desconto: %.2f", compra_desconto);

    } else if (compra <= 499.99){
        desconto = compra * 0.10;
        compra_desconto = compra - desconto;
        printf("10%% de desconto: %.2f", compra_desconto);

    } else {
        desconto = compra * 0.15;
        compra_desconto = compra - desconto;
        printf("15%% de desconto: %.2f", compra_desconto);
    }
}