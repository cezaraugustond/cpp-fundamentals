#include <iostream> 
using namespace std;

int main() {
    double distancia, kmPorLitro, precoGasolina, valor;
    cout << "Distancia(Km) da viagem: ";
    cin >> distancia;
    cout << "Quantos km por litro faz seu carro: ";
    cin >> kmPorLitro;
    cout << "Preco da gasolina: R$";
    cin >> precoGasolina;
    valor = (distancia/kmPorLitro) * precoGasolina;
    cout << "Custo da viagem total: R$" << valor << endl;
    return 0;
}