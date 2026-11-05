/*
Solicite três notas de um estudante, calcule a média aritmética e apresente o resultado com duas casas decimais*/

#include <stdio.h>
 int main (void){
    float nota1, nota2, nota3, media;
    printf("A primeira nota foi:");
    scanf("%f",&nota1);
    printf("A segunda nota foi: ");
    scanf("%f",&nota2);
    printf("A terceira nota foi: ");
    scanf("%f",&nota3);

    media = (nota1+nota2+nota3)/3;
    
    printf("A media foi : %.2f ",media);
    return 0;
 }

