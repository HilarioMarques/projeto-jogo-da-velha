#ifndef JOGO_HPP
#define JOGO_HPP

#include "Jogador.hpp"
#include "Tabuleiro.hpp"

class Jogo{
private:
    Jogador jogador1; //agregação, o jogo recebe jogadores mas não os cria
    Jogador jogador2;
    Tabuleiro tabuleiro; //composição, quando o jogo morre o tabuleiro morre tbm
    int jogadorAtual; //1 ou 2

    void alternarJogador();

public: 
    Jogo(const std::string& nome1, const std::string& nome2);
    void iniciarPartida();
};

#endif