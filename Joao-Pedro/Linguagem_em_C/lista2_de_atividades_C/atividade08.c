#include <stdio.h>

int main(void)
{

    double compra, valor_desconto, valor_final;

    printf("Digite o valor da compra: ");
    scanf("%lf", &compra);

    // Rejeição de valores negativos
    if (compra < 0)
    {
        printf("Erro: valor invalido (negativo).\n");
    }
    // Abaixo de R$ 100 -> 0%
    else if (compra < 100)
    {
        valor_desconto = 0.0;
        valor_final = compra;
        printf("Desconto: R$ %.2lf (0%%)\n", valor_desconto);
        printf("Valor final: R$ %.2lf\n", valor_final);
    }
    // R$ 100 a R$ 299.99 -> 5%
    else if (compra < 300)
    {
        valor_desconto = compra * 0.05;
        valor_final = compra - valor_desconto;
        printf("Desconto: R$ %.2lf (5%%)\n", valor_desconto);
        printf("Valor final: R$ %.2lf\n", valor_final);
    }
    // R$ 300 a R$ 499.99 -> 10%
    else if (compra < 500)
    {
        valor_desconto = compra * 0.10;
        valor_final = compra - valor_desconto;
        printf("Desconto: R$ %.2lf (10%%)\n", valor_desconto);
        printf("Valor final: R$ %.2lf\n", valor_final);
    }
    // R$ 500 ou mais -> 15%
    else
    {
        valor_desconto = compra * 0.15;
        valor_final = compra - valor_desconto;
        printf("Desconto: R$ %.2lf (15%%)\n", valor_desconto);
        printf("Valor final: R$ %.2lf\n", valor_final);
    }

    return 0;
}