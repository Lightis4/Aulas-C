// Questão 14 — Validação de triângulos
// Solicite três lados. Verifique se todos são positivos e se a soma de quaisquer dois é maior que o
// terceiro. Classifique: Equilátero (três iguais), Isósceles (dois iguais) ou Escaleno (três diferentes).


#include <stdio.h>

int main(void) {
    float lado1, lado2, lado3;

    printf("======= VALIDACAO DE TRIANGULOS =======\n");

    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);

    // Verifica se todos os lados sao positivos
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        printf("Triangulo INVALIDO: os lados devem ser positivos!\n");
    }

    // Verifica a condicao de existencia do triangulo
    else if (lado1 + lado2 <= lado3 ||
             lado1 + lado3 <= lado2 ||
             lado2 + lado3 <= lado1) {

        printf("Triangulo INVALIDO: esses lados nao formam um triangulo!\n");
    }

    // Classifica o triangulo
    else if (lado1 == lado2 && lado2 == lado3) {
        printf("O triangulo e EQUILATERO!\n");
    }

    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triangulo e ISOSCELES!\n");
    }

    else {
        printf("O triangulo e ESCALENO!\n");
    }

    return 0;
}
