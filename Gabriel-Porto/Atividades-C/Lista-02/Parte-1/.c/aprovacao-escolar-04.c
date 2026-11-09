#include <stdio.h>
int main (void) {
    int media_final;
    printf ("Digite sua media final: ");
    if (scanf ("%d", &media_final) != 1) {
        printf ("Entrada Invalida, verifique o tipo primitivo digitado");
        return 1;
    }
    else {
        if (media_final >= 7) {
            printf ("APROVADO PATRAO");
        }
        else if (media_final < 7){
            printf ("REPROVADO F DMS");
        }
    }
    return 0;
}