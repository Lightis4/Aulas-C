/* Questão 14 — Validação de triângulos
Solicite três lados. Verifique se todos são positivos e se a soma de quaisquer dois é maior que o terceiro. Classifique: Equilátero (três iguais), Isósceles (dois iguais) ou Escaleno (três diferentes).*/

#include <stdio.h>

/* FUNÇÃO PARA VALIDAR OS LADOS - se for verdadeiro retorna 1 e falso retorna 0*/
int validar_lados (float lado) {
    return lado>0;
    }

/*MAIN*/
int main(void) {
    float lado_1, lado_2, lado_3;
    char enter;

/*LADOS: leitura e validação*/
    printf("Digite o primeiro lado: \n");
    if (scanf("%f%c", &lado_1, &enter) != 2 || enter != '\n') {
        printf("Lado em formato inválido. Digite um número.\n");
        return 1;
    }
    if (validar_lados(lado_1) == 0) {
        printf("Lado inválido. Digite um número positivo.\n");
        return 1;
    }

    printf("Digite o segundo lado: \n");
    if (scanf("%f%c", &lado_2, &enter) != 2 || enter != '\n') {
        printf("Lado em formato inválido. Digite um número.\n");
        return 1;
    }
    if (validar_lados(lado_2) == 0) {
        printf("Lado inválido. Digite um número positivo.\n");
        return 1;
    }

    printf("Digite o terceiro lado: \n");
    if (scanf("%f%c", &lado_3, &enter) != 2 || enter != '\n') {
        printf("Lado em formato inválido. Digite um número.\n");
        return 1;
    }
    if (validar_lados(lado_3) == 0) {
        printf("Lado inválido. Digite um número positivo.\n");
        return 1;
    }

/*PARTE PRÁTICA*/
    if ((lado_1+lado_2)>lado_3 && (lado_1+lado_3)>lado_2 && (lado_2+lado_3)>lado_1) {
        if (lado_1 == lado_2 && lado_2 == lado_3) {
            printf("Triângulo EQUILÁTERO.\n");
        }
        else if (lado_1 != lado_2 && lado_1 != lado_3 && lado_2 != lado_3) {
            printf("Triângulo ESCALENO.\n");
        }
        else {
            printf("Triângulo ISÓSCELES.\n");
        }
    }
    else {
        printf("Não é possível construir um triângulo com essas medidas. \n");
    }
    
    return 0;
}