#include <stdio.h>

int main(void){
    int idade = 0;
    char inicial;
    float nota = 0;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial);

    printf("Digite a nota da avaliacao: ");
    scanf("%f", &nota);

    printf("Idade %d\n", idade);
    printf("Inicial do nome: %c\n", inicial);
    printf("Nota: %.1f", nota);

    return 0;
}