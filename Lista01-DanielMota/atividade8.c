#include <stdio.h>

int main(void){
    int ano, calcular;

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano);

    calcular = 2026 - ano;
    printf("Sua idade: %d\n", calcular);
    
    return 0;
}