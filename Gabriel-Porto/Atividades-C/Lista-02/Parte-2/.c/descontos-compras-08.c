#include <stdio.h>
int main (void) {
    double valor_compra, valor_final;
    double desconto_5 = 0.95, desconto_10 = 0.90, desconto_15 = 0.85; // fator de desconto (1(100%)-taxa(%))
    printf ("Digite o valor da sua compra (R$): ");
    if (scanf ("%lf", &valor_compra) != 1) {
        puts ("Entrada Invalida, verifique o tipo primitivo digitado"); // puts e put string exibi apenas char e ja quebra a linha automatico
        return 1;
    }
    if (valor_compra < 0) {
        printf ("Valor digitado invalido voce digitou %.2f verifique e tente novamente", valor_compra);
    }
    else {
        if (valor_compra < 100) {
            printf ("Sem desconto (0%%), valor total: %.2f\n", valor_compra);
        }
        else if (valor_compra >= 100 && valor_compra <= 299.99) {
            valor_final = valor_compra * desconto_5;
            printf ("Com desconto (5%%), valor total: %.2f\n", valor_final);
        }
        else if (valor_compra >= 300 && valor_compra <= 499.99) {
            valor_final = valor_compra * desconto_10;
            printf ("Com desconto (10%%), valor total: %.2f\n", valor_final);
        }
        else if (valor_compra >= 500) {
            valor_final = valor_compra * desconto_15;
            printf ("Com desconto (15%%), valor total: %.2f\n", valor_final);
        }
    }
    return 0;
}