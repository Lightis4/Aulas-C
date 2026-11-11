/*
Solicite o ano de nascimento e calcule a idade aproximada considerando o ano de 2026.*/

#include <stdio.h>

int main(void){
    int nasc, idade;
    int ano_atual = 2026;
    printf("Qual o seu ano de nascimento?: ");
    scanf("%d", &nasc);

    idade = (ano_atual-nasc);
    
    printf("A sua idade aproximada e: %d", idade);
    return 0;
}