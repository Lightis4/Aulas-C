// Questão 03 — Declarando variáveis
// Declare uma variável char para a inicial do nome, 
//uma int para a idade e uma float para uma nota. Exiba os
//valores com os especificadores de formato adequados.

#include <iostream>

int main(){
    char inicial = 'Z';
    int idade = 27;
    float nota = 9.5;

    std::cout << "Inicial: " << inicial << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Nota: " << nota << std::endl;

    return 0;
}