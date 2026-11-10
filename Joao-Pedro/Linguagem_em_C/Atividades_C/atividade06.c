#include <stdio.h>

int main(void){

    int numero1, numero2, soma;

    printf("Digite o primero numero: ");
    scanf(" %d", &numero1);

    printf("Digite o segundo numero: ");
    scanf(" %d", &numero2);

    soma = numero1 + numero2;

    printf("A soma e: %d\n", soma);

    return 0;
}