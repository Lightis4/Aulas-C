// Questão 09 — Calculadora de salário
// Solicite o salário de um funcionário e o valor de um bônus. Calcule e apresente o salário total.

#include <iostream>

int main(){
    float salario;
    float bonus;

    std::cout << "Digite seu salario R$: ";
    std::cin >> salario;

    std::cout << "Digite o valor do bonus R$: ";
    std::cin >> bonus;

    std::cout << "O valor do salario mais o bonus e: " << " R$: " << salario + bonus;

    return 0;
}