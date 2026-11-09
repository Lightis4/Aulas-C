#include <stdio.h>
int main(void){
    float salario;
    printf("Digite o seu salario atual: ");
    scanf("%f", &salario);
    float bonus;
    printf("Digite quanto de bonus voce ganhou: ");
    scanf("%f", &bonus);
    float total;
    total = bonus/100*salario;
    float totald;
    totald = total+salario;
    printf("Seu salario total com o bonus fica: %.2f", totald);
    return 0;
}