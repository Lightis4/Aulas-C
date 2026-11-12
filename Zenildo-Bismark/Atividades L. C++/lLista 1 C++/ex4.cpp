// Questão 04 — Trabalhando com números decimais
// Declare duas variáveis, uma float e outra double, atribua valores decimais e exiba ambos com duas casas decimais.

#include <iostream>
#include <iomanip>

int main(){
    float n1 = 9.4648652564541564;
    double n2 = 10.6416541651651656541;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Float: " << n1 << std::endl;
    std::cout << "Double: " << n2 << std::endl;

    return 0;
}