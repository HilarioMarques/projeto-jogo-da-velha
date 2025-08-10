#ifndef MENSAGEM_VITORIA_HPP
#define MENSAGEM_VITORIA_HPP

#include "Mensagem.hpp"
#include <iostream>

class MensagemVitoria : public Mensagem {
public:
    void exibir() const override {
        std::cout << "\nParabéns! Você venceu o jogo!"<< std::endl;
    }
};

#endif
