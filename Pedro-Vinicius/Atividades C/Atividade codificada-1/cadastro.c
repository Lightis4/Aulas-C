#include <stdio.h>

int main(void){
    char inicial = 'A'; 
    int idade = 20;
    float nota = 8.5f;
    

    printf("Inicial: %c\n", inicial); 
    printf("Idade: %d anos\n", idade);
    printf("Nota: %.1f\n", nota);

    // Achei muito interessante o uso de especificadores para 
    // indicar o espaço que esta reservado dentro do texto.
    return 0;
}