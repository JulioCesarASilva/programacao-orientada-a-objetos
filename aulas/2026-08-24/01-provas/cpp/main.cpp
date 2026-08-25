
#include <iostream>
#include <string>
#include <limits>
#include "Aluno.hpp"

// Compilar no Linux com o comando: g++ -o provas main.cpp Aluno.cpp Prova.cpp
// Executar com: ./provas

int main() {
    std::cout << "=== Sistema de Cadastro de Alunos ===\n";
    std::cout << "Digite os dados do aluno. Para sair, digite 'sair' no nome.\n\n";

    while (true) {
        std::string nome;
        std::cout << "Nome do aluno (ou 'sair'): ";
        std::getline(std::cin, nome);

        // Verifica se o usuário quer encerrar
        if (nome == "sair") {
            std::cout << "Encerrando programa.\n";
            break;
        }

        // Se nome vazio, pede novamente
        if (nome.empty()) {
            std::cout << "Nome não pode ser vazio. Tente novamente.\n";
            continue;
        }

        double n1, n2;
        bool entradaValida = false;

        // Loop para ler as notas com validação
        while (!entradaValida) {
            std::cout << "Nota da B1 (0 a 10): ";
            if (std::cin >> n1) {
                if (n1 >= 0.0 && n1 <= 10.0) {
                    entradaValida = true;
                } else {
                    std::cout << "Nota inválida. Digite um valor entre 0 e 10.\n";
                }
            } else {
                std::cout << "Entrada inválida. Digite um número.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }

        entradaValida = false;
        while (!entradaValida) {
            std::cout << "Nota da B2 (0 a 10): ";
            if (std::cin >> n2) {
                if (n2 >= 0.0 && n2 <= 10.0) {
                    entradaValida = true;
                } else {
                    std::cout << "Nota inválida. Digite um valor entre 0 e 10.\n";
                }
            } else {
                std::cout << "Entrada inválida. Digite um número.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }

        // Limpa o buffer do teclado para a próxima leitura de nome
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        // Cria o aluno e define os dados
        Aluno aluno(nome);
        try {
            aluno.setNotas(n1, n2);
        } catch (const std::exception& e) {
            std::cerr << "Erro ao definir notas: " << e.what() << std::endl;
            continue;
        }

        // Exibe o resultado
        aluno.exibirResultado();
        std::cout << std::endl;
    }

    return 0;
}
