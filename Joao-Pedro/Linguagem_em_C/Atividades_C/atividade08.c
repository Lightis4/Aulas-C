#include <stdio.h>

int main(void){

    int nascimento, idade;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &nascimento);

    idade = 2026 - nascimento;

    printf("Voce tem: %d anos\n", idade);

    return 0;

}