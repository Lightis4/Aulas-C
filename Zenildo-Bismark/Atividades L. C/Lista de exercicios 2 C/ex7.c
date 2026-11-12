// Questão 07 — Calculadora simples
// Solicite dois números e uma operação matemática: soma (+), subtração (-), multiplicação (*) ou
// divisão (/). Use condicionais para identificar a operação e impedir divisão por zero.

#include <stdio.h>

int main(void){
    float n1;
    float n2;
    int op;

    printf("============== CALCULADORA ==============\n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite [1] para realizar a operacao SOMA\n");
    printf("Digite [2] para realizar a operacao SUBTRACAO\n");
    printf("Digite [3] para realizar a operacao MULTIPLICACAO\n");
    printf("Digite [4] para realizar a operacao DIVISAO\n");

    printf("Digite a opcao de operacao desejada: ");
    scanf("%d", &op);

    if (op == 1){
        printf("SOMA: %.2f + %.2f = %.2f", n1, n2, n1 + n2);
    }

    else if (op == 2){
        printf("SUBTRACAO: %.2f - %.2f = %.2f", n1, n2, n1 - n2);
    }

    else if (op == 3){
        printf("MULTIPLICACAO: %.2f x %.2f = %.2f", n1, n2, n1 * n2);
    }

    else {
        if (n2 != 0) {
            printf("DIVISAO: %.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
        }
        else {
            printf("ERRO: nao e possivel dividir por zero!\n");
        }
    }
  
    return 0;
}