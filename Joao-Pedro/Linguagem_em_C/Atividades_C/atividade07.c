#include <stdio.h>

int main(void){

    double nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf(" %lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf(" %lf", &nota2);

    printf("Digite a terceira nota: ");
    scanf(" %lf", &nota3);

    media = nota1 + nota2 + nota3 / 3.0;

    printf("A media e: %.2lf\n", media);

    return 0;

}