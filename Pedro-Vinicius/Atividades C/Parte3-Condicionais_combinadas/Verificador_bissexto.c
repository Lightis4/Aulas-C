#include <stdio.h>

int main(void){
    int ano;

    printf("Digite um ano:");
    if(scanf("%d", &ano) != 1 || ano < 0){
        printf("Entrada invalida.\n");
        return 1;
    }

    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
        printf("O ano %d e bissexto. \n", ano);
    } else{
        printf("O ano %d nao e bissexto. \n", ano);
    }

    return 0;
}