#include <stdio.h>

int main(void){
    int senha;
    printf("Digite a senha: ");
    if(scanf("%d", &senha) != 1){
        printf("Entrada invalida\n");
        return 1;
    }

    if(senha == 1234){
        printf("Acesso permitido\n");
    }else{
        printf("Acesso negado\n");
    }

    return 0;
}