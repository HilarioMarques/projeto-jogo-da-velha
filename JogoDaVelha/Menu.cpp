#include "Menu.hpp"
#include "Jogo.hpp"
#include <iostream>

void Menu::exibirMenuPrincipal(){
    int opcao;
    std::string nome1, nome2;

    do{
        std::cout << "==== JOGO DA VELHA ====\n";
        std::cout << "1. Iniciar nova partida\n";
        std::cout << "2. Sair\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1: 
                std::cout << "Digite o nome do Jogador 1 (X): ";
                std::cin >> nome1;
                std::cout << "Digite o nome do Jogador 2 (O): ";
                std::cin >> nome2;

            {
                Jogo jogo(nome1, nome2);
                jogo.iniciarPartida();
            }

            break;

            case 2:
                std::cout << "Encerramos o jogo...\n";
                break;

            default:
                std::cout << "Opção inválida! Tente novamente.\n";
        }

        std::cout << "\n";
    } while(opcao != 2);
}