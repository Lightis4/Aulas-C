#include <stdio.h>

int main(void){

    int idade;
    char inicial = 'J';
    float nota;

    printf("Digite sua idade: ");
    scanf(" %d", &idade );

    printf("Digite sua inicial: ");
    scanf(" %c", &inicial);

    printf("Digite sua nota: ");
    scanf(" %f", &nota);

    return 0;
}