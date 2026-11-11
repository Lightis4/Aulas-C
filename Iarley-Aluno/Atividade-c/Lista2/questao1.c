#include <stdio.h>

int main(){
    int numero;
    printf("digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("o numero e positivo \n");
    } else if (numero < 0) {
        printf("o numero e negativo \n");
    } else {
        printf("o numero e igual a 0 \n");
    }

    return 0;
}