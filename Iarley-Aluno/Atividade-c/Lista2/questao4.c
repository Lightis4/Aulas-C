#include <stdio.h>

int main() {
    float media;

    printf("digite a media do aluno:");
    scanf("%f", &media);

    if (media>=7){
        printf("Aprovado\n");
    } else{
        printf("reprovado\n");
    }
    return 0;
}