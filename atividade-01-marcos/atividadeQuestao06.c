#include <stdio.h>

int main(void) {

  int numero1;
  int numero2;

  printf("qual é o primeiro numero?\n");
  scanf("%d", numero1);
  printf("qual é o segundo numero?\n");
  scanf("%d", numero2);
  printf("a soma dos dois numeros é: %d\n", numero1 + numero2);

  return 0;
}