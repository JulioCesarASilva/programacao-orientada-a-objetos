#include "Animal.hpp"
#include <iostream>

Animal::Animal(std::string nom, Dieta alim)
    : nome(nom), alimentacao(alim) {}

void Animal::setTipo(std::string t) {
    tipo = t;
}

std::string Animal::getTipo() const {
    return tipo;
}

void Animal::setIdade(int i) {
    idade = i;
}

int Animal::getIdade() const {
    return idade;
}

void Animal::setNome(std::string n) {
    nome = n;
}

std::string Animal::getNome() const {
    return nome;
}

void Animal::setAlimentacao(Dieta alim) {
    alimentacao = alim;
}

Dieta Animal::getAlimentacao() const {
    return alimentacao;
}

void Animal::print() const {
    std::cout << "\nNome: " << nome << "\n";
    std::cout << "Tipo: " << tipo << "\n";
    std::cout << "Idade: " << idade << "\n";
    std::cout << "Alimentacao: ";

    switch (alimentacao) {
    case Racao:
        std::cout << "Racao\n";
        break;
    case Grama:
        std::cout << "Grama\n";
        break;
    case Carne:
        std::cout << "Carne\n";
        break;
    case Onivoro:
        std::cout << "Onivoro\n";
        break;
    default:
        std::cout << "Desconhecido\n";
        break;
    }
}
