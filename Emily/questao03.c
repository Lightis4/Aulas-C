#include <stdio.h>

int main(void){
    char nome[30] = "Emily";
    int idade = 18;
    float nota = 8.0f;

    printf("nome: %c\n", nome);
    printf("Idade: %d\n", idade);
    printf("Nota: %.1f\n", nota);
    return 0;
}