#include <stdio.h>

int main(void){
    int anoNascimento;
    int AnoAtual = 2026;

    printf("Digite o ano de nascimento: ");

    if(scanf("%d", &anoNascimento) != 1){
        printf("Entrada invalida!\n");
        return 1;
    }

    if(anoNascimento < 1900 || anoNascimento > AnoAtual) {
        printf("Ano de nascimento invalido!\n");
        return 1;
    }

    printf("Idade: %d anos\n", AnoAtual - anoNascimento);
}