// Questão 08 — Calculadora de idade
// Solicite o ano de nascimento e calcule a idade aproximada considerando o ano de 2026.

#include <stdio.h>

int main(void){
    int nascimento;
    //int idade;

    printf("Digite sua data de nascimento: ");
    scanf("%d", &nascimento);

    //idade = 2026 - nascimento;

    printf("Sua idade aprocimada e: %d", 2026 - nascimento);
}