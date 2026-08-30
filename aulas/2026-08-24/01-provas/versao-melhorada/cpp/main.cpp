#include <iostream>
#include <limits>
#include <string>
#include "Aluno.hpp"
#include "ListaAlunos.hpp"

// Compilar no Linux com o comando:
// g++ -std=c++11 -o provas main.cpp Aluno.cpp Prova.cpp ListaAlunos.cpp
// Executar com: ./provas

const std::string ARQUIVO_ALUNOS = "alunos.dat";

void limparBuffer() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void aguardarEnter() {
    std::cout << "\nPressione Enter para continuar...";
    std::cin.get();
}

void exibirMenu() {
    std::cout << "\n=== Sistema de Cadastro de Alunos ===\n";
    std::cout << "1 - Adicionar um novo aluno\n";
    std::cout << "2 - Remover aluno\n";
    std::cout << "3 - Listar alunos\n";
    std::cout << "4 - Salvar dados\n";
    std::cout << "0 - Salvar e sair\n";
    std::cout << "Escolha uma opcao: ";
}

void lerNota(const std::string& descricao, double& nota) {
    while (true) {
        std::cout << descricao;

        if (std::cin >> nota && nota >= 0.0 && nota <= 10.0) {
            limparBuffer();
            return;
        }

        std::cout << "Nota invalida. Digite um valor entre 0 e 10.\n";
        std::cin.clear();
        limparBuffer();
    }
}

void adicionarAluno(ListaAlunos& alunos) {
    std::string nome;
    std::cout << "Nome do aluno: ";
    std::getline(std::cin, nome);

    if (nome.empty()) {
        std::cout << "Nome nao pode ser vazio.\n";
        return;
    }

    double notaB1;
    double notaB2;
    lerNota("Nota da B1 (0 a 10): ", notaB1);
    lerNota("Nota da B2 (0 a 10): ", notaB2);

    Aluno aluno(nome);
    aluno.setNotas(notaB1, notaB2);
    alunos.adicionar(aluno);
    std::cout << "Aluno adicionado com sucesso.\n";
}

void removerAluno(ListaAlunos& alunos) {
    std::string nome;
    std::cout << "Nome do aluno a remover: ";
    std::getline(std::cin, nome);

    if (alunos.removerPorNome(nome)) {
        std::cout << "Aluno removido com sucesso.\n";
    } else {
        std::cout << "Aluno nao encontrado.\n";
    }
}

int main() {
    ListaAlunos alunos;

    if (alunos.carregar(ARQUIVO_ALUNOS)) {
        std::cout << "Dados carregados com sucesso.\n";
    } else {
        std::cout << "Nenhum dado salvo encontrado. Iniciando lista vazia.\n";
    }

    bool sair = false;
    while (!sair) {
        exibirMenu();

        int opcao;
        if (!(std::cin >> opcao)) {
            std::cout << "Opcao invalida. Tente novamente.\n";
            std::cin.clear();
            limparBuffer();
            continue;
        }
        limparBuffer();

        switch (opcao) {
            case 1:
                adicionarAluno(alunos);
                aguardarEnter();
                break;
            case 2:
                removerAluno(alunos);
                aguardarEnter();
                break;
            case 3:
                alunos.listar();
                aguardarEnter();
                break;
            case 4:
                if (alunos.salvar(ARQUIVO_ALUNOS)) {
                    std::cout << "Dados salvos com sucesso.\n";
                }
                aguardarEnter();
                break;
            case 0:
                if (alunos.salvar(ARQUIVO_ALUNOS)) {
                    std::cout << "Dados salvos com sucesso.\n";
                }
                std::cout << "Encerrando o programa.\n";
                sair = true;
                break;
            default:
                std::cout << "Opcao invalida. Tente novamente.\n";
                aguardarEnter();
                break;
        }
    }

    return 0;
}
