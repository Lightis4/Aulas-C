// Questão 03 — Número par ou ímpar
// Solicite um número inteiro e determine se ele é par ou ímpar. Dica: utilize o operador % para
// verificar o resto da divisão.

#include <stdio.h>


int main(void){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("O numero %d E PAR", numero);
    }

    else{
        printf("O numero %d E IMPAR", numero);
    }

    return 0;
}