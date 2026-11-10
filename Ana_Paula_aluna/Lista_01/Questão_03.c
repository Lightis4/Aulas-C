//Questão 03 — Declarando variáveis
//Declare uma variável char para a inicial do nome, uma int para a idade e uma float para uma nota. Exiba os valores com os especificadores de formato adequados.

#include <stdio.h>

int main(void) {
    char incial_nome = 'A';
    int idade = 37;
    float nota = 9.3;

    printf("Inicial do nome: %c \n", incial_nome);
    printf("Idade: %d \n", idade);
    printf("Notas: %.1f \n", nota);

    return 0;
}