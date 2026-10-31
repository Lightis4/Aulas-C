#include <stdio.h>

int main(void) {
    int anoNascimento;
    int anoAtual = 2026;

    printf("Digite seu ano de nascimento: ");

    if (scanf("%d", &anoNascimento) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (anoNascimento < 1900 || anoNascimento > anoAtual) {
        printf("Ano de nascimento invalido.\n");
        return 1;
    }

    printf("Idade aproximada: %d anos\n",
           anoAtual - anoNascimento);

    return 0;
}

//EXPLICAÇÃO
//O operador & em &anoNascimento fornece o endereço da variável para que scanf possa armazenar o valor lido. O retorno de scanf é verificado para detectar uma entrada que não corresponda ao formato esperado.
