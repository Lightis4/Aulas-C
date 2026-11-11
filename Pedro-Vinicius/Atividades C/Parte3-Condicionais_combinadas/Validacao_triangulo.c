#include <stdio.h>

int main(void){
    double a, b, c;

    printf("Digite o primeiro lado: ");
    if(scanf("%lf", &a) !=1 || a <= 0){
        printf("Entrada Invalida.\n");
        return 1;
    }

    printf("Digite o segundo lado: ");
    if(scanf("%lf", &b) !=1 || b <= 0){
        printf("Entrada Invalido.\n");
        return 1;
    }

    printf("Digite o terceiro lado: ");
    if(scanf("%lf", &c) !=1 || c <= 0){
        printf("Entrada Invalido.\n");
        return 1;
    }

    if((a + b > c) && (a + c > b) && (b + c > a)){
        if (a == b && b == c)
        {
            printf("Classificacao: Triangulo Equilátero (tres lados iguais). \n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Classificacao: Triangulo Isosceles (dois lados iguais). \n");
        }
        else 
        {
            printf("Classificação: Triângulo Escaleno (três lados diferentes).\n");
        }
    }else{
        printf("Os valores informados não formam um triângulo (a soma de dois lados não é maior que o terceiro).\n");
    }

    return 0;
}