#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include "Pessoa.hpp"

class Jogador : public Pessoa{
private:
    char simbolo;
    int pontuacao;

public:
    Jogador(const std::string& nome, char simbolo);

    char getSimbolo() const;
    void setSimbolo(char novoSimbolo);

    int getPontuacao() const;
    void adicionarPonto();
};

#endif