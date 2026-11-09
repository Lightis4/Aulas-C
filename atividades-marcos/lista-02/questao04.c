#include <stdio.h>

int main(void) {

  int mediaFinal;

  printf("média final?\n");
  scanf("%d", &mediaFinal);

  if (mediaFinal < 7) {
    printf("reprovado\n");
  } else {
    printf("aprovado\n");
  }

  return 0;
}