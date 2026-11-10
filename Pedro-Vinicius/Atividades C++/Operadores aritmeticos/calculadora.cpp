#include <iostream>
#include <iomanip>

int main() {
    double a, b;

    std::cout << "Digite os dois numeros: ";
    // Lendo a entrada dos dois numeros usando std::cin, verifica se foi válida, 
    // caso contrário, exibe uma mensagem de erro e encerra o programa.
    if (!(std::cin >> a >> b)) {
        std::cout << "Entrada invalida!" << std::endl;
        return 1;
    }

    // Mostrando o resultado dos operadores com duas casas decimais usando std::fixed e std::setprecision.
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Soma: " << a + b << std::endl;
    std::cout << "Subtracao: " << a - b << std::endl;
    std::cout << "Multiplicacao: " << a * b << std::endl;
    
    if (b != 0.0) {
        std::cout << "Divisao: " << a / b << std::endl;
    } else {
        std::cout << "Divisao: nao e possivel dividir por zero!" << std::endl;
    }

    return 0;
}