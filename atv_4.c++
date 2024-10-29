#include <iostream>
#include <vector>

void calcularSequencias() {
    // a) 1, 3, 5, 7, ___ a partir daqui colocar todos os valores dessa mesma forma
    int a = 1;
    std::cout << "Próximo elemento da sequência a) 1, 3, 5, 7: " << (a + 8) << std::endl;

    // b) 2, 4, 8, 16, 32, 64, ____
    int b = 64;
    std::cout << "Próximo elemento da sequência b) 2, 4, 8, 16, 32, 64: " << (b * 2) << std::endl;

    // c) 0, 1, 4, 9, 16, 25, 36, ____
    int c = 6; // O próximo número inteiro para o quadrado
    std::cout << "Próximo elemento da sequência c) 0, 1, 4, 9, 16, 25, 36: " << (c * c) << std::endl;

    // d) 4, 16, 36, 64, ____
    int d = 10; // O próximo número par para o quadrado
    std::cout << "Próximo elemento da sequência d) 4, 16, 36, 64: " << (d * d) << std::endl;

    // e) 1, 1, 2, 3, 5, 8, ____
    int e1 = 5, e2 = 8; // Dois últimos números da sequência de Fibonacci
    std::cout << "Próximo elemento da sequência e) 1, 1, 2, 3, 5, 8: " << (e1 + e2) << std::endl;

    // f) 2, 10, 12, 16, 17, 18, 19, ____
    std::cout << "Próximo elemento da sequência f) 2, 10, 12, 16, 17, 18, 19: " << 20 << std::endl;
}

int main() {
    calcularSequencias(); // Chama a função que calcula e imprime as sequências
    return 0; // FIM, finalmente
}
