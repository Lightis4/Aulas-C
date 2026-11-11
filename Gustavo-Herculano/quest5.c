#include <stdio.h>

int main(void){

    int idade;
    char inicial;
    float nota;

    printf("Qual sua idade: ");
    scanf("%d", &idade);

    printf("Sua inicial e: ");
    scanf(" %c", &inicial);

    printf("Qual sua nota: ");
    scanf("%f", &nota);
    
    printf("Sua idade e %d\n "
           "Sua inicial e %c\n"
           "Sua nota foi %.1f",idade, inicial, nota);

    return 0;

}