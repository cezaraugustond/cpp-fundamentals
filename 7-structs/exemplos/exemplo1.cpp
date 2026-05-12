#include <iostream>
using namespace std;

struct Aluno {
    string nomes;
    double notas[4];
    double media;
};
void lerDados(Aluno alunos[50], int *indiceAluno);
void exibir(Aluno alunos[50], int *indiceAluno);
string situacao(Aluno alunos[50], int i);
void verificaResposta(bool* maxLimite);
void verificaPonteiro(int* indiceAluno, bool* maxLimite);

int main() {
    Aluno alunos[50];
    int contador = 0;
    int* indiceAluno = &contador;
    bool limite = false;
    bool* maxLimite = &limite;
    do {
        lerDados(alunos, indiceAluno);
        verificaResposta(maxLimite);
        verificaPonteiro(indiceAluno, maxLimite);
    } while (*maxLimite == false);
    cout << "valor contador: " << *indiceAluno << endl;
    exibir(alunos, indiceAluno);
    return 0;
}

void lerDados(Aluno alunos[50], int *indiceAluno){
    double somador = 0;
    cout << "-- DADOS DOS ALUNOS --" << endl;
    cout << "Nome: ";
    cin >> alunos[*indiceAluno].nomes;
    for (int j = 0; j < 4; j ++){
        cout << "Nota " << (j + 1) << ": ";
        cin >> alunos[*indiceAluno].notas[j];
        somador += alunos[*indiceAluno].notas[j];
    }
    alunos[*indiceAluno].media = somador / 4;
    cout << "----------------------------" << endl;
}

void exibir(Aluno alunos[50], int *indiceAluno){
    for (int i = 0; i < *indiceAluno; i++){
        cout << "==== BOLETIM ====" << endl;
        cout << "Nome: " << alunos[i].nomes << endl;
        cout << "Media = " << alunos[i].media << endl;
        cout << "Situacao: " << situacao(alunos, i) << endl;
        cout << "===========================" << endl;
    }
}

string situacao(Aluno alunos[50], int i){
    if (alunos[i].media >= 7) {
            return "APROVADO";
    } else if (alunos[i].media < 5) {
        return "REPROVADO";
    } else {
        return "EM RECUPERACAO";
    }
}

void verificaResposta(bool* maxLimite){
    string resposta;
    cout << "Adicionar outro aluno? [S/N]: ";
    cin >> resposta;
    if (tolower(resposta[0]) == 's'){
        *maxLimite = false;
    } else {
        *maxLimite = true;
    }
}

void verificaPonteiro(int* indiceAluno, bool* maxLimite){
    *indiceAluno = *indiceAluno + 1;
    if (*indiceAluno == 50) {
        *maxLimite = true;
    }
}