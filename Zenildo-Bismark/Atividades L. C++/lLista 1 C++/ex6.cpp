// Questão 06 — Soma de dois números
// Solicite dois números inteiros e apresente a soma entre eles. Exemplo: 10 + 5 = 15.

#include <iostream>

int main(){
    int n1;
    int n2;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> n1;

    std::cout << "Digite o segundo numero: ";
    std::cin >> n2;

    std::cout << "A soma de " << n1 << " + " << n2 << " = " << n1 + n2;

    return 0;
}