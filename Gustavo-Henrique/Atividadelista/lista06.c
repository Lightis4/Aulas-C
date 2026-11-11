/*
Questão 06 — Soma de dois números
Solicite dois números inteiros e apresente a soma entre eles. Exemplo: 10 + 5 = 15.
*/

#include<stdio.h>

int main(void){

int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = (num1 + num2);

    printf("O calculo foi %d + %d = %d",
        num1, num2, soma);

return 0;
}