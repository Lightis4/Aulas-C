#include <stdio.h>
int main(void){
    int n1;
    printf("Digite sua primeira nota: ");
    scanf("%d", &n1);
    int n2;
    printf("Digite sua segunda nota: ");
    scanf("%d", &n2);
    int soma;
    soma= n1+n2;
    printf("A soma entre %d e %d sera: %d", n1, n2, soma);
    return 0;
}