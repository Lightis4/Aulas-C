/* Questão 12 — Verificador de ano bissexto
Solicite um ano e determine se é bissexto: divisível por 400 ou divisível por 4, mas não por 100.*/

#include <stdio.h>

int main(void) {
    int ano;
    char enter;

    printf ("Digite um ano: \n");

//VALIDAÇÃO: Se ler mais de duas coisas já dá erro e se a segunda coisa lida não for enter, também dá erro.
    if (scanf("%d%c", &ano, &enter) != 2 || enter != '\n') {
        printf("Ano em formato inválido. Digite como um número inteiro e dê enter.\n");
        return 1;
    }
//VALIDAÇÃO: A leitura dando certo, se o número for negativo dará erro.
    if (ano <= 0) {
        printf("Ano inválido. Digite um número maior que zero.\n");
        return 1;
    }
    
    if (ano % 4 != 0) {
        printf("O ano %d NÃO é bissexto!\n", ano);
    }
    else {
        if (ano % 100 != 0) {
            printf("O ano %d É bissexto!\n", ano);
        }
        else if (ano % 400 ==0) {
            printf("O ano %d É bissexto!\n", ano);
        }
        else {
            printf("O ano %d NÃO bissexto!\n", ano);
        }
    }

    return 0;
}