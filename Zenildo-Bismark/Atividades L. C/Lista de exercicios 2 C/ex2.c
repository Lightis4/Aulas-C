// Questão 02 — Maioridade
// Solicite a idade de uma pessoa e informe se ela é maior ou menor de idade. Considere 18 anos
// como maioridade.

#include <stdio.h>

int main(void){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Voce e MAIOR DE IDADE!");
    }

    else{
        printf("Voce e MENOR DE IDADE!");
    }

    return 0;
}