#include <iostream>
using namespace std;

int main() {
    int valor;
    cout << "Valor: ";
    cin >> valor;
    cout << "Tabuada do " << valor << ": " << endl;
    for (int i = 0; i <= 10; i++){
        cout << valor << " x " << i << " = " << valor * i << endl;
    }
    return 0;
}