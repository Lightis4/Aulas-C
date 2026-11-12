#include <stdio.h>

int main(void) {

  int idade;

  printf("idade?\n");
  scanf("%d", &idade);

  if (idade >= 18) {
    printf("maior de idade");
  } else if (idade < 0) {
    printf("selecione uma idade valida!");
  } else {
    printf("menor de idade");
  }

  return 0;
}