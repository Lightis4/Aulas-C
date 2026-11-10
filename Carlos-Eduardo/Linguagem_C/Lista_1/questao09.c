#include <stdio.h>
int main(void) {
    int salario, bonus, soma;

    printf("Digite seu salario:");
    scanf("%d", &salario);

    printf("Digite seu bonus:");
    scanf("%d", &bonus);

    soma = salario + bonus;

    printf("A soma entre o seu salario equivalente a %d e o bonus equivalente a %d e igual a: %d", salario, bonus, soma);

    return 0;
}