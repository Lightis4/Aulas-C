#include <stdio.h>

int main(void) {

  int numero;
  printf("Digite o Numero:\n");
  scanf("%d", &numero);

  if (numero % 2 == 0) {
    printf("Par!\n");
  } else {
    printf("Impar!\n");
  }
  return 0;
}