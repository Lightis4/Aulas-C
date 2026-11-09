#include <stdio.h>
int main (void) {
    int ano_nascimento;
    int ano_atual = 2026;
    int idade;
    printf ("Digite seu ano de nascimento: ");
    scanf ("%d", &ano_nascimento);
    idade = ano_atual - ano_nascimento;
    // caso eu realmente quisesse que o usuario digitasse 4 digitos eu conseguiria armazenar um char delimitar com 4 caracteres e converte para inteiro? 
    if (ano_nascimento > ano_atual || idade > 120 || idade < 0) {
        printf ("Por favor digite um valor valido\n");
        return 1;
    }
    else if (idade == 0) {
        printf ("Spawnou no server hj moral?");
    }
    else  {
        idade = ano_atual - ano_nascimento;
        printf ("Sua idade e %d\n", idade);
    }
}