#include <stdio.h>

int main(void) {

  double parcela, salario;

  printf("salario?\n");
  if (scanf("%lf", &salario) != 1) {
    printf("salario invalido\n");
    return 1;
  }
  printf("parcela?\n");
  if (scanf("%lf", &parcela) != 1) {
    printf("parcela invalida\n");
    return 1;
  }

  if (salario <= 0 || parcela <= 0) {
    printf("emprestimo rejeitado. os valores precisam ser maior que zero.");
    return 0;
  }

  double limiteParcela = salario * 0.30;

  if (parcela <= limiteParcela) {
    printf("emprestimo aprovado!");
  } else {
    printf("emprestimo rejeitado! A parcela %.2f, excede o limite de 30%% do "
           "salario, %.2f",
           parcela, limiteParcela);
  }

  return 0;
}