#include <stdio.h>
int main(void){
    char nome;
    int idade;
    float nota;
    printf("Digite as credenciais.\n");
    if(scanf("%c %d %f", &nome, &idade, &nota) != 3){
    printf("Credencial invalida.\n");
    return 1;
    }
    printf("nome = %c\n", nome);
    printf("idade = %d anos \n", idade);
    printf("nota = %.1f\n", nota);
    return 0;
    
}