#include <stdio.h>

int maint(void) {

  int numero;

  printf("numero?\n");
  scanf("%d", &numero);

  if (numero % 2 == 0) {
    printf("par\n");
  } else {
    printf("impar\n");
  }

  return 0;
}