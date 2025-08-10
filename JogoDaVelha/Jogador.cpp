#include "Jogador.hpp"

Jogador::Jogador(const std::string& nome, char simbolo)
    : Pessoa(nome), simbolo(simbolo), pontuacao(0) {}

char Jogador::getSimbolo() const{
    return simbolo;
}

void Jogador::setSimbolo(char novoSimbolo){
    simbolo = novoSimbolo;
}

int Jogador::getPontuacao() const{
    return pontuacao;
}

void Jogador::adicionarPonto(){
    pontuacao++;
}

