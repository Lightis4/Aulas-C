#include <stdio.h>

int main(void){
    double nota;
    printf("Digite a nota final do aluno(0 a 10): ");
    if(scanf("%lf", &nota) != 1 || nota < 0.0 || nota > 10.0){
        printf("Entrada invalida\n");
        return 1;
    }

    if(nota >= 9.0){
        printf("Situacao Excelente\n");
    }else if(nota >= 7.0){
        printf("Situacao Bom\n");
    }else if(nota >= 5.0){
        printf("Situacao Recuperacao\n");
    }else{
        printf("Situacao Reprovado\n");
    }
    return 0;
}