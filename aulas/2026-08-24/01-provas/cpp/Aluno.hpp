
#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <string>
#include "Prova.hpp"

/**
 * Classe Aluno: contém nome e duas provas (B1 e B2).
 * Fornece métodos para cadastro, cálculo de média e verificação de aprovação.
 */
class Aluno {
private:
    std::string nome;
    Prova b1;
    Prova b2;

public:
    // Construtor que recebe o nome e as notas (opcional, pode usar setters)
    Aluno(const std::string& nome = "Sem nome");

    // Setters
    void setNome(const std::string& n);
    void setNotas(double notaB1, double notaB2);

    // Getters
    std::string getNome() const;
    double getNotaB1() const;
    double getNotaB2() const;

    // Calcula a média das duas provas
    double calcularMedia() const;

    // Retorna true se a média for maior que 5.0
    bool aprovado() const;

    // Exibe um resumo do aluno (nome, notas, média, situação)
    void exibirResultado() const;
};

#endif
