#include <stdio.h>

int main(void) {

  double numero1;
  double numero2;
  int operacao;

  printf("numero 1?\n");
  scanf("%lf", &numero1);
  printf("numero 2?\n");
  scanf("%lf", &numero2);

  printf("qual operação deseja fazer?\n");
  printf("1- adicao\n");
  printf("2- subtracao\n");
  printf("3- multiplicacao\n");
  printf("4- divisao\n");
  scanf("%d", &operacao);

  if (operacao == 1) {
    printf("resutado: %.2f\n", numero1 + numero2);
  } else if (operacao == 2) {
    printf("resutado: %.2f\n", numero1 - numero2);
  } else if (operacao == 3) {
    printf("resutado: %.2f\n", numero1 * numero2);
  } else if (operacao == 4) {
    if (numero2 == 0) {
      printf("erro! o numero nao pode ser dividido por zero.\n");
    } else {
      printf("resutado: %.2f\n", numero1 / numero2);
    }
  } else {
    printf("opcao invalida!\n");
  }

  return 0;
}