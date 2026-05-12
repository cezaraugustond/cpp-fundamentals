#include <iostream>
using namespace std;

int main() {
    int valor1, valor2, maior;
    cout << "Valor 1: ";
    cin >> valor1;
    cout << "Valor 2: ";
    cin >> valor2;
    maior = (valor1 > valor2) ? valor1 : valor2;
    cout << "Maior valor: " << maior << endl;
    return 0;
}