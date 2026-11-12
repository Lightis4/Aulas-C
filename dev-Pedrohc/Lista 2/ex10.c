#include <stdio.h>
int main(void){
    int senha = 1234;
    int pedido;
    printf("Digite sua senha: ");
    scanf("%d", &pedido);
    if (pedido == senha)
    {
        printf("Acesso liberado!");
    }
    else{
        printf("Acesso negado!");
    }
    return 0;
}