#include <iostream>

int main(){
    int anoNascimento;
    const int anoAtual = 2026; //Declarando o valor como constante , Não podendo ser alterado

    std::cout << "Digite seu ano de nascimento: ";

    // cin=entrada e cout = saida
    // lendo oq esta recebendo do usuario
    if(!(std::cin >> anoNascimento)){ 
        std::cout <<"Entrada invalida.\n";
        return 1;
    }
    // Pegando a mesma logica do C ele valida o ano de nascimento rejeitando anos antes de 1900 e depois 2026
    if(anoNascimento < 1900 || anoNascimento > anoAtual){
        std::cout <<"Ano de Nascimento Invalido.\n";
        return 1;
    }

    std::cout <<"Idade: "<< anoAtual - anoNascimento << " anos\n";
    return 0;
}