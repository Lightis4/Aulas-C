#include <stdio.h>

int main(void) {

  int numeroUm;
  int numeroDois;

  printf("numero 1?\n");
  scanf("%d", &numeroUm);
  printf("numero 2?\n");
  scanf("%d", &numeroDois);

  if (numeroUm > numeroDois) {
    printf("numero 1 é maior!\n");
  } else if (numeroUm == numeroDois) {
    printf("os dois numeros sao iguais\n");
  } else {
    printf("numero 2 é maior\n");
  }

  return 0;
}