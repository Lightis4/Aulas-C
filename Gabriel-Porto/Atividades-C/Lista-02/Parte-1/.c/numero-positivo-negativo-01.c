#include <stdio.h> // entradas e saidas biblioteca standardtio 
int main (void) {
    int numero_usuario; // no começo não temos nada se lembre disso
    printf ("Digite um numero inteiro: "); 
    // formatação e o s comercial para o endereço da variável locada em alguma posição na memória
    // verificação no começo primeiro if (esse diferente de 1 serve para quando o usuario digitar algo que seja literalmente difernte de um inteiro porque não vai ter como ler, porque a variável foi definida como inteira) quantidade de valores lidos
    // esse 1 quantidade de valores lidos, a variavel foi definida como inteira se o usuario digitar algo diferente de inteiro retorne entrada invalida, entrada abc nao consegue converter para inteiro ent retorne 0 que seria diferente de 1
    if (scanf ("%d", &numero_usuario) != 1) { 
        printf ("Entrada Invalida\n"); 
        return 1; // caso "default" 
    }
    if (numero_usuario > 0) {
        printf ("O numero e positivo");
    }
    else if (numero_usuario < 0) {
        printf ("O numero e negativo");
    }
    else {
        printf ("O numero e igual a zero");
    }
    return 0;
}