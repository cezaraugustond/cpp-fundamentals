#include <iostream>
using namespace std;

int main() {
    int opcao;
    double valor1, valor2, soma, subtracao, divisao, multiplicacao;
    cout << "Valor 1: ";
    cin >> valor1;
    cout << "Valor 2: ";
    cin >> valor2;
    cout << endl;
    cout << " MENU " << endl;
    cout << "[1] Soma" << endl;
    cout << "[2] Subtracao" << endl;
    cout << "[3] Divisao" << endl;
    cout << "[4] Multiplicao" << endl;
    cout << "[5] Sair" << endl;
    cout << "Opcao: ";
    cin >> opcao;
    switch (opcao){
        case 1:
            soma = valor1 + valor2;
            cout << valor1 << " + " << valor2 << " = " << soma << endl;
            break;
        case 2:
            subtracao = valor1 - valor2;
            cout << valor1 << " - " << valor2  << " = " << subtracao << endl;
            break;
        case 3:
            divisao = valor1 / valor2;
            cout << valor1 << " / " << valor2 << " = " << divisao << endl;
            break;
        case 4:
            multiplicacao = valor1 * valor2;
            cout << valor1 << " x " << valor2 << " = " << multiplicacao << endl;
            break;
        default:
            cout << "Programa encerrado!" << endl;
            break; 
    }
    return 0;
}