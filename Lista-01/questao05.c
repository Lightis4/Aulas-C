#include <stdio.h>

int main(void){
    char nome;
    int idade;
    float nota;

    printf("Digite a inicial do seu nome: \n");
    printf("Digite a sua idade: \n");
    printf("Digite a sua nota: \n");

    scanf("%c", &nome);
    scanf("%d", &idade);
    scanf("%lf", &nota);

    printf("Sua inicial: %c\n", nome);
    printf("Sua idade: %d\n", idade);
    printf("Sua nota: %.1f\n", nota);

    return 0;
}