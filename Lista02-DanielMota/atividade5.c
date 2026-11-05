#include <stdio.h>

int main(void){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("O maior numero e %d", num1);
    } else if(num2 > num1){
        printf("O maior numero e %d", num2);
    } else {
        printf("Os numeros sao iguais");
    }

    return 0;
}