#include <stdio.h>

int main(void) {

  char nome[15];
  int matricula;
  int idade;
  float nota1, nota2, nota3, media;

  printf("qual o seu nome?\n");
  fgets(nome, sizeof(nome), stdin);
  printf("qual a sua matricula?\n");
  scanf("%d", &matricula);
  printf("qual a sua idade?\n");
  scanf("%d", &idade);

  printf("qual a nota 1?\n");
  scanf("%f", &nota1);
  printf("qual a nota 2?\n");
  scanf("%f", &nota2);
  printf("qual a nota 3?\n");
  scanf("%f", &nota3);

  media = (nota1 + nota2 + nota3) / 3;

  printf("nome: %s\nmatricula: %d\nidade: %d\nmedia de notas: %.2f\n", nome, matricula, idade, media);

  return 0;
}