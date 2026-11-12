#include <stdio.h>

int main(void) {

  float nota1 = -1, nota2 = -1, nota3 = -1, media;

  printf("qual a primeira nota?\n");
  scanf("%f", &nota1);
  if (nota1 < 0 || nota1 > 10) {
    printf("nota invalida!\n");
    return 1;
  }

  printf("qual a segunda nota?\n");
  scanf("%f", &nota2);

  if (nota2 < 0 || nota2 > 10) {
    printf("nota invalida!\n");
    return 1;
  }

  printf("qual a terceira nota?\n");
  scanf("%f", &nota3);

  if (nota3 < 0 || nota3 > 10) {
    printf("nota invalida!\n");
    return 1;
  }
  media = (nota1 + nota2 + nota3) / 3;

  if (media >= 7) {
    printf("aprovado\n");
    printf("media: %.2f\n", media);
  } else if (media >= 5) {
    printf("recuperação\n");
    printf("media: %.2f\n", media);
  } else {
    printf("reprovado\n");
    printf("media: %.2f\n", media);
  }

  return 0;
}