#include <stdio.h>

int main(void) {

  float nota;

  printf("nota?\n");
  scanf("%f", &nota);

  if (nota < 0 || nota > 10) {
    printf("nota invalida\n");
  } else if (nota >= 9) {
    printf("excelente\n");
  } else if (nota >= 7) {
    printf("bom\n");
  } else if (nota >= 5) {
    printf("recuperação\n");
  } else {
    printf("reprovado\n");
  }

  return 0;
}