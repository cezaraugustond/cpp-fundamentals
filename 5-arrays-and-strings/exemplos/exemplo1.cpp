#include <iostream>
using namespace std;

int main() {
    int idades[5];
    int tamanho = sizeof(idades) / sizeof(idades[0]);
    for (int i = 0; i < tamanho; i++){
        cout << "Idade: ";
        cin >> idades[i];
    }
    cout << "--> DADOS: " << endl;
    for (int i = 0; i < tamanho; i++){
        cout << "Idade da " << i + 1 << "a pessoa: " << idades[i] << endl;
    }
    return 0;
}