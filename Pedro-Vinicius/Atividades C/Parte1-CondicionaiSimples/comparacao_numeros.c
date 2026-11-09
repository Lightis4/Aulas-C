#include <stdio.h>

int main(void){
    int numero1 , numero2;
    printf("Digite o primeiro numero: ");
    if(scanf("%d", &numero1) != 1){
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite o segundo numero: ");
    if(scanf("%d", &numero2) != 1){
        printf("Entrada invalida\n");
        return 1;
    }

    if(numero1 > numero2){
        printf("O numero %d e maior que o numero %d\n", numero1, numero2);
    }else if(numero1 < numero2){
        printf("O numero %d e menor que o numero %d\n", numero1, numero2);
    }else{
        printf("Os numeros sao iguais\n");
    }

    return 0;
}