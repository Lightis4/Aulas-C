#include <stdio.h>

int main(void) {
    float media;

    printf("Digite a media final: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}
