#include <stdio.h>

int main(void){
    int anoNascimento;
    int AnoAtual = 2026;

    printf("Digite seu ano de nascimento: ");

    //a forma de entrada do dados é usada com scanf e atribui o valor digitado  com &
    if(scanf("%d", &anoNascimento) != 1){
        printf("Entrada invalida, \n");
        return 1; //encerrando caso ele retorne um valor diferente
    }

    //Validador se o ano de nascimento faz sentido e não batendo com anos absurdos menores de 1900 ou maior de 2026
    if(anoNascimento < 1900 || anoNascimento > AnoAtual){
        printf("Ano de nascimento invalido. \n");
        return 1;
    }

    printf("Idade aproximada: %d anos \n", AnoAtual - anoNascimento); // o 2026 com o ano de entrada entregando o resultado

    return 0;
}