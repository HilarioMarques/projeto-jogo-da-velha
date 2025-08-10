#ifndef MENSAGEM_EMPATE_HPP
#define MENSAGEM_EMPATE_HPP

#include "Mensagem.hpp"
#include <iostream>

class MensagemEmpate : public Mensagem {
public:
    void exibir() const override {
        std::cout << "O jogo terminou empatado!" << std::endl;
    }
};

#endif
