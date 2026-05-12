#include <iostream>
using namespace std;

double media(double x, double y, double z);

int main() {
    double nota1, nota2, nota3;
    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;
    cout << "Nota 3: ";
    cin >> nota3;
    cout << "Media = " << media(nota1, nota2, nota3) << endl;
    return 0;
}

double media(double x, double y, double z) {
    return (x + y + z) / 3;
}