#include <iostream>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    double notas[4];
    double media;
    
    void lerDados() {
        cout << "--> DADOS DO ALUNO: " << endl;
        cout << "Nome: ";
        cin >> nome;
        cout << "Idade: ";
        cin >> idade; 
        for (int i = 0; i < 4; i++){
            cout << "Nota " << (i + 1) << ": ";
            cin >> notas[i];
        }
    }

    void calcularMedia() {
        double somador = 0;
        for (int i = 0; i < 4; i++){
            somador += notas[i];
        }
        media = somador /4;
    }

};

struct Relatorio {
    int aprovado;
    int reprovado;
    int recuperacao;

    void contadorMedia(Aluno alunos[50], int indexAluno) {
        aprovado = 0;
        reprovado = 0;
        recuperacao = 0;
        for (int i = 0; i < indexAluno; i++){
            if (alunos[i].media >= 7){
                aprovado++;
            } else if (alunos[i].media < 5){
                reprovado++;
            } else {
                recuperacao++;
            }
        }
    }
};

void verifica(int* indexAluno, bool *maxLimite);
void exibir(Aluno alunos[50], Relatorio contador, int* indexAluno);

int main() {
    Aluno alunos[50];
    int i = 0;
    int* indexAluno = &i;
    bool limite = true;
    bool* maxLimite = &limite;
    do {
        alunos[*indexAluno] .lerDados();
        alunos[*indexAluno] .calcularMedia();
        verifica(indexAluno, maxLimite);
    } while (*maxLimite);
    Relatorio contador;
    contador.contadorMedia(alunos, *indexAluno);
    cout << "=========================" << endl;
    exibir(alunos, contador, indexAluno);
    return 0;
}

void verifica(int* indexAluno, bool *maxLimite) {
    string resposta;
    cout << "Adicionar mais um aluno? [S/N]: ";
    cin >> resposta;
    if ((resposta[0] == 'S') || (resposta[0] == 's')) {
        *indexAluno = *indexAluno + 1;
        *maxLimite = true;
    } else {
        *indexAluno = *indexAluno + 1;
        *maxLimite = false;
    }
    if (*indexAluno == 50){
        cout << "Limite de alunos cadastrado atingido!" << endl;
        *maxLimite = false;
    }
}

void exibir(Aluno alunos[50], Relatorio contador, int* indexAluno) {
    for (int c = 0; c < *indexAluno; c++){
        cout << "=== BOLETIM === " << endl;
        cout << "Nome: " << alunos[c].nome << endl;
        cout << "Idade: " << alunos[c].idade << endl;
        cout << "Media = " << alunos[c].media << endl;
        cout << "=========================" << endl;
    }
    cout << "Quantidade de alunos APROVADO: " << contador.aprovado << endl;
    cout << "Quantidade de alunos EM RECUPERACAO: " << contador.recuperacao << endl;
    cout << "Quantidade de alunos REPROVADO: " << contador.reprovado << endl;
}