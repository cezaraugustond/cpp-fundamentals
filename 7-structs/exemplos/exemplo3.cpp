#include <iostream>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    double notas[4];
    double media;
};

struct Relatorio {
    int aprovado;
    int reprovado;
    int recuperacao;
};

void lerDados(Aluno alunos[50], int* indexAluno);
void verifica(int* indexAluno, bool *maxLimite);
void contadorMedia(Aluno alunos[50], Relatorio& contador, int* indexAluno);
void exibir(Aluno alunos[50], Relatorio contador, int* indexAluno);

int main() {
    Aluno alunos[50];
    Relatorio contador;
    contador.aprovado = 0;
    contador.recuperacao = 0;
    contador.reprovado = 0;
    int i = 0;
    int* indexAluno = &i;
    bool limite = true;
    bool* maxLimite = &limite;
    do {
        lerDados(alunos, indexAluno);
        verifica(indexAluno, maxLimite);
    } while (*maxLimite);
    contadorMedia(alunos, contador, indexAluno);
    cout << "=========================" << endl;
    exibir(alunos, contador, indexAluno);
    return 0;
}

void lerDados(Aluno alunos[50], int* indexAluno) {
    double somador = 0;
    cout << "--> DADOS DO ALUNO: " << endl;
    cout << "Nome: ";
    cin >> alunos[*indexAluno].nome;
    cout << "Idade: ";
    cin >> alunos[*indexAluno].idade; 
    for (int j = 0; j < 4; j++){
        cout << "Nota " << (j + 1) << ": ";
        cin >> alunos[*indexAluno].notas[j];
        somador += alunos[*indexAluno].notas[j];
    }
    alunos[*indexAluno].media = somador /4;
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

void contadorMedia(Aluno alunos[50], Relatorio& contador, int* indexAluno) {
    for (int i = 0; i < *indexAluno; i++){
        if (alunos[i].media >= 7){
            contador.aprovado++;
        } else if (alunos[i].media < 5){
            contador.reprovado++;
        } else {
            contador.recuperacao++;
        }
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