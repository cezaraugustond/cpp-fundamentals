#include <iostream>
using namespace std;

int main() {
    int valor, cont, fatorial;
    cout << "Valor: ";
    cin >> valor;
    cont = 1;
    fatorial = 1;
    while (cont <= valor){
        fatorial *= cont;
        cont ++;
    }
    cout << "Fatorial de " << valor << "! = " << fatorial << endl;
    return 0;
}