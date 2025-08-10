#ifndef TABULEIRO_HPP
#define TABULEIRO_HPP

class Tabuleiro{
private:
    char grade[3][3];

public:
    Tabuleiro();

    void limpar();
    void exibir() const;
    bool marcarCasa(int linha, int coluna, char simbolo);
    bool verificarVitoria(char simbolo) const;
    bool estaCheio() const; //verifica empate
};

#endif