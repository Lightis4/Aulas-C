#include <stdio.h>

int main(void){
    float nota1, nota2, nota3, media;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a sua terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("Media: %.1f\n", media);

    if (media < 0 || media > 10){
        printf("Nota Invalida");

    } else if(media >= 7){
        printf("Aprovado.");

    } else if (media >= 5 && media < 7){
        printf("Recuperacao.");

    } else if (media < 5 ){
        printf("Reprovado.");
    }
    
    return 0;
}