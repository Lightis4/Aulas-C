#include <stdio.h>

int main(void){
    int senha, usuario;

    printf("Digite seu usuario:");
    if(scanf("%d", &usuario) !=1 || usuario <= 0){
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Digite sua senha:");
    if (scanf("%d", &senha) != 1 || senha <= 0)
    {
        printf("Entrada invalida.\n");
        return 1;
    }

    if(usuario != 2026){
        printf("Usuario  incorreta\n");
    }else if(senha != 1234){
        printf("Senha incorreta\n");
    }else{
        printf("Login realizado com sucesso\n");
    }

    return 0;
}