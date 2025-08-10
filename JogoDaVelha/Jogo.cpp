#include "Jogo.hpp"
#include "MensagemVitoria.hpp"
#include "MensagemEmpate.hpp"
#include <iostream>

Jogo::Jogo(const std::string& nome1, const std::string& nome2):
    jogador1(nome1, 'X'), jogador2(nome2, 'O'), jogadorAtual(1) {}

void Jogo::alternarJogador(){
    jogadorAtual = (jogadorAtual == 1) ? 2:1;
}

void Jogo::iniciarPartida(){
    tabuleiro.limpar();
    bool fimDeJogo = false;

    while(!fimDeJogo){
        tabuleiro.exibir();

        Jogador& jogador = (jogadorAtual == 1) ? jogador1:jogador2;
        std::cout << jogador.getNome() << " (" << jogador.getSimbolo() << "), é sua vez.\n";


        int linha, coluna;
        std::cout << "Digite a linha (0 a 2): ";
        std::cin >> linha;
        std::cout << "Digite a coluna (0 a 2): ";
        std::cin >> coluna;


        if(!tabuleiro.marcarCasa(linha, coluna, jogador.getSimbolo())){
            std::cout << "Jogada inválida! Tente novamente.\n";
            continue;
        }

        if(tabuleiro.verificarVitoria(jogador.getSimbolo())){
            tabuleiro.exibir();
            std::cout << jogador.getNome();
           // jogador.adicionarPonto();
            fimDeJogo = true;
        } else if (tabuleiro.estaCheio()) {
            tabuleiro.exibir();
            std::cout << "Empate!\n";
            fimDeJogo = true;
        } else {
            alternarJogador();
        }

        Mensagem* mensagem;

    if (fimDeJogo) {
        Mensagem* mensagem;
        if (tabuleiro.verificarVitoria(jogador.getSimbolo())) {
            mensagem = new MensagemVitoria();
        } 
        else if (tabuleiro.estaCheio()) {
            mensagem = new MensagemEmpate();
        }
        mensagem->exibir();
        delete mensagem;
    }
}
}
