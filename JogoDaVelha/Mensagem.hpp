#ifndef MENSAGEM_HPP
#define MENSAGEM_HPP

class Mensagem {
public:
    virtual ~Mensagem() {}
    virtual void exibir() const = 0;
};

#endif
