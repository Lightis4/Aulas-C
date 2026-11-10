#include <stdio.h>

int main(void) {

  int numero;

  printf("numero?\n");
  scanf("%d", &numero);

  if (numero < 0) {
    printf("negativo\n");
  } else {
    printf("positivo\n");
  }

  return 0;
}