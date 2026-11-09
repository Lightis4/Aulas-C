#include <stdio.h>
int main(void){
    int idade;
    printf("Digite a sua idade: ");
    if(scanf("%d", &idade) !=1){
        printf("Entrada invalida\n");
        return 1;
    }

    if(idade < 0){
        printf("Idade invalida\n");
        return 1;
    }

    if(idade < 13){
        printf("Crianca\n");
    }else if(idade < 18){
        printf("Adolescente\n");
    }else if(idade < 60){
        printf("Adulto\n");
    }else{
        printf("Idoso\n");
    }

    return 0;
}