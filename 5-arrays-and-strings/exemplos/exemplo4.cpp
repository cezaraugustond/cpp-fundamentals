#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    int somaLinhas[4] = {0};
    int somaDiP = 0;
    int maior;
    bool primeiro = true;
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Valor da linha [" << (i + 1) << "] e coluna [" << (j + 1) << "]: ";
            cin >> matriz[i][j];
            somaLinhas[i] += matriz[i][j];
        }
    }
    cout << "==========================" << endl;
    cout << "Exibicao da matriz[4][4]: " << endl;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout << matriz[i][j] << " ";
            if (i == j){
                somaDiP += matriz[i][j]; 
            }
            if (primeiro) {
                maior = matriz[i][j];
                primeiro = false;
            } else if (matriz[i][j] >= maior) {
                maior = matriz[i][j];
            }
        }
        cout << endl;
    }
    cout << "==========================" << endl;
    cout << "Analise da matriz: " << endl;
    for (int i = 0; i < 4; i++){
        cout << "Somatorio da linha " << (i + 1) << " = " << somaLinhas[i] << endl;
    }
    cout << "Somatorio da diagonal principal = " << somaDiP << endl;
    cout << "Maior valor da matriz = " << maior << endl;
    return 0;
}