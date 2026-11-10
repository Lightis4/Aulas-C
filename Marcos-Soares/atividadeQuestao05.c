#include <stdio.h>

int main(void) {
  int idade;
  char letraInicial;
  float nota;

  printf("qual sua idade?\n");
  scanf("%d", idade);
  printf("qual inicial do seu nome?\n");
  scanf("%c", letraInicial);
  printf("qual sua nota?\n");
  scanf("%f", nota);

  printf("sua idade: %d\n", idade);
  printf("sua inicial: %c\n", letraInicial);
  printf("sua nota: %2.f", nota);

  return 0;
}
