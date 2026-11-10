#include <stdio.h>
int main(void){
   int idade;
   printf("Digite sua idade: ");
   scanf("%d", &idade);
   char inicial;
   printf("Digite a inicial do seu nome: ");
   scanf(" %c", &inicial);
   float nota;
   printf("Digite sua nota: ");
   scanf("%f", &nota);
   printf("Sua idade e: %d\nSua inicial e: %c\nSua note e: %.2f", idade, inicial, nota);
   return 0;
}