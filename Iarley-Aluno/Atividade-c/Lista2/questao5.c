#include <stdio.h>

int main(){
    int numero1;
    int numero2;

    printf("digite o primeiro numero:");
    scanf("%d", &numero1);

    printf("digite o segundo numero: ");
    scanf("%d", &numero2);

    if (numero1>numero2){
        printf("o numero um e maior");
    } else if (numero2>numero1){
        printf("o numero dois e maior");
    } else{
        printf("sao iguais");
    }
    return 0;
}