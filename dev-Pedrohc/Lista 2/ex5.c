#include <stdio.h>
int main(void){
    int n1;
    printf("Digite seu primeiro numero: ");
    scanf("%d", &n1);
    int n2;
    printf("Digite seu segundo numero; ");
    scanf("%d", &n2);
    if (n1>n2)
    {
        printf("Seu primeiro numero e maior!");
    }
    else if (n2>n1)
    {
        printf("Seu segundo numero e maior!");
    }
    else{
        printf("Seus numero sao iguais!");
    }
    return 0;
}