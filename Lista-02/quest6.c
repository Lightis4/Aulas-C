#include <stdio.h>

int main(void) {

  float nota;
  printf("nota?\n");
  scanf("%f", &nota);

  if (nota < 0 || nota > 10) {
    printf("Nota Invalida.\n");
  } else if (nota >= 9) {
    printf("Nota Excelente.\n");
  } else if (nota >= 7) {
    printf("Boa nota.\n");
  } else if (nota >= 5) {
    printf("Esta na Recuperação.\n");
  } else {
    printf("Estado: Reprovado.\n");
  }
  return 0;
}