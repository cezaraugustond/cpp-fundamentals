#include <iostream>
using namespace std;

int main(){
    double divisao1 = 9 / 8;
    double divisao2 = 9.0 / 8;
    double divisao3 = 9 / 8.0;
    double divisao4 = (double)9 / 8;
    cout << "Divisão 1 = " << divisao1 << endl;
    cout << "Divisão 2 = " << divisao2 << endl;
    cout << "Divisão 3 = " << divisao3 << endl;
    cout << "Uso do casting => Divisão 4 = " << divisao4 << endl;
    return 0;
}