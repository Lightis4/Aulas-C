#include <stdio.h>
int main(void){
    float total;
    float desconto;
    float compra;
    printf("Digite o valor da sua compra: ");
    scanf("%f", &compra);
    if (compra<0)
    {
        printf("Invalido!\n");
    }
    else if (compra>=500)
    {
        desconto = compra*0.15;
        total = compra - desconto;
        printf("Seu desconto seria de: %.2f, ficando um valor total de %.2f\n", desconto, total);
    }
    else if (compra>=300)
    {
        desconto = compra*0.10;
        total = compra - desconto;
        printf("Seu desconto seria de: %.2f, ficando um valor total de %.2f\n", desconto, total);
    }
    else if (compra>=100)
    {
        desconto = compra*0.05;
        total = compra - desconto;
        printf("Seu desconto seria de: %.2f, ficando um valor total de %.2f\n", desconto, total);
    }
    else{
        printf("Voce nao tem desconto, valor total normal: %.2f\n", compra);
    }
    return 0;
}