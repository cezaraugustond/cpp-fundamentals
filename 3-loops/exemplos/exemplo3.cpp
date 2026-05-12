#include <iostream>
using namespace std;

int main() {
    int valor;
    int fatorial = 1;
    cout << "Valor: ";
    cin >> valor;
    cout << "Fatorial de " << valor << "! = ";
    do {
        fatorial *= valor;
        if (valor > 1) {
            cout << valor << " x ";
        } else {
            cout << valor << " = ";
        }
        valor--;
    } while (valor > 0);
    cout << fatorial;
    return 0;
}