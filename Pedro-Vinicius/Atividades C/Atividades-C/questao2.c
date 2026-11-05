#include <stdio.h>

int main(void){
    char inicial[5] = "Alice"; 
    int idade = 20;
    char curso[22] = "Engenharia de Software";
    char instituição[20] = "Universidade XYZ";
    

    printf("Inicial: %s\n", inicial); 
    printf("Idade: %d anos\n", idade);
    printf("Curso: %s\n", curso);
    printf("Instituição: %s\n", instituição);

    // Achei muito interessante o uso de especificadores para 
    // indicar o espaço que esta reservado dentro do texto.
    return 0;
}