#include <iostream>
using namespace std;

int main () {
    double valor;
    bool teste;
    do {
        cout << "Valor numerico: ";
        cin >> valor;
        teste = cin.fail();
        if (teste){
            cout << "Entrada INVALIDA!" << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
    } while (teste);
    cout << "Valor digitado: " << valor;
    return 0;
}