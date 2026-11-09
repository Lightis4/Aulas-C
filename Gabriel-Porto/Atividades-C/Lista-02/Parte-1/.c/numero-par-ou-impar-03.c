#include <stdio.h>
int main (void) {
    int numero_user;
    printf ("Digite um numero inteiro aleatorio: ");
    if (scanf ("%d", &numero_user) != 1) {
        printf ("Entrada invalida, verifique o tipo primitivo");
        return 1;
    }
    // evitar que caia em dois if gosto sempre de encadear meio que as condicionais
    else {
        if (numero_user % 2 == 0) {
            printf ("O numero %d e PAR", numero_user);
        }
        else {
            printf ("O numero %d e IMPAR", numero_user);
        }
    }
    return 0;
}