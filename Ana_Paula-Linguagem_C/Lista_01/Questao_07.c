//Questão 07 — Calculadora de média
//Solicite três notas de um estudante, calcule a média aritmética e apresente o resultado com duas casas decimais.

#include <stdio.h>

int main(void) {
    float nota_1, nota_2, nota_3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota_1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota_2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota_3);

    media = (nota_1+nota_2+nota_3)/3;

    printf("\nA média das notas é: %.2f \n", media);

    return 0;
}