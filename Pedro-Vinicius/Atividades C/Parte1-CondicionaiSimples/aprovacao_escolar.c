#include <stdio.h>

int main(void){
    double nota1, nota2, media;
    printf("Digite a primeira nota: ");
    if(scanf("%lf", &nota1) != 1){
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite a segunda nota: ");
    if(scanf("%lf", &nota2) != 1){
        printf("Entrada invalida\n");
        return 1;
    }
    media = (nota1 + nota2) / 2;
    if(media >= 7.0){
        printf("Aluno aprovado com media %.2lf\n", media);
    }else{
        printf("Aluno reprovado com media %.2lf\n", media);
    }
    return 0;
}