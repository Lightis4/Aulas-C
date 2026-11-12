#include <stdio.h>

int main(void) {

  double valor;
  printf("Informe o valor;\n");
  scanf("%lf", &valor);

  if (valor < 100) {
    printf("Valor sem desconto: %.2f\n", valor);
  } else if (valor >= 100 && valor <= 299.99) {
    printf("Valor com 5%%: %.2f\n ", valor * 0.95);
  } else if (valor >= 300 && valor <= 499.99) {
    printf("Valor com 10%%: %.2f\n ", valor * 0.90);
  } else {
    printf("Valor com 15%%: %.2f\n ", valor * 0.85);
  }
  return 0;
}