#include <iostream>
using namespace std;

int main() {
    int valor, somador = 0;
    while (true){
        cout << "Valor: ";
        cin >> valor;
        if (valor == 0) {
            break;
        } else {
            somador += valor;
        }
    }
    cout << "Somatorio dos valores digitados = " << somador << endl;
    return 0;
}