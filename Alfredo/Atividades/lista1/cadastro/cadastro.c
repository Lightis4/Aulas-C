#include <stdio.h>
    int main(void) {
        int idade;
        printf("digite sua idade: ");
        scanf("%d", &idade);
        char nome [10];
        printf("digite seu nome: ");
        scanf("%s", &nome);
        float nota;
        printf("digite sua nota: ");
        scanf("%f", &nota);
        printf("idade: %d anos\n", idade);
        printf("seu nome e: %s\n", nome);
        printf("sua nota: %.1f\n", nota);
    }