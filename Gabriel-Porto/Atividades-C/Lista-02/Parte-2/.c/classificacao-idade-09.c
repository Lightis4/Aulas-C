#include <stdio.h>
int main (void) {
     int idade_user;
     printf ("Digite sua idade: ");
     if (scanf ("%d", &idade_user) != 1) {
        puts ("Entrada Invalida, verifique o tipo primitivo digitado e tente novamente");
        return 1;
     }
     if (idade_user < 0) {
        puts ("Nao existe idade negativo ne patrao"); // gosto de fazer essa verificacao primeiro
     }
     else {
        if (idade_user > 0 && idade_user <= 12) {
            puts ("Menino novo");
        }
        else if (idade_user > 12 && idade_user <= 17) {
            puts ("Puberdade brutal");
        }
        else if (idade_user >= 18 && idade_user <= 59) {
            puts ("Caba maduro");
        }
        else if (idade_user >= 60) {
            puts ("Caba experiente");
        }
     }
    return 0;
}