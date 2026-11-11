/*
Questão 03 — Declarando variáveis
Declare uma variável char para a inicial do nome, uma int para a idade e uma float para uma nota.Exiba os valores com os especificadores de formato adequados.
*/
#include<stdio.h>

int main(void){
    
char nome = 'G';
int idade = 19;
float nota = 8.5;

    printf("A inicia do meu nome e: %c\n"
       "Minha idade e: %d\n"
       "Minha nota foi: %.1f",
       nome, idade, nota);

return 0;
}
