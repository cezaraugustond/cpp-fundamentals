#include <iostream>

namespace meuNamespace {
    int number = 8;
    namespace outroNamespace {
        int number = 10;
    }
}

namespace CZR = meuNamespace;
namespace Cezar = meuNamespace::outroNamespace;
using namespace CZR;

int main() {
    std::cout << "Primeiro namespace: " << number << std::endl;
    std::cout << "O outro namespace: " << Cezar::number << std::endl;
    return 0;
}