#include <stdio.h>
int main (void) {
    // caso o usuario digite menos caractere do que permitido tipo digite na matricula digite menos que 8 caracteres
    char nome_aluno [51];
    char matricula [9];
    double nota_1, nota_2, nota_3;
    double media;
    double quantidade_notas = 3;
    printf ("Digite apenas seu primeiro nome: ");
    scanf ("%51s", &nome_aluno);
    printf ("Digite sua matricula: ");
    scanf ("%9s", &matricula);
    printf ("Digite sua primeira nota: ");
    scanf ("%lf", &nota_1);
    printf ("Digite sua segunda nota: ");
    scanf ("%lf", &nota_2);
    printf ("Digite sua terceira nota: ");
    scanf ("%lf", &nota_3);
    printf ("\nRELATORIO GERAL");
    printf ("\nSeu nome e %s\n", nome_aluno);
    printf ("Sua matricula e %s\n", matricula);
    media = (nota_1 + nota_2 + nota_3) / quantidade_notas;
    printf ("A media das notas %.2f | %.2f | %.2f e igual a |%.2f|", nota_1, nota_2, nota_3, media);
    return 0;
}