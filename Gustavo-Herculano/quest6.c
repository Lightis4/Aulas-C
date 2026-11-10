//Solicite dois números inteiros e apresente a soma entre eles. Exemplo: 10 + 5 = 15.

#include <stdio.h>
 int main (void) {
    int numero1,numero2, soma;
    
    printf("Digite o primeiro numero int: ");
    scanf("%d",&numero1);

    printf("Digite o segundo numero int: ");
    scanf("%d",&numero2);

    soma = (numero1+numero2);
    
    printf("A soma dos numeros inteiros e: %d",soma);

    return 0;
 }

 

