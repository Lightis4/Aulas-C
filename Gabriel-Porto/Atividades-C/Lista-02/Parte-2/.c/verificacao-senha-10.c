#include <stdio.h>
int main (void) {
    int senha_numerica_entrada;
    int senha_numerica_correta = 1234;
    printf ("Digite a senha para entrar no sistema: ");
    scanf ("%d", &senha_numerica_entrada);
    if (senha_numerica_entrada == senha_numerica_correta) {
        puts ("Acesso permitido, login realizado");
    }
    else {
        puts ("Acesso negado!");
    }
    return 0;
}