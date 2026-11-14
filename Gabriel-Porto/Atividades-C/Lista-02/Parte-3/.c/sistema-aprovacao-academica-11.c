#include <stdio.h>
int main (void) {
    double nota_1, nota_2, nota_3, quantidade_notas = 3;
    printf ("Digite suas notas respectivamente (nota1 nota2 nota3) com espacos: ");
    if (scanf ("%lf", &nota_1) != 1 || scanf ("%lf", &nota_2) != 1 || scanf ("%lf", &nota_3) != 1) {
        puts ("Entrada Invalida, verifique o tipo primitivo digitado");
        return 1;
    }
    double media = (nota_1 + nota_2 + nota_3) / quantidade_notas;
    if (nota_1 < 0 || nota_2 < 0 || nota_3 < 0) {
        puts ("Nao existe nota negativa");
    }
    else {
        if (media >= 7) {
            printf ("Aprovado com %.2f de media", media);
        }
        else if (media >= 5 && media < 7) {
            printf ("Recuperacao com %.2f de media", media);
        }
        else if (media < 5) {
            printf ("Reprovado com %.2f de media", media);
        }
    }
    return 0;
}