#include <stdio.h>

int main(void) {

  int senha = 1234;

  printf("qual é a senha?\n");
  scanf("%d", &senha);

  if (senha == 1234) {
    printf("senha correta!\n");
  } else {
    printf("senha incorreta!\n");
  }

  return 0;
}