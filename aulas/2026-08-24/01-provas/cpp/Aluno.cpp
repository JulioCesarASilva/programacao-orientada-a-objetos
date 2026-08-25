
#include "Aluno.hpp"
#include <iostream>

Aluno::Aluno(const std::string& nome) : nome(nome) {}

void Aluno::setNome(const std::string& n) {
    nome = n;
}

void Aluno::setNotas(double notaB1, double notaB2) {
    b1.setNota(notaB1);
    b2.setNota(notaB2);
}

std::string Aluno::getNome() const {
    return nome;
}

double Aluno::getNotaB1() const {
    return b1.getNota();
}

double Aluno::getNotaB2() const {
    return b2.getNota();
}

double Aluno::calcularMedia() const {
    return (b1.getNota() + b2.getNota()) / 2.0;
}

bool Aluno::aprovado() const {
    return calcularMedia() > 5.0; // critério de aprovação
}

void Aluno::exibirResultado() const {
    std::cout << "\n--- Resultado ---\n";
    std::cout << "Aluno: " << nome << std::endl;
    std::cout << "Nota B1: " << b1.getNota() << std::endl;
    std::cout << "Nota B2: " << b2.getNota() << std::endl;
    std::cout << "Média: " << calcularMedia() << std::endl;
    std::cout << "Situação: " << (aprovado() ? "APROVADO" : "REPROVADO") << std::endl;
    std::cout << "------------------\n";
}
