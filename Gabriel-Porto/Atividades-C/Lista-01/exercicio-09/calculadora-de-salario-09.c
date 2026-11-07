#include <stdio.h>
int main (void) {
    double salario_funcionario;
    double aumento = 1.15;
    printf ("Digite o valor do seu salario: ");
    scanf ("%lf", &salario_funcionario);
    double salario_total_bonus = salario_funcionario*aumento;
    printf ("Seu salario com bonus de 15%% e igual a %.2f\n", salario_total_bonus);
    return 0;
}