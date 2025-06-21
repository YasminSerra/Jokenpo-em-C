#include <stdio.h>   // Biblioteca para entrada e saída
#include <stdlib.h>  // Biblioteca para funções utilitárias, como rand()
#include <time.h>    // Biblioteca para manipular o tempo (usada para gerar números aleatórios diferentes a cada execução)


int main() {
    int escolhaJogador, escolhaComputador;


    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(0));


    // Exibe o menu para o jogador escolher
    printf("***Jogo de Jokenpô!***\n");
    printf("Escolha Jogador: \n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra.\n");
    printf("2. Papel.\n");
    printf("3. Tesoura.\n");
    printf("Escolha: \n");


    // Lê a escolha do jogador
    scanf("%d", &escolhaJogador);


    // Gera a escolha do computador (número entre 1 e 3)
    escolhaComputador = rand() % 3 + 1;


    // Exibe a escolha do jogador
    switch (escolhaJogador) {
        case 1:
            printf("Jogador: Pedra - \n");
            break;
        case 2:
            printf("Jogador: Papel - \n");
            break;
        case 3:
            printf("Jogador: Tesoura - \n");
            break;
        default:
            printf("Opção inválida. \n");
            break;
    }


    // Exibe a escolha do computador
    switch (escolhaComputador) {
        case 1:
            printf("Computador: Pedra\n");
            break;
        case 2:
            printf("Computador: Papel\n");
            break;
        case 3:
            printf("Computador: Tesoura\n");
            break;
    }


    // Verifica o resultado do jogo
    if (escolhaJogador == escolhaComputador) {
        printf("***Empate!***\n");
    }
    // Condições de vitória do jogador
    else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
             (escolhaJogador == 2 && escolhaComputador == 1) ||
             (escolhaJogador == 3 && escolhaComputador == 2)) {
        printf("Parabéns você ganhou!\n");
    }
    // Se não for empate nem vitória, então o jogador perdeu
    else {
        printf("Você Perdeu!\n");
    }


    return 0; // Finaliza o programa
}
