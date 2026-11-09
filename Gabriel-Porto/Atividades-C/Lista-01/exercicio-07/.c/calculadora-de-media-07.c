#include <stdio.h>
int main (void) {
    double nota_1, nota_2, nota_3;
    int quantidade_notas = 3; // clean code
    double media_artimetica;
    printf ("Digite sua primeira nota: ");
    scanf ("%lf", &nota_1);
    printf ("Digite sua segunda nota: ");
    scanf ("%lf", &nota_2);
    printf ("Digite sua terceira nota: ");
    scanf ("%lf", &nota_3);
    media_artimetica = (nota_1 + nota_2 + nota_3) / quantidade_notas;
    printf ("A media das notas: %.2f, %.2f, %.2f e igual a %.2f", nota_1, nota_2, nota_3, media_artimetica);
    return 0;
}