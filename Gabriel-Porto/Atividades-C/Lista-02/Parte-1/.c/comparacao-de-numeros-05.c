#include <stdio.h>
int main (void) {
    int numero_1, numero_2;
    printf ("Digite um numero inteiro aleatorio: ");
    if (scanf ("%d", &numero_1) != 1) {
        printf ("Entrada Invalida, verifique o tipo primitivo e tente novamente");
        return 1;
    }
    printf ("Digite outro numero inteiro aleatorio: ");
    if (scanf ("%d", &numero_2) != 1) {
        printf ("Entrada Invalida, verifique o tipo primitivo e tente novamente");
        return 1;
    }
    else {
        if (numero_1 > numero_2) {
            printf ("O numero %d e maior que %d", numero_1, numero_2);
        }
        else if (numero_2 > numero_1) {
            printf ("O numero %d e maior que %d", numero_2, numero_1);
        }
        else {
            printf ("O numero %d e igual a %d", numero_1, numero_2);
        }
    }
    return 0;
}