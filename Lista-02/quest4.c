#include <stdio.h>

int main(void) {

  int medfinal;
  printf("Digite a Média Final:\n");
  scanf("%d", &medfinal);

  if (medfinal < 7) {
    printf("Reprovado\n");
  } else {
    printf("Aprovado\n");
  }
  return 0;
}