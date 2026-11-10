#include <stdio.h>

int main(void) {

  double compra;

  printf("qual o valor da compra?\n");
  scanf("%lf", &compra);

  if (compra < 100) {
    printf("valor total sem desconto: %.2f\n", compra);
  } else if (compra >= 100 && compra <= 299.99) {
    printf("valor final com desconto de 5%%: %.2f\n ", compra * 0.95);
  } else if (compra >= 300 && compra <= 499.99) {
    printf("valor final com desconto de 10%%: %.2f\n ", compra * 0.90);
  } else {
    printf("valor final com desconto de 15%%: %.2f\n ", compra * 0.85);
  }

  return 0;
}