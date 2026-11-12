#include <stdio.h>

int main(void) {

  int primeiro_num;
  int segundo_num;
  printf("numero 1?\n");
  scanf("%d", &primeiro_num);
  printf("numero 2?\n");
  scanf("%d", &segundo_num);

  if (primeiro_num > segundo_num) {
    printf("O primeiro numero é maior.\n");
  } else if (primeiro_num == segundo_num) {
    printf("Os dois sao iguais.\n");
  } else {
    printf("O segundo numero é maior.\n");
  }
  return 0;
}