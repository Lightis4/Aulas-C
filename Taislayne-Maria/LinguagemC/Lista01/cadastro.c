#include <stdio.h>

int main() {

    int idade;
    char inicial;
    float nota;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial);

    printf("Digite a nota da avaliacao: ");
    scanf("%f", &nota);

    printf("Idade: %d anos\n", idade);
    printf("Inicial do nome: %c\n", inicial);
    printf("Nota da avaliacao: %.2f\n", nota);

    return 0;
}