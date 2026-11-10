// Questão 08 — Calculadora de idade
// Solicite o ano de nascimento e calcule a idade aproximada considerando o ano de 2026.

#include <iostream>

int main(){
    int nascimento;

    std::cout << "Digite seu ano de nascimento: ";
    std::cin >> nascimento;

    std::cout << "Sua idade e: " << 2026 - nascimento << "anos";
}