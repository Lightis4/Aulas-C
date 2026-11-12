#include <stdio.h>
int main(void){
    float salario;
    float parcela;

    printf("Digite seu salario mensal: ");
    scanf("%f", &salario);

    printf("Digite o valor da parcela: ");
    scanf("%f", &parcela);

    if (salario<=0 || parcela<=0)
    {
        printf("Invalido!\n");
    }
    else if (parcela <= salario*0.30)
    {
        printf("Emprestimo aprovado!\n");
    }
    else
    {
        printf("Emprestimo negado!\n");
    }
    return 0;
}