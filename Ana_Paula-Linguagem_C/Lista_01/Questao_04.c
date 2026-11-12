//Questão 04 — Trabalhando com números decimais
//Declare duas variáveis, uma float e outra double, atribua valores decimais e exiba ambos com duas casas decimais.

#include <stdio.h>

int main(void) {
    float n1 = 2.3456;
    double n2 = 3.1415;

    printf("Float: %.2f \n", n1);
    printf("Double: %.2f \n", n2);
    
    return 0;
}