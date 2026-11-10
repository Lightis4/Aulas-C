#include <stdio.h>
int main(void) {
    int ano_atual, ano_nascim, idade;

    printf("Digite o ano atual:");
    scanf("%d", &ano_atual);
    
    printf("Digite o ano do seu nascimento:");
    scanf("%d", &ano_nascim);

    idade = ano_atual - ano_nascim;

    printf("Sua idade aproximada e: %d", idade);

    return 0;
}