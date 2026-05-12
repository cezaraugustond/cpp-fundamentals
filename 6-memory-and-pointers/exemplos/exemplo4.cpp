#include <iostream>
using namespace std;

// Função que calcula o quadrado do valor apontado pelo ponteiro
void quadrado(int* x); 

int main() {
    int num;
    cout << "Valor: ";
    cin >> num;
    quadrado(&num); // Passa o endereço de num para a função.
    cout << "Quadrado = " << num << endl;
    return 0;
}

void quadrado(int* x) {
    *x *= *x;               // Modifica o valor armazenado no endereço apontado por x.        
}
/*
A função recebe um ponteiro para a variável num.
Ela altera diretamente o valor apontado, multiplicando-o por ele mesmo.
Assim, a variável original no main() é modificada.
*/