#include <stdio.h>

int main(void) {

  double num1;
  double num2;
  int calculo;
  printf("Numero 1?\n");
  scanf("%lf", &num1);
  printf("Numero 2?\n");
  scanf("%lf", &num2);

  printf("Qual tipo de calculo deseja?\n");
  printf("1- Adicao\n");
  printf("2- subtracao\n");
  printf("3- divisao\n");
  printf("4- multiplicacao\n");
  scanf("%d", &calculo);

  if (calculo == 1) {
    printf("Resultado: %.2f\n", num1 + num2);
  } else if (calculo == 2) {
    printf("Resultado: %.2f\n", num1 - num2);
  } else if (calculo == 3) {
    printf("Resultado: %.2f\n", num1 * num2);
  } else if (calculo == 4) {
    if (num2 == 0) {
      printf("Erro: Numero indivisivel por 0.\n");
    } else {
      printf("Resultado: %.2f\n", num1 / num2);
    }
  } else {
    printf("Opcao indisponivel.\n");
  }
  return 0;
}