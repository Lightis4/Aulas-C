#include <stdio.h>

int main(void) {

  int idade;
  printf("Digite a Idade:\n");
  scanf("%d", &idade);

  if (idade >= 18) {
    printf("Maior de Idade");
  } else if (idade < 0) {
    printf("Por favor,digite uma idade valida.");
  } else {
    printf("Menor de Idade");
  }
  return 0;
}