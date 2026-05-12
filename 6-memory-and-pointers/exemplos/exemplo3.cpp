#include <iostream>
using namespace std;

// Declaração da função que recebe um ponteiro para inteiro e retorna o quadrado do valor apontado
int quadrado(int* x); 

int main() {
    int valor, resultado;
    cout << "Valor: ";
    cin >> valor;
    resultado = quadrado(&valor); // Chama a função passando o endereço da variável valor
    cout << "Quadrado de " << valor << " = " << resultado << endl;

    return 0;
}

// Função que calcula o quadrado de um número acessando seu valor via ponteiro
int quadrado(int* x) {
    return *x * *x;     // Acessa o valor da variável apontada por x e retorna seu quadrado.
}