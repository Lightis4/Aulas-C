#include <stdio.h>
int main (void) {
    int idade_user;
    printf ("Digite sua idade: ");
    if (scanf ("%d", &idade_user) != 1) {
        printf ("Entrada Invalida, verifique o tipo primitivo");
        return 1;
    }
    if (idade_user > 18) {
        printf ("Voce e maior de idade");
    }
    else {
        printf ("Voce e menor de idade");
    }
    return 0;
}