#include <iostream>

int main() {
    int INDICE = 12; // Valor limite
    int SOMA = 0;    // Inicializa SOMA
    int K = 1;       // Inicializa K

    // Loop que itera enquanto K for menor que INDICE
    while (K < INDICE) {
        K = K + 1;        // Incrementa K
        SOMA = SOMA + K; // Adiciona K à SOMA
    }

    // Imprime o valor final de SOMA
    std::cout << "O valor de SOMA é: " << SOMA << std::endl;

    return 0;
}
