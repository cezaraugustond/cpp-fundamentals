#include <iostream>
using namespace std;

struct codeforgiants {
    char* data;
    int size;

    codeforgiants(const char str[]) {
        size = 0;
        while (str[size] != '\0') {
            size++;
        }
        data = new char[size + 1]; //Aloca dinamicamente um array de caractere.
        for (int i = 0; i < size; i++){
            data[i] = str[i];
        }
        data[size] = '\0';
    }
};

int main() {
    codeforgiants name("Cezar");
    cout << "Tamanho da string: " << name.size << endl;
    cout << "Letra na posicao 0: " << name.data[0] << endl;

    return 0;
}