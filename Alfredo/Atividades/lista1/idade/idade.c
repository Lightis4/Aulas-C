#include <stdio.h>
    int main(void){
        printf("Em que ano voce nasceu: ");
        float data, calculo;
        scanf("%f", &data);
        
        calculo = 2026-data;
        printf("idade: %.1f", calculo);
    }