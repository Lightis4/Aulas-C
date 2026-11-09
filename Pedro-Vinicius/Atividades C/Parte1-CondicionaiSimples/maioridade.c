#include <stdio.h>

int main(void){
    int numero;
    printf("Digite a sua idade: ");

    if(scanf("%d", &numero) != 1){
        printf("Entrada invalida\n");
        return 1;
    }

    if(numero >= 18){
        printf("Voce e maior de idade\n");
    }else{
        printf("Voce e menor de idade\n");
    }
    return 0;
}