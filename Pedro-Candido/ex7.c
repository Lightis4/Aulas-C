#include <stdio.h>
int main(void){
    int n1;
    printf("Digite sua primeira nota: ");
    scanf("%d", &n1);
    int n2;
    printf("Digite sua segunda nota: ");
    scanf("%d", &n2);
    int n3;
    printf("Digite sua terceira nota: ");
    scanf("%d", &n3);
    int media;
    media= (n1+n2+n3)/3;
    printf("A Soma entre suas notas: %d", media);
    return 0;
}
