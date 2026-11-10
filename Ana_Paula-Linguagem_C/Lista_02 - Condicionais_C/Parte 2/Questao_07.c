//Questão 07 — Calculadora simples
//Solicite dois números e uma operação matemática: soma (+), subtração (-), multiplicação (*) ou divisão (/). Use condicionais para identificar a operação e impedir divisão por zero.

#include <stdio.h>

int main(void) {
    char opcao;
    float n1, n2, resultado;
    
    printf("Digite o primeiro número: \n");
    scanf("%f", &n1);

    printf("Digite o segundo número: \n");
    scanf("%f", &n2);
    
    printf("\n-- Lista de Operações --\n");
    printf(" + para Adição\n");
    printf(" - para Subtração\n");
    printf(" * para Multiplicação\n");
    printf(" / para Divisão\n");
    
    printf("\nEscolha a operação desejada: \n");
    scanf(" %c", &opcao);

    if (opcao == '+') {
        resultado = n1 + n2;
        printf("Cálculo: %.2f + %.2f = %.2f",n1, n2, resultado);
    }

    else if (opcao == '-') {
        resultado = n1 - n2;
        printf("Cálculo: %.2f - %.2f = %.2f \n",n1, n2, resultado);
    }

    else if (opcao == '*') {
        resultado = n1 * n2;
        printf("Cálculo: %.2f * %.2f = %.2f \n",n1, n2, resultado);
    }

    else if (opcao == '/') {
        if (n2 != 0) {
            resultado = n1/n2;
            printf("Cálculo: %.2f / %.2f = %.2f \n",n1, n2, resultado);
        }
        else {
            printf("Não é possível dividir por zero!\n");
        }
    }
    else {
        printf("Você escolheu uma operação não definida.\n");
    }
    
    return 0;
}