#include <stdio.h> // entradas e saidas biblioteca
int main (void) {
    int numero_usuario; // no começo não temos nada se lembre disso
    printf ("Digite um numero inteiro: "); 
    scanf ("%d", &numero_usuario); // formatação e o s comercial para o endereço da variável
    if (numero_usuario) {
        printf ("Entrada Invalida");
        return 1; // caso default 
    }
    if (numero_usuario > 0) {
        printf ("O numero e positivo");
    }
    else if (numero_usuario < 0) {
        printf ("O numero e negativo");
    }
    else {
        printf ("O numero e igual a zero");
    }
    return 0;
}