#include <iostream>
using namespace std;

int main() {
    int x = 10;

    int* ponteiroX;
    ponteiroX = &x;

    cout << "Valor de x (direto): " << x << endl;
    cout << "Endereco de x (direto): " << &x << endl << endl; 

    cout << "Valor de x (via ponteiro): " << *ponteiroX << endl;
    cout << "Endereco amarzanedo no ponteiro: " << ponteiroX << endl;
    return 0;
}