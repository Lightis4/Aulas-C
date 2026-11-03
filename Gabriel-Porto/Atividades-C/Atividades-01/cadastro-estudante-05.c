#include <stdio.h>
int main (void) {
    char inicial_home [1] = "";
    double nota;
    int idade;
    printf ("Digite a inicial do seu nome: ");
    scanf (" %s\n", inicial_home);
    printf ("Digite sua nota: ");
    scanf ("%lf", &nota);
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);
    printf ("Inicial do seu nome => %s\n", inicial_home);
    printf ("Sua nota e => %.2f\n", nota);
    printf ("Sua idade e => %d\n", idade);
    return 0;
}