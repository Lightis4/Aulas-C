// Questão 07 — Calculadora de média
// Solicite três notas de um estudante, calcule a média aritmética e apresente o resultado com duas casas
// decimais.

#include <stdio.h>

int main(void){
    float n1;
    float n2;
    float n3;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf(" %f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("A sua media e: %.2f", (n1 + n2 + n3) / 3);

    return 0;
}