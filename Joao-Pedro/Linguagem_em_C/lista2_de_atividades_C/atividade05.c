#include <stdio.h>

int main(void){

    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);


    if (numero1 > numero2){
    printf("O primeiro numero %d e maior.\n", numero1);
}
    else if (numero2 > numero1){
    printf("O segundo numero %d e maior.\n", numero2);
}
    else {
    printf("Os dois numeros sao iguais.\n");
}

    return 0;

}  