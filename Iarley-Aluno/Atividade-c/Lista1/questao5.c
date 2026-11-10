#include <stdio.h>

int main () {
    int idade;
    char inicial;
    float nota;
    
    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a inicial: ");
    scanf(" %c", &inicial);

    printf("Digite a nota: ");
    scanf ("%f", &nota);

    printf("Idade: %d\n", idade);
    printf("Inicial: %c\n", inicial);
    printf("Nota: %.2f\n", nota);

    return 0;
}