#include "ListaAlunos.hpp"
#include <algorithm>
#include <cstdint>
#include <fstream>
#include <iostream>

namespace {
    const std::uint32_t MAX_ALUNOS = 100000;
    const std::uint32_t MAX_TAMANHO_NOME = 1000;
}

void ListaAlunos::adicionar(const Aluno& aluno) {
    alunos.push_back(aluno);
}

bool ListaAlunos::removerPorNome(const std::string& nome) {
    std::vector<Aluno>::iterator it = std::find_if(alunos.begin(), alunos.end(),
        [&nome](const Aluno& aluno) {
            return aluno.getNome() == nome;
        });

    if (it == alunos.end()) {
        return false;
    }

    alunos.erase(it);
    return true;
}

bool ListaAlunos::vazia() const {
    return alunos.empty();
}

void ListaAlunos::listar() const {
    if (vazia()) {
        std::cout << "Nenhum aluno cadastrado.\n";
        return;
    }

    std::cout << "\n=== Alunos cadastrados ===\n";
    for (std::vector<Aluno>::const_iterator it = alunos.begin(); it != alunos.end(); ++it) {
        it->exibirResultado();
    }
}

bool ListaAlunos::salvar(const std::string& nomeArquivo) const {
    std::ofstream arquivo(nomeArquivo.c_str(), std::ios::binary | std::ios::trunc);

    if (!arquivo) {
        std::cerr << "Erro ao abrir " << nomeArquivo << " para salvar.\n";
        return false;
    }

    std::uint32_t quantidade = static_cast<std::uint32_t>(alunos.size());
    arquivo.write(reinterpret_cast<const char*>(&quantidade), sizeof(quantidade));

    for (std::vector<Aluno>::const_iterator it = alunos.begin(); it != alunos.end(); ++it) {
        const std::string nome = it->getNome();
        std::uint32_t tamanhoNome = static_cast<std::uint32_t>(nome.size());
        const double notaB1 = it->getNotaB1();
        const double notaB2 = it->getNotaB2();

        arquivo.write(reinterpret_cast<const char*>(&tamanhoNome), sizeof(tamanhoNome));
        arquivo.write(nome.data(), tamanhoNome);
        arquivo.write(reinterpret_cast<const char*>(&notaB1), sizeof(notaB1));
        arquivo.write(reinterpret_cast<const char*>(&notaB2), sizeof(notaB2));
    }

    if (!arquivo) {
        std::cerr << "Erro ao salvar os alunos.\n";
        return false;
    }

    return true;
}

bool ListaAlunos::carregar(const std::string& nomeArquivo) {
    std::ifstream arquivo(nomeArquivo.c_str(), std::ios::binary);

    if (!arquivo) {
        return false;
    }

    std::uint32_t quantidade;
    arquivo.read(reinterpret_cast<char*>(&quantidade), sizeof(quantidade));

    if (!arquivo || quantidade > MAX_ALUNOS) {
        std::cerr << "Arquivo de alunos invalido.\n";
        return false;
    }

    std::vector<Aluno> temporarios;
    for (std::uint32_t i = 0; i < quantidade; ++i) {
        std::uint32_t tamanhoNome;
        double notaB1;
        double notaB2;

        arquivo.read(reinterpret_cast<char*>(&tamanhoNome), sizeof(tamanhoNome));
        if (!arquivo || tamanhoNome == 0 || tamanhoNome > MAX_TAMANHO_NOME) {
            std::cerr << "Arquivo de alunos invalido.\n";
            return false;
        }

        std::string nome(tamanhoNome, '\0');
        arquivo.read(&nome[0], tamanhoNome);
        arquivo.read(reinterpret_cast<char*>(&notaB1), sizeof(notaB1));
        arquivo.read(reinterpret_cast<char*>(&notaB2), sizeof(notaB2));

        if (!arquivo || notaB1 < 0.0 || notaB1 > 10.0 || notaB2 < 0.0 || notaB2 > 10.0) {
            std::cerr << "Arquivo de alunos invalido.\n";
            return false;
        }

        Aluno aluno(nome);
        aluno.setNotas(notaB1, notaB2);
        temporarios.push_back(aluno);
    }

    alunos = temporarios;
    return true;
}
