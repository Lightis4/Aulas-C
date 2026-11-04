#include <stdio.h>

int main(void){
    int a, b,c;
    float media;
    printf("Digite tres numeros inteiros: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Entrada invalida\n");
        return 1;
    }
    media = (float)(a + b + c) / 3;
    printf("Media: %.1f\n", media);
    return 0;
}