#include <stdio.h>

int main(void) {

  int usuario = 2026;
  int senha = 1234;

  printf("digite o usuario:\n");
  scanf("%d", &usuario);
  printf("digite a senha:\n");
  scanf("%d", &senha);

  if (usuario == 2026 && senha == 1234) {
    printf("login realizado com sucesso!\n");
  } else if (usuario != 2026) {
    printf("usuario incorreto\n");
  } else if (senha != 1234) {
    printf("senha incorreta!\n");
  }

  return 0;
}