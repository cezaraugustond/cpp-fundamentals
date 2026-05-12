#include <iostream>
using namespace std;

struct Aluno{
    string nome;
    int idade;
    double notas[4];
    double media;
};

int main() {
    Aluno alunos[50];
    int i = 0;
    string resposta;
    bool verifica;
    do {
        double somador = 0;
        cout << "--> DADOS DO ALUNO: " << endl;
        cout << "Name: ";
        cin >> alunos[i].nome;
        cout << "Idade: ";
        cin >> alunos[i].idade; 
        for (int j = 0; j < 4; j++){
            cout << "Nota " << (j + 1) << ": ";
            cin >> alunos[i].notas[j];
            somador += alunos[i].notas[j];
        }
        alunos[i].media = somador /4;
        cout << "Adicionar mais um aluno? [S/N]: ";
        cin >> resposta;
        if ((resposta[0] == 'S') || (resposta[0] == 's')) {
            i++;
            verifica = true;
        } else {
            i++;
            verifica = false;
        }
        if (i == 50){
            cout << "Limite de alunos cadastrado atingido!" << endl;
            verifica = false;
        }
    } while (verifica);
    cout << "=========================" << endl;
    for (int c = 0; c < i; c++){
        cout << "=== BOLETIM === " << endl;
        cout << "Nome: " << alunos[c].nome << endl;
        cout << "Idade: " << alunos[c].idade << endl;
        cout << "Media = " << alunos[c].media << endl;
        cout << "=========================" << endl;
    }
    return 0;
}