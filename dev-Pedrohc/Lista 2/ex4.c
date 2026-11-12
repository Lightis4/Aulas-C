#include <stdio.h>
int main(void){
    float media;
    printf("Digite sua media: ");
    scanf("%f", &media);
    if (media>=7)
    {
        printf("Voce esta aprovado!");
    }
    else{
        printf("Voce esta reprovado!");
    }
    return 0;
}