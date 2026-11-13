#include <stdio.h>
int main (void) {
    double lado_1, lado_2, lado_3;
    printf ("");
    if (scanf ("%lf", &lado_1) != 1 || scanf ("%lf", &lado_2) != 1 || scanf ("%lf", &lado_3) != 1) {
        puts ("Entrada Invalida, verifique o tipo primitivo digitado");
        return 1;
    }
    if (lado_1 < lado_2 + lado_3 && lado_2 < lado_1 + lado_3 && lado_3 < lado_2 + lado_1) {
       puts ("Triangulo de acordo com condicao de existencia"); 
    }
    if (lado_1 == lado_2 && lado_1 == lado_3 && lado_2 == lado_3) {
        puts ("EQUILATERO");
    }
    else if (lado_1 != lado_2 && lado_1 != lado_3 && lado_2 != lado_3) {
        puts ("ESCALENO");
    }
    else if ((lado_1 == lado_2 && lado_1 != lado_3 && lado_2 != lado_3) || (lado_2 == lado_3 && lado_2 != lado_1 && lado_3 != lado_1) || (lado_3 == lado_1 && lado_3 != lado_2 && lado_1 != lado_2)) {
        puts ("ISOSCELES");;
    }
    else {
        puts ("Nao segue a condicao de existencia do triangulo");
    }
    return 0;
}