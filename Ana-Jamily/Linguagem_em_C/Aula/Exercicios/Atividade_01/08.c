#include <stdio.h>

int main(void){
    int ano, idade;
    int atual = 2026;

    printf("Qual ano voce nasceu?\n ");
    scanf("%i", &ano);

    idade = atual - ano;

    printf("Você tem:  %i\n", idade);

    return 0;


}