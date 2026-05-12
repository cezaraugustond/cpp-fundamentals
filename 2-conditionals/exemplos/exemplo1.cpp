#include <iostream>
using namespace std;

int main() {
    int valor1, valor2;
    bool maior, menor, maiorOuIgual, menorOuIgual, igual, diferente;
    cout << "Valor 1: ";
    cin >> valor1;
    cout << "Valor 2: ";
    cin >> valor2;
    maior = valor1 > valor2;
    menor = valor1 < valor2;
    maiorOuIgual = valor1 >= valor2;
    menorOuIgual = valor1 <= valor2;
    igual = valor1 == valor2;
    diferente = valor1 != valor2;
    cout << boolalpha;
    cout << "Valor 1 > Valor 2? " << maior << endl;
    cout << "Valor 1 < Valor 2? " << menor << endl;
    cout << "Valor 1 >= Valor 2? " << maiorOuIgual << endl;
    cout << "Valor 1 <= Valor 2? " << menorOuIgual << endl;
    cout << "Valor 1 == Valor 2? " << igual << endl;
    cout << "Valor 1 != Valor 2? " << diferente << endl;
}