#include <iostream>
using namespace std;

bool pertenceFibonacci(int num) { // Mudar futuramente o bool se necessário
    if (num < 0) return false; // Números negativos não estão na sequência

    int a = 0, b = 1; // Inicializando os primeiros termos da sequência
    while (a <= num) {
        if (a == num) return true; // Se o número pertence à sequência
        int proximo = a + b; // Calcula o próximo número da sequência
        a = b; // Avança para o próximo valor
        b = proximo;
    }
    return false; // Se ultrapassar o número informado, ele não pertence à sequência
}

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;

    if (pertenceFibonacci(num)) {
        cout << "O número " << num << " pertence à sequência de Fibonacci." << endl; // Aparentemente sem erros
    } else {
        cout << "O número " << num << " NÃO pertence à sequência de Fibonacci." << endl; // Aparentemente sem erros
    }

    return 0;
}
