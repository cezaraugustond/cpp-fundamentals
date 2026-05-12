#include <iostream>
using namespace std;

struct Usuario {
    int id;
    string nome;

    Usuario(int suaID, string seuNome) {
        id = suaID;
        nome = seuNome;
        cout << "Metodo Construtor " << endl;
    }

    ~Usuario(){
        cout << "Metodo Destrutor " << endl;
    }
};

int main() {
    Usuario usuario(3454343, "CZR");
    cout << usuario.id << endl;
    cout << usuario.nome << endl;
    return 0;
}