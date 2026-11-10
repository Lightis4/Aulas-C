/*
Questão 04 — Trabalhando com números decimais
Declare duas variáveis, uma float e outra double, atribua valores decimais e exiba ambos com duas casas decimais.
*/
#include<stdio.h>

int main(void){

float nota1 = 8.5f;
double nota2 = 8.45;

    printf("Sua primeira nota foi: %.2f\n"
        "Sua segunda nota foi: %.2lf",
         nota1, nota2);

return 0;
}