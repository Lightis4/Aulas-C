#include <stdio.h>

int main(void) {

  float lado1, lado2, lado3;

  printf("lado 1:\n");
  scanf("%f", &lado1);
  printf("lado 2:\n");
  scanf("%f", &lado2);
  printf("lado 3:\n");
  printf("%f", &lado3);

  if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) &&
      (lado2 + lado3 > lado1)) {

    if (lado1 == lado2 && lado2 == lado3) {
      printf("triangulo equilatero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
      printf("triangulo isosceles)\n");
    } else {
      printf("triangulo escaleno\n");
    }

  } else {
    printf("os lados informados nao formam um triangulo!\n");
  }

  return 0;
}
/*
Equilátero	Três lados iguais
Isósceles	Dois lados iguais
Escaleno	Três lados diferentes
*/
