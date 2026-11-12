#include <stdio.h>
int main(void){
    float n1;
    float n2;
    float n3;
    
    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);
    
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);

    if (n1<0 || n1>10 || n2<0 || n2>10 || n3<0 || n3>10)
    {
        printf("Invalido!\n");
    }
    else
    {
        float media = (n1+n2+n3)/3;
        if (media>=7)
        {
            printf("Aprovado!\n");
        }
        else if (media>=5)
        {
            printf("Recuperacao!\n");
        }
        else
        {
            printf("Reprovado!\n");
        }
    }
    return 0;
}