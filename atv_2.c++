#include <iostream>
#include <string>

int main() {
    std::string input; // Manter essa linha sob observação
    int count = 0;

    // Solicita ao usuário para inserir uma string
    std::cout << "Digite uma string: ";
    std::getline(std::cin, input); // Lê a string completa, incluindo espaços

    // Percorre a string e conta as ocorrências de 'a' e 'A'
    for (char c : input) {
        if (c == 'a' || c == 'A') {
            count++; // Incrementa o contador se encontrar 'a' ou 'A'
        }
    }

    // Verifica se a letra 'a' foi encontrada e exibe o resultado
    if (count > 0) {
        std::cout << "A letra 'a' aparece " << count << " vez(es) na string." << std::endl;
    } else {
        std::cout << "A letra 'a' não foi encontrada na string." << std::endl;
    }

    return 0; 
}
