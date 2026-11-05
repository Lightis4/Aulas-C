#include <stdio.h>

int main(void){
    float num1, num2, calculo;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);


    if (operacao == '+'){
        calculo = num1 + num2;
        printf("Soma: %.2f", calculo);

    } else if (operacao == '-'){
        calculo = num1 - num2;
        printf("Subtração: %.2f", calculo);

    } else if (operacao == '*'){
        calculo = num1 * num2;
        printf("Multiplicação: %.2f", calculo);

    } else if (operacao == '/'){
        if (num2 == 0) {
            printf("Erro: nao e possivel dividir por zero.");
        }
        calculo = num1 / num2;
        printf("Divisao: %.2f", calculo);

    } else {
        printf("Operacao Invalida");
    }
}