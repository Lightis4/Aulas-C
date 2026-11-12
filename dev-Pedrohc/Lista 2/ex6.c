#include <stdio.h>
int main(void){
    float nota;
    printf("Digite sua nota final: ");
    scanf("%f", &nota);
    if (nota>10)
    {
        printf("Invalido!");
    }
    else if (nota<0)
    {
        printf("Invalido!");
    }
    else if (nota>=9)
    {
        printf("Excelente");
    }
    else if (nota>=7)
    {
        printf("Bom");
    }
    else if (nota>=5)
    {
        printf("Recuperação");
    }
    else{
        printf("Reprovado");
    }
    return 0;
}