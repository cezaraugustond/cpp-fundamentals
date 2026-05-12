#include <iostream>
using namespace std;

int main() {
    int idade;
    cout << "Idade: ";
    cin >> idade;
    if ((idade == 16) || (idade == 17) || (idade >= 70)) {
        cout << "Voto facultativo!" << endl;
    } else if ((idade >= 18) && (idade < 70)) {
        cout << "Voto obrigatorio!" << endl;
    } else {
        cout << "Nao pode votar!" << endl;
    }
    return 0;
}