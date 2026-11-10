// Questão 05 — Cadastro de estudante
// Solicite idade, inicial do nome e nota de uma avaliação. Utilize scanf() para receber os dados e printf() para
// exibi-los.

#include <iostream>
#include <iomanip>

int main(){
    int idade;
    char inicial;
    float nota;

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    std::cout << "Digite a inicial do seu nome: ";
    std::cin >> inicial;

    std::cout << "Digite sua nota: ";
    std::cin >> nota;

    std::cout << "========== INFORMACOES ============\n";
    std::cout << "Sua idade e: " << idade << "anos\n";
    std::cout << "A inicial do seu nome e: " << inicial << "\n";
    std::cout << "Nota da avaliacao: " << std::fixed << std::setprecision(2) << nota;

    return 0;
}