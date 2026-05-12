#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ponteiro = &x;

    *ponteiro = 300;
    
    cout << "Valor de x apos atribuicao via ponteiro: " << x << endl;
    cout << "Valor acessado por *ponteiro: " << *ponteiro << endl << endl;;

    x = 100;

    cout << "Valor de x apos modificacao direta: " << x << endl;
    cout << "Valor acessado por *ponteiro: " << *ponteiro << endl << endl;

    cout << "Endereco de x: " << &x << endl;
    cout << "Endereco armazenado em ponteiro: " << ponteiro << endl;

    return 0;
}