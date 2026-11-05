#include <stdio.h>

int main(void){
    float media;

    printf("Digite a sua media: ");
    scanf("%f", &media);

    if(media >= 7){
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }
}