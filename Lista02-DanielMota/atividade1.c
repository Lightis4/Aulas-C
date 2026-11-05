#include <stdio.h>

int main(void){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero > 0){
        printf("Numero positivo\n");
    } else if (numero < 0){
        printf("Numero negativo\n");
    } else {
        printf("O numero e igual a 0\n");
    }

    return 0;
}