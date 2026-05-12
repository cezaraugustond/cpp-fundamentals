#include <iostream>
using namespace std;

double divisao(double a, double b);

int main() {
    double valor1, valor2;
    cout << "Valor 1: ";
    cin >> valor1;
    cout << "Valor 2: ";
    cin >> valor2;
    try {
        double resultado = divisao(valor1, valor2);
        cout << "Resultado da divisao = " << resultado << endl;
    } catch (exception& e) {
        cout << e.what() << endl;
        return -1;
    }
    return 0;
}

double divisao(double a, double b) {
    if (b == 0) {
       throw runtime_error("ERRO: divisao por zero nao permitida!");
    }
    return a / b;
}