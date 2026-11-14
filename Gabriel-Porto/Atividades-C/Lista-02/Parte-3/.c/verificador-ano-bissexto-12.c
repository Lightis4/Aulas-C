#include <stdio.h>
int main (void) {
    int ano_digitado;
    printf ("Digite um ano qualquer (ex: 2026): ");
    if (scanf ("%d", &ano_digitado) != 1) {
        puts ("Entrada Invalida, verifique o tipo primitivo digitado");
        return 1;
    }
    if ((ano_digitado % 4 == 0 && ano_digitado % 100 != 0) || (ano_digitado % 400 == 0)) {
        printf ("O ano de %d e bissexto", ano_digitado);
    }
    else {
        printf ("O ano de %d nao e bissexto", ano_digitado);
    }
    return 0;
}