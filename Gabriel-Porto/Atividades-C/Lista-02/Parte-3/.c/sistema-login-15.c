#include <stdio.h>

int main(void) {
    int codigo_correto = 2026, senha_numerica = 1234;
    int entrada_codigo, senha_entrada;
    printf("Digite seu codigo numerico de acesso e sua senha (ex: 4567 6789): ");
    if (scanf("%d %d", &entrada_codigo, &senha_entrada) != 2) { // outra forma de ler duas variáveis na mesma linha
        puts("Entrada Invalida, verifique o tipo primitivo e compile novamente");
        return 1;
    }
    if (entrada_codigo != codigo_correto || senha_numerica != senha_entrada) {
        puts ("Usuário Incorreto ou Senha Incorreta");
    }
    else {
        puts ("Login Realizado com sucesso!");
    }         
    return 0;
}