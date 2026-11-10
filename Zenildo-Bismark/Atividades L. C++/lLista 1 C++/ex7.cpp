// Questão 07 — Calculadora de média
// Solicite três notas de um estudante, calcule a média aritmética e apresente o resultado com duas casas
// decimais.

#include <iostream>
#include <iomanip>

int main(){
    float nota1;
    float nota2;
    float nota3;

    std::cout << "Digite sua primeira nota: ";
    std::cin >> nota1;

    std::cout << "Digite a segunda nota: ";
    std::cin >> nota2;

    std::cout << "Digite a terveira nota: ";
    std::cin >> nota3;

    std::cout << "A media das notas e: " 
                << std::fixed << std::setprecision(2) 
                << (nota1 + nota2 + nota3) / 3;

    return 0;
}