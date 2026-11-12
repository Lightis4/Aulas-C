// Questão 12 — Verificador de ano bissexto
// Solicite um ano e determine se é bissexto: divisível por 400 ou divisível por 4, mas não por 100.

#include <stdio.h>

int main (void){
    int ano;

    printf("==== Ano Bissexto ====\n");

    printf("Digite o ano que voce deseja verificar: ");
    scanf("%d", &ano);

    if((ano % 400 == 0 || ano % 4 == 0) & !(ano % 100 == 0)){
        printf("O ano %f e Bissexro!", ano);
    }

    else{
        printf("O ano %f nao e Bissexto!", ano);
    }
}