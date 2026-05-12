#include <iostream>
#include "math.h"
using namespace std;

void operacao(double x, double y, char o);

int main() {
    while(true) {
        double valor1, valor2;
        int resposta;
        char operador;
        cout << "-------------" << endl;
        cout << " CALCULADORA " << endl;
        cout << "-------------" << endl;
        cout << "Valor 1: ";
        cin >> valor1;
        cout << "Operador [+ - * /]: ";
        cin >> operador;
        cout << "Valor 2: ";
        cin >> valor2;
        cout << "-----------------------" << endl;
        operacao(valor1, valor2, operador);
        cout << "-----------------------" << endl;
        cout << "Fazer outra operacao? [SIM = 1 / NAO = 0]: ";
        cin >> resposta;
        if (resposta == 0){
            cout << "-----------------------" << endl;
            cout << "PROGRAMA FINALIZADO!" << endl;
            break;
        }
    }
    return 0;
}

void operacao(double x, double y, char o) {
    switch (o) {
        case '+':
            cout << "Soma: " << x << " + " << y << " = " << soma(x, y) << endl;
            break;
        case '-':
            cout << "Subtracao: " << x << " - " << y << " = " << sub(x ,y) << endl;
            break;
        case '*':
            cout << "Multiplicacao: " << x << " * " << y << " = " << multi(x, y) << endl;
            break;
        case '/':
            if (y == 0) {
                cout << "ERRO: divisao por zero!" << endl;
            } else {
                cout << "Divisao: " << x << " / " << y << " = " << divi(x, y) << endl;
            }
            break;
        default:
            cout << "Operador INVALIDO!" << endl;
            break;
    }
}