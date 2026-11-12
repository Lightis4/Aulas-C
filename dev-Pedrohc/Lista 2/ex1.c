#include <stdio.h>
int main(void){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero>0) {
        printf("Seu numero e positivo!");
    }
    else if (numero<0){
        printf("Seu numero e negativo!");
    }
    else{
        printf("Seu numero e igual a 0!");
    }  
    return 0;
}