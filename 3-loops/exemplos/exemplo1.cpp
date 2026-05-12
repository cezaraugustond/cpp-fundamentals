#include <iostream>
using namespace std;

int main() {
    int valor, cont;
    cout << "Valor: ";
    cin >> valor;
    cont = 0;
    while (cont <= valor) {
        cout << cont << endl;
        cont ++;
    }
    return 0;
}