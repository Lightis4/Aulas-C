#include <stdio.h>

int main(){
    int nascimento;
    int idade;

    printf("Digite seu ano de nascimento");
    scanf("%d", &nascimento);

    idade=2026-nascimento;

    printf("A sua idade é de: %d anos\n", idade);
    
    return 0;

}