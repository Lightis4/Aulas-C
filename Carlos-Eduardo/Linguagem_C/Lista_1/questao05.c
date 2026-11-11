#include <stdio.h>
int main(void) {
    int idade;
    char inicial;
    float nota;

    printf("Digite a inicial do seu nome:");
    scanf("%c", &inicial);

    printf("Digite sua idade:");
    scanf("%d", &idade);

    printf("Digite sua nota:");
    scanf("%f", &nota);

    printf("inicial do nome: %c\n""idade: %d\n""nota: %.1f\n", inicial, idade, nota);

    return 0;
}