#include <stdio.h>
int main (void) { // parâmetros vazios estaticos (inteiro)
    double valor_entrada_1;
    double valor_entrada_2;
    printf ("Digite um valor decimal aleatorio: ");
    scanf ("%lf", &valor_entrada_1);
    printf ("Digite outro valor decimal aleatorio: ");
    scanf ("%lf", &valor_entrada_2);
    double soma_entrada_1_2 = valor_entrada_1 + valor_entrada_2; // engraçado so posso criar essa variável quando os valores forem armazenados
    // soma calculada antes das leituras tem que ser depois
    printf ("A soma entre %.2f e %.2f e igual a %.2f", valor_entrada_1, valor_entrada_2, soma_entrada_1_2);
    return 0;
}