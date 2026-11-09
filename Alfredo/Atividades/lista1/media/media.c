#include <stdio.h>
    int main(void){
        printf("digite suas 3 notas ");
        float nota1, media;
        printf("nota 1: ");
        scanf("%f", &nota1);
        float nota2;
        printf("nota 2: ");
        scanf("%f", &nota2);
        float nota3;
        printf("nota 3: ");
        scanf("%f", &nota3);

        media = (nota1+nota2+nota3)/3;
        printf("sua media e %.1f", media);
    }