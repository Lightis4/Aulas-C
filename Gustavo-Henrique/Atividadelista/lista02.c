/*
Questão 02 — Apresentação pessoal
Crie um programa que exiba seu nome, idade, curso e instituição de ensino.Utilize printf() para apresentar as informações de maneira organizada.
*/

#include<stdio.h>

int main(void){

char nome [8] = "Gustavo";
int idade = 19;
char curso [24]= "Ciencias da Computacao";
char local [10] = "Uninassau";

printf("========[APRESENTACAO PESSOAL]========\n");

    printf("Seu nome e %s\n"
       "Sua idade e %d\n"
       "Seu curso e %s\n"
       "Sua faculdade e %s\n",
        nome, idade, curso, local);

return 0;
}