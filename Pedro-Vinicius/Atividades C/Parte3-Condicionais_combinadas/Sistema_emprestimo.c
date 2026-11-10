#include <stdio.h>

int main(void){
    double salario_mensal, valor_parcela , margemMaxima;

    printf("Digite seu salario mensal: ");
    if(scanf("%lf", &salario_mensal) != 1 || salario_mensal <= 0){
        printf("Entrada invalida.\n");
        return 1 ;
    }

    printf("Digite o valor da parcela:");
    if(scanf("%lf", &valor_parcela) !=1 || valor_parcela <= 0){
        printf("Entrada invalida.\n");
        return 1;
    }

     margemMaxima = salario_mensal * 0.30;// Calculando o maximo de 30% do salario

     printf("Margem maxima: R$ %.2lf\n", margemMaxima);
     printf("Valor da parcela: R$ %.2lf\n", valor_parcela);

     if (valor_parcela <= margemMaxima)
     {
         printf("Status : Aprovado ! A parcela cabe no seu orcamento. \n");
     } else{
        printf("Status : Reprovado ! A parcela excede 30%% do seu salario.\n");
    }


    return 0;
}