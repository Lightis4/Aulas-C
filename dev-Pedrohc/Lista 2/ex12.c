#include <stdio.h>
int main(void){
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if (ano%400==0)
    {
        printf("Seu ano e bissexto\n");
    }
    else if (ano%100==0)
    {
        printf("Seu ano nao e bissexto\n");
    }
    else if (ano%4==0)
    {
        printf("Seu ano e bissexto\n");
    }
    else
    {
        printf("Seu ano nao e bissexto\n");
    }
    return 0;
}