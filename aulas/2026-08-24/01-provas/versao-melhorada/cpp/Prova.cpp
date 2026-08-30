
#include "Prova.hpp"
#include <stdexcept> // para lançar exceção em caso de nota inválida

Prova::Prova() : nota(0.0) {}

void Prova::setNota(double n) {
    if (n < 0.0 || n > 10.0) {
        throw std::invalid_argument("Nota deve estar entre 0.0 e 10.0");
    }
    nota = n;
}

double Prova::getNota() const {
    return nota;
}
