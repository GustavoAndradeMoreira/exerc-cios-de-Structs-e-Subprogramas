#include <iostream>
#include <string>

using namespace std;

const int MAX_ALUNOS = 50;
const int TAM_NOME = 100;

struct Aluno {
    int matricula;
    char nome[TAM_NOME];
};

void lerAlunos(Aluno alunos[], int& qtd) {
    cout << "Informe a quantidade de alunos (maximo " << MAX_ALUNOS << "): ";
    cin >> qtd;
    cin.ignore();

    for (int i = 0; i < qtd; ++i) {
        cout << "Digite a matricula do aluno " << i + 1 << ": ";
        cin >> alunos[i].matricula;
        cin.ignore();

        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin.getline(alunos[i].nome, TAM_NOME);
    }
}

void exibirAlunos(const Aluno alunos[], int qtd) {
    cout << "\nLista de Alunos:\n";
    for (int i = 0; i < qtd; ++i) {
        cout << "Matricula: " << alunos[i].matricula << ", Nome: " << alunos[i].nome << endl;
    }
}

int main() {
    Aluno alunos[MAX_ALUNOS];
    int qtd;

    lerAlunos(alunos, qtd);
    exibirAlunos(alunos, qtd);

    return 0;
}
