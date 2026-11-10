#include <stdio.h>

int main() {
    float n1, n2, n3;
    float media = (n1 + n2 + n3) / 3;
 
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Media: %.2f\n", media);

    return 0;
}

// esse programa tambem ta dando so 00 , nao sei o que ta acontecendo, ja tentei de tudo