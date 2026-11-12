/*
Questão 07 — Calculadora de média
Solicite três notas de um estudante, calcule a média aritmética e apresente o resultado com duas casas decimais.
*/

#include<stdio.h>

int main(void){

float nota1, nota2, nota3, media;

printf("========[CALCULADORA DE MEDIA]========\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("A media da nota foi %.2f\n", media);

printf("========[FIM DO CALCULO]========");

return 0;
}