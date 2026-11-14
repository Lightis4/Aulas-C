#include <stdio.h>
int main (void) {
    double salario_mensal, valor_parcela, limite;
    // a parcela tem que representar no máximo 30% do salário
    printf ("Digite seu salario mensal: ");
    if (scanf ("%lf", & salario_mensal) != 1) {
        puts ("Entrada Invalida, verifique o tipo primitivo digitado e compile novamente");
        return 1;
    }
    printf ("Digite o valor da parcela: ");
    if (scanf ("%lf", &valor_parcela) != 1) {
        puts ("Entrada Invalida, verifique o tipo primitivo digitado e compile novamente");
        return 1;
    }
    if (salario_mensal <= 0 || valor_parcela <= 0) {
        printf ("Erro: o salario e o valor da parcela devem ser maiores que zero");
    }
    else {
        limite = salario_mensal * 0.30;
        if (valor_parcela <= limite) {
            puts ("Emprestimo Aprovado");
        }
        else {
            puts ("Emprestimo Negado");
        }
    }
    return 0;
}