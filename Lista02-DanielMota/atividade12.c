#include <stdio.h>

int main(void){
    int ano;

    printf("Digite um ano para ver se ele e bissexto: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        printf("O ano e bissexto.");
    } else {
        printf("O ano nao e bissexto.");
    }
}