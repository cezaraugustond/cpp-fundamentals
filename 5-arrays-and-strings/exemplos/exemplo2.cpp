#include <iostream>
using namespace std;

int main() {
    double notas[4], somador = 0, media;
    int tamanho = sizeof(notas) / sizeof(notas[0]);
    for (int i = 0; i < tamanho; i++){
        cout << "Nota " << i + 1 << ": ";
        cin >> notas[i];
        somador += notas[i];
    }
    media = somador / tamanho;
    cout << "-----------------" << endl;
    cout << "Media = " << media << endl;
    return 0;
}