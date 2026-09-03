#include <string>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

enum Dieta { Racao, Grama, Carne, Onivoro };

class Animal {
private:
    std::string tipo;
    int idade;
    std::string nome;
    Dieta alimentacao;

public:
    Animal(std::string nom, Dieta alim);

    void setTipo(std::string t);
    std::string getTipo() const;

    void setIdade(int i);
    int getIdade() const;

    void setNome(std::string n);
    std::string getNome() const;

    void setAlimentacao(Dieta alim);
    Dieta getAlimentacao() const;

    void print() const;
};

#endif
