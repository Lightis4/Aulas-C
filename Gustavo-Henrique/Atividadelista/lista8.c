/*
Questão 08 — Calculadora de idade
Solicite o ano de nascimento e calcule a idade aproximada considerando o ano de 2026.
*/

#include<stdio.h>

int main(void){

int anoatual = 2026;
int anodenascimento, idade;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anodenascimento);

    idade = (anoatual - anodenascimento);

    printf("Sua idade atual e %d anos", idade);

return 0;
}