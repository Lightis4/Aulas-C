#include <stdio.h>
int main(void){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade<0)
    {
        printf("Invalido!");
    }
    else if (idade>=60)
    {
        printf("Idoso!");
    }
    else if (idade>=18)
    {
        printf("Adulto!");
    }
    else if (idade>=13)
    {
        printf("Adolescente!");
    }
    else{
        printf("Criança!");
    }
    return 0;
}