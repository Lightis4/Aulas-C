/*
Solicite nome, idade, matrícula e três notas. Calcule a média e apresente um relatório com todas as
informações. Use tipos adequados e organize a saída com printf().*/

#include <stdio.h>
int main (void) {
    char nome[20] = ""; 
    int idade, matricula;
    float nota1, nota2, nota3, media;
    
    printf("Digite seu nome: ");
    scanf("%s",&nome);
    
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    
    printf("Digite sua matricula: ");
    scanf("%d",&matricula);

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);
    
    media = (nota1+nota2+nota3)/3;

    printf("Ola, %s\n"
        "Sua idade e: %d\n"
        "Sua matricula e : %d\n"
        "Sua media ficou %.2f :",nome,idade,matricula,media);

        return 0;




}