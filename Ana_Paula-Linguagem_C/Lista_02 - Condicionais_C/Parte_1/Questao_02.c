//Questão 02 — Maioridade
//Solicite a idade de uma pessoa e informe se ela é maior ou menor de idade. Considere 18 anos como maioridade.

#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >=18) {
        printf("A pessoa é MAIOR DE IDADE\n");
    }
    else if (idade < 18 && idade > 0) {
        printf("A pessoa é MENOR DE IDADE\n");
    }
    else {
        printf("Você digitou uma idade inválida.\n");
    }

    return 0;
}