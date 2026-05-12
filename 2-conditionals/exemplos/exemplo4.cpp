#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, nota3, nota4, media;
    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;
    cout << "Nota 3: ";
    cin >> nota3;
    cout << "Nota 4: ";
    cin >> nota4;
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    cout << "Sua media = " << media << endl;
    cout << "Situacao: ";
    if (media >= 7) {
        cout << "APROVADO!" << endl;
    } else if (media < 5) {
        cout << "REPROVADO" << endl;
    } else {
        cout << "EM RECUPERACAO!" << endl;
    }
    return 0;
}