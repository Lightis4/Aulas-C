#include <stdio.h>

int main(void) {

  int idade;

  printf("idade?\n");
  if (scanf("%d", &idade != 1 || idade < 0)) {
    printf("idade invalida!");
    return 1;
  }

  if (idade <= 12) {
    printf("crianca\n");
  } else if (idade <= 17) {
    printf("adolescente\n");
  } else if (idade <= 59) {
    printf("adulto\n");
  } else {
    printf("idoso\n");
  }

  return 0;
}