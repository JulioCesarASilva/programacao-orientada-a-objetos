#ifndef LISTA_ALUNOS_HPP
#define LISTA_ALUNOS_HPP

#include <string>
#include <vector>
#include "Aluno.hpp"

/**
 * Lista de alunos cadastrados no sistema.
 * Também é responsável por salvar e carregar os dados do arquivo binário.
 */
class ListaAlunos {
private:
    std::vector<Aluno> alunos;

public:
    void adicionar(const Aluno& aluno);
    bool removerPorNome(const std::string& nome);
    bool vazia() const;
    void listar() const;

    bool salvar(const std::string& nomeArquivo) const;
    bool carregar(const std::string& nomeArquivo);
};

#endif
