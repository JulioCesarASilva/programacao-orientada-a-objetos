
#ifndef PROVA_HPP
#define PROVA_HPP

/**
 * Classe que representa uma prova com uma nota.
 * Didática: armazena um valor double e permite acesso.
 */
class Prova {
private:
    double nota; // nota de 0.0 a 10.0

public:
    // Construtor padrão: inicializa nota com 0.0
    Prova();

    // Define a nota (valida se está entre 0 e 10)
    void setNota(double n);

    // Retorna a nota atual
    double getNota() const;
};

#endif
