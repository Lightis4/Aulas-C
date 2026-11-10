#include <stdio.h>

int main() {
    float media;

    printf("Digite a media final: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf(" voce foi aprovado\n");
    } else {
        printf("voce foi reprovado\n");
    }

    return 0;
}