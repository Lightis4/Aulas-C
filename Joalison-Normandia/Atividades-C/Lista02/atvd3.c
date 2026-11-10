#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero que seja inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O seu numero e par\n");
    } else {
        printf("O sseu numero e impar\n");
    } 

    return 0;
} 