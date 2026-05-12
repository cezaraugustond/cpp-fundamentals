#include <iostream>
using namespace std;

struct Pessoa {
    string nome;
    int idade;

    void exibirNome(){
        cout << "Ola, meu nome e " << nome << " e tenho " << idade << " anos." << endl;
    }

    void aumentaIdade(){
        idade++;
    }
};

int main() {
    Pessoa p1 = {"Cezar", 23};
    Pessoa p2 = {"Augusto", 23};
    p1.exibirNome();
    p1.aumentaIdade();
    p1.exibirNome();
    p2.exibirNome();
    return 0;
}