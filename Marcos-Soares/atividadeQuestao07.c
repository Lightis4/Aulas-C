#include <stdio.h>

int main(void) {

    float nota1;
    float nota2;
    float nota3;
    float media = (nota1 + nota2 + nota3) / 3;

    printf("qual a nota 1?\n");
    scanf("%f", &nota1);
    printf("qual a nota 2?\n");
    scanf("%f", &nota2);
    printf("qual a nota 3?\n");
    scanf("%f", &nota3);

    printf("a media das notas é: %.2f", media);


    return 0;
}