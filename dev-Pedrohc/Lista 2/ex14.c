#include <stdio.h>
int main(void){
    float l1;
    float l2;
    float l3;

    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &l1);

    printf("Digite o valor do segundo lado: ");
    scanf("%f", &l2);

    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &l3);

    if (l1>0 && l2>0&& l3>0)
    {
        if (l1+l2>l3 && l1+l3> l2&& l2+l3>l1)
        {
            if (l1==l2 && l2==l3)
            {
                printf("Equilátero: os três lados iguais");
            }
            else if (l1==l2 || l1==l3|| l3==l2)
            {
                printf("Isosceles: dois lados iguais");
            }
            else{
                printf("Escaleno: todos lados iguais");
            }
        }
        else{
            printf("Invalido!");
        }
    }
    else{
        printf("Inavlido!");
    }
    return 0;
}