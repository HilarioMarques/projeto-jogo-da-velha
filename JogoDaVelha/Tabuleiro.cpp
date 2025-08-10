#include "Tabuleiro.hpp"
#include <iostream>

Tabuleiro::Tabuleiro(){
    limpar();
}

void Tabuleiro::limpar(){
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            grade[i][j] = ' ';
        }
    }
}

void Tabuleiro::exibir() const{
    std::cout << "\n";
    for (int i = 0; i < 3; ++i){
        std::cout << " ";
        for (int j = 0; j < 3; ++j){
            std::cout << grade[i][j];
            if (j < 2) std::cout << " | ";
        }
        std::cout << "\n";
        if (i < 2) std::cout << "---+---+---\n";
    }
    std::cout << "\n";
}

bool Tabuleiro::marcarCasa(int linha, int coluna, char simbolo){
    if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2)
        return false;

    if (grade[linha][coluna] == ' '){
        grade[linha][coluna] = simbolo;
        return true;    
    }
    return false;
}

bool Tabuleiro::verificarVitoria(char simbolo) const{
    //linhas e colunas
    for (int i = 0; i < 3; ++i){
        if((grade[i][0] == simbolo && grade[i][1] == simbolo & grade[i][2] == simbolo) ||
        (grade[0][i] == simbolo && grade[1][i] == simbolo & grade[2][i] == simbolo)) {
            return true;
        }
    }

    //diagonais
    if((grade[0][0] == simbolo && grade[1][1] == simbolo & grade[2][2] == simbolo) ||
        (grade[0][2] == simbolo && grade[1][1] == simbolo & grade[2][0] == simbolo)) {
            return true;
        }

    return false;

}

bool Tabuleiro::estaCheio() const{
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            if(grade[i][j] == ' ')
            return false;
        }
    }
    return true;
}