#include <stdio.h>
int main(void){
    int anon;
    printf("Digite o ano em que voce nasceu: ");
    scanf("%d", &anon);
    int idade;
    idade= 2026-anon;
    printf("Sua idade atual e: %d", idade);
    return 0;
}