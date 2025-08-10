#include "Pessoa.hpp"

Pessoa::Pessoa(const std::string& nome) : nome(nome) {}

Pessoa::~Pessoa() {}

std::string Pessoa::getNome() const{
    return nome;
}

void Pessoa::setNome(const std::string& novoNome) {
    nome = novoNome;
}