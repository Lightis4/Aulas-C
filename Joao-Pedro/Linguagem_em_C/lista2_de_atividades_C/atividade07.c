#include <stdio.h>

int main(void)
{

    double numero1, numero2, resultado;
    char operacao;

    char titulo[] = "(------Caulculadora-------)\n";

    printf("%s", &titulo);

    printf("Escolha uma das operacoes (+,-,/,*,): ");
    scanf("%c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);

    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero2);

    if (operacao == '+')
    {
        resultado = (numero1 + numero2);
        printf("Resultado da soma: %.2f\n", resultado);
    }
    else if (operacao == '-')
    {
        resultado = (numero1 - numero2);
        printf("Resultado da subtacao: %.2f\n", resultado);
    }
    else if (operacao == '*')
    {
        resultado = (numero1 * numero2);
        printf("Resultado da multiplicacao: %.2f\n", resultado);
    }
    else if (operacao == '/')
    {
        if (numero2 == 0)
        {
            printf("Erro: Nao e possivel dividir por zero!\n");
        }
        else
        {
            resultado = (numero1 / numero2);
            printf("Resultado da divisao: %.2f\n", resultado);
        }
    }
    else
    {
        printf("Operacao invalida!\n");
    }
    
    return 0;
}