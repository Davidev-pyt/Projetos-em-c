#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
//Jokenpô - Pedra, Papel e tesoura
int main(){

    int jogador, computador;
    srand(time(0));

    printf("Jogo do Jokenpô - Pedra, Papel e tesouura\n");
    printf("Escolha uma opção: \n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("4 - Escolha: \n");
    scanf("%d", &jogador);

    computador = rand() % 3 + 1; //Gera um número aleatório entre 1 e 3

    switch (jogador)
    {
    case 1:
        printf("Jogador escolheu Pedra\n");
        break;
    case 2:
        printf("Jogador escolheu Papel\n");
        break;
    case 3:
        printf("Jogador escolheu Tesoura\n");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

      switch (computador)
    {
    case 1:
        printf("Computador escolheu Pedra\n");
        break;
    case 2:
        printf("Computador escolheu Papel\n");
        break;
    case 3:
        printf("Computador escolheu Tesoura\n");
        break;
    }

    if (jogador == computador) {
        printf("O jogo empatou!\n");
    }else if ((jogador == 1 &&computador == 3 || jogador == 2 && computador == 1 || jogador == 3 && computador == 2)){
        printf("Parabéns! Voçê ganhou!!\n");
    }else{
        printf("Não foi dessa vez! O computador ganhou!\n");
    }
}