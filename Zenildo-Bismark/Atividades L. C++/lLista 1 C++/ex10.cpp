// Questão 10 — Sistema de cadastro acadêmico
// Solicite nome, idade, matrícula e três notas. Calcule a média e apresente um relatório com todas as
// informações. Use tipos adequados e organize a saída com printf().

#include <iostream>

#include <iostream>
#include <iomanip>

int main() {
    char nome[100];
    int idade;
    int matricula;
    float nota1;
    float nota2;
    float nota3;
    float media;

    std::cout << "Digite seu nome: ";
    std::cin >> nome;

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    std::cout << "Digite sua matricula: ";
    std::cin >> matricula;

    std::cout << "Digite sua primeira nota: ";
    std::cin >> nota1;

    std::cout << "Digite sua segunda nota: ";
    std::cin >> nota2;

    std::cout << "Digite sua terceira nota: ";
    std::cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3;

    std::cout << "\n============== RELATORIO ==============\n";
    std::cout << "Nome: " << nome << "\n";
    std::cout << "Idade: " << idade << " anos\n";
    std::cout << "Matricula: " << matricula << "\n";
    std::cout << "Primeira nota: " << nota1 << "\n";
    std::cout << "Segunda nota: " << nota2 << "\n";
    std::cout << "Terceira nota: " << nota3 << "\n";
    std::cout << "Media: " << std::fixed << std::setprecision(2) << media << "\n";
    std::cout << "=======================================\n";

    return 0;
}