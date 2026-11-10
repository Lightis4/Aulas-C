#include <stdio.h>

int main(void){
    double a, b;

    printf("Digite os dois numeros: ");
    // Lendo a entrada dos dois numeros usando %lf, verifica se foi válida, 
    //caso contrário, exibe uma mensagem de erro e encerra o programa.
    if(scanf("%lf %lf", &a, &b) != 2){ 
        printf("Entrada invalida!\n");
        return 1;
    }
    ////Mostrando o resultado dos operadores com duas casas decimais usando %2.lf.
    printf("Soma: %.2lf\n", a + b);
    printf("Subtracao: %.2lf\n", a - b);
    printf("Multiplicacao: %.2lf\n", a * b);
    if(b != 0.0){
        printf("Divisao: %.2lf\n", a / b);
    } else {
        printf("Divisao: nao e possivel dividir por zero!\n");
    }
    return 0;
}