#include <stdio.h>

int main(void){
    int numero;
    printf("DIgite um numero:");

    if((scanf("%d", &numero) != 1)){
        printf("Entrada invalida\n");
        return 1;
    }

    if(numero % 2 == 0){
        printf("O numero %d e par\n", numero);
    }else{
        printf("O numero %d e impar\n", numero);
    }

    return 0;
}