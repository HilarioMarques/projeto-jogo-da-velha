#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string> //vamos trablhar com strings

class Pessoa {

protected: //permitirá que classes filhas acessem o nome
    std::string nome;

public:
    Pessoa(const std::string& nome);
    virtual ~Pessoa(); //virtual para polimorfismo, uma boa prática se vamos herança/polimorfismo

    std::string getNome() const;
    void setNome(const std::string& novoNome);
    //get/setNome servirá para acessarmos nome por meio de métodos e não diretamente: encapsulamento
};

#endif