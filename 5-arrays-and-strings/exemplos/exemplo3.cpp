#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    string valor1, valor2;
    cout << "Valor 1: ";
    cin >> valor1;
    cout << "Valor 2: ";
    cin >> valor2;
    try {
        num1 = stoi(valor1);
        num2 = stoi(valor2);
        cout << "Soma entre os valores: " << (num1 + num2) << endl;
        cout << "Concatenacao entre os valores: " << (valor1 + valor2) << endl;
    } catch (invalid_argument& e) {
        cout << "Argumento invalido!" << endl;
    } catch (out_of_range& e) {
        cout << "O tipo inteiro nao suporta esse valor!" << endl;
    }
    return 0;
}