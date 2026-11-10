#include <stdio.h>

int main(void){
    double numero1, numero2;
    printf("Digite o primeiro numero: ");
    if(scanf("%lf", &numero1) != 1 ){
        printf("Entrada invalida\n");
        return 1;
    }

    printf("Digite o segundo numero: ");
    if(scanf("%lf", &numero2) != 1 ){
        printf("Entrada invalida\n");
        return 1;
    }

  printf("Escolha a operacao(+, -, *, /): ");
    char operador;
    if(scanf(" %c", &operador) != 1){
        printf("Entrada invalida\n");
        return 1;
    }

    switch(operador){
        case '+':
            printf("Resultado: %.2lf\n", numero1 + numero2);
            break;
        case '-':
            printf("Resultado: %.2lf\n", numero1 - numero2);
            break;
        case '*':
            printf("Resultado: %.2lf\n", numero1 * numero2);
            break;
        case '/':
            if(numero2 == 0){
                printf("Erro: divisao por zero\n");
            }else{
                printf("Resultado: %.2lf\n", numero1 / numero2);
            }
            break;
        default:
            printf("Operacao invalida\n");
    }
    return 0;
}