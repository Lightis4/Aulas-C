#include <stdio.h>
    int main(void) {
        float num1, soma;
        printf("digite um numero: ");
        scanf("%f", &num1);
        float num2;
        printf("digite outro numero: ");
        scanf("%f", &num2);
        
        soma = num1 + num2;
        printf("seu valor somado e: %.1f", soma);
    }