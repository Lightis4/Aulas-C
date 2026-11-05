#include <stdio.h>

int main(void){
    int nota;

    printf("Digite uma nota de 0 a 10: ");
    scanf("%d", &nota);


    if (nota < 0 || nota > 10){
        printf("Nota Invalida");
    } else if (nota >= 9){
        printf("Excelente");
    } else if (nota >= 7){
        printf("Bom");
    } else if (nota >= 5){
        printf("Recuperação");
    } else {
        printf("Reprovado");
    }
}