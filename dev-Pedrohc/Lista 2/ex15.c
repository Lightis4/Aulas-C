#include <stdio.h>
int main(void){
    int codigo= 2026;
    int senha= 1234;
    int usuario;
    int senha2;
    printf("Digite o codigo de usuario: ");
    scanf("%d", &usuario);
    printf("Digite sua senha: ");
    scanf("%d", &senha2);

    if (codigo==usuario)
    {
        if (senha==senha2)
        {
            printf("Login realizado com sucesso");
        }
        else{
            printf("senha incorreta!");
        }
    }
    else{
        printf("login incorreto!");
    }
    return 0;
}