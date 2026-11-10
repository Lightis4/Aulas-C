#include <stdio.h>

int main(void) {
    char nome;
    int idade;
    float nota;

    printf("Digite as suas credenciais:\n");

    if (scanf(" %c %d %f", &nome, &idade, &nota) != 3) {
        printf("Entrada invalida\n");
        return 1;
    }

    printf("Nome: %c\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Nota: %.1f\n", nota);

    return 0;

}