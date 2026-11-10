#include <stdio.h>
int main (void) {
    char soma = '+';
    char subtracao = '-';
    char multiplicacao = '*';
    char divisao = '/';
    char escolha_simbolo;
    int soma_entrada_1_2;
    int subtracao_entrada_1_2;
    int multiplicao_entrada_1_2;
    int divisao_entrada_1_2;
    int numero_entrada_1;
    int numero_entrada_2;
    printf ("Digite um numero inteiro aleatorio: ");
    if (scanf ("%d", &numero_entrada_1) != 1) {
        printf ("Entrada Invalida, verifique o tipo primitivo digitado");
        return 1;
    }
    printf ("Digite outro numero inteiro aleatorio: ");
    if (scanf ("%d", &numero_entrada_2) != 1) {
        printf ("Entrada Invalida, verifique o tipo primitivo digitado");
        return 1;
    }
    else {
        printf ("Qual operacao voce quer fazer com os dois numeros\n");
        printf ("NUMEROS DIGITADOS (%d), (%d), RESPECTIVAMENTE\n", numero_entrada_1, numero_entrada_2);
        printf ("SOMA (+)\n");
        printf ("SUBTRACAO (-)\n");
        printf ("MULTIPLICACAO (*)\n");
        printf ("DIVISAO (/)\n");
        printf ("Escolha de acordo com os simbolos acima: ");
        if (scanf (" %c", &escolha_simbolo) != 1) {
            printf ("Entrada Invalida, verifique o tipo primitivo digitado");
            return 1;
        }
        if (escolha_simbolo == soma) {
            soma_entrada_1_2 = numero_entrada_1 + numero_entrada_2;
            printf ("A soma dos numeros digitados respectivamente e igual a %d", soma_entrada_1_2);
            }
        else if (escolha_simbolo == subtracao) {
            subtracao_entrada_1_2 = numero_entrada_1 - numero_entrada_2;
            printf ("A subtracao dos numeros digitados respectivamente e igual a %d", subtracao_entrada_1_2);
            }
        else if (escolha_simbolo == multiplicacao) {
            multiplicao_entrada_1_2 = numero_entrada_1 * numero_entrada_2;
            printf ("A multiplicacao dos numeros digitados respectivamente e igual a %d", multiplicao_entrada_1_2);
            }
        else if (escolha_simbolo == divisao) {
            if (numero_entrada_2 == 0) {
                printf ("Impossivel dividir por zero");
            }
            else {
                divisao_entrada_1_2 = numero_entrada_1 / numero_entrada_2; // numerador / denominador || numero_entrada_1 / numero_entrada_2
                printf ("A divisao dos numeros digitados respectivamente e igual a %d", divisao_entrada_1_2);
            }
        }
        else {
            printf ("Simbolo Incorreto, verifique e tente novamente");
        }    
    }
    return 0;
}