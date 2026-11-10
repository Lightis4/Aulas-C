#include <stdio.h>
int main(void) {
    char nome[6] = "Kaynan";
    int idade = 18;
    float nota = 9.5f;

    printf("nome: %s\n", nome);
    printf("idade: %d anos\n", idade);
    printf("nota: %.1f\n", nota);

    return 0;
}