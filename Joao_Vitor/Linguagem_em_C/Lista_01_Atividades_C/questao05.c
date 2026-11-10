#include <stdio.h>

int main(void) {
    int idade;
    char inicial;
    float nota;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a inicial do nome: ");
    scanf(" %c", &inicial);
    printf("Digite a nota da avaliacao: ");
    scanf("%f", &nota);

    printf("\n--- Cadastro de estudante ---\n");
    printf("Inicial: %c\n", inicial);
    printf("Idade  : %d\n", idade);
    printf("Nota   : %.2f\n", nota);
    return 0;
}
