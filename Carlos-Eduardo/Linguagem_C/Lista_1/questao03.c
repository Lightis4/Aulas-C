#include <stdio.h>
int main(void) {
   char nome [30] = "Carlos Eduardo";
   int idade = 18;
   float nota = 9.5f;

   printf("nome: %s\n""idade: %d\n""nota: %.1f\n", nome, idade, nota);

   return 0;
}