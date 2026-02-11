#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int jogador, computador, resultado;
    char comparacao;

    //Gerar um número aleatório
    srand(time(0));
    computador = rand() %100 + 1; //Número entre 1 e 100

    //Inicio do jogo
    printf("Bem-vindo ao jogo Maior, Menor ou igual!\n");
    printf("Voçê deve escolher um número entre 1 e 100 e o tipo de comparação (>, <, =)\n");
    printf("M - Maior\n");
    printf("N - Menor\n");
    printf("I - Igual\n");

    printf("Escolha a comparação: \n");
    scanf("%c", &comparacao);

    printf("Digite um número entre 1 e 100\n");
    scanf("%d", &jogador);

    //Exibir o número do computador
    printf("Número do computador é: %d\n", computador);

    switch (comparacao)
    {
    case 'M':
    case 'm':
    printf("Voçê escolheu a comparação Maior\n");
        resultado = (jogador > computador) ? 1 : 0;
        
        break;
    
    case 'N':
    case 'n':
    printf("Voçê escolheu a comparação Menor\n");
        resultado = (jogador < computador) ? 1 : 0;
        
        break;

    case 'I':
    case 'i':
    printf("Voçê escolheu a comparação Igual\n");
        resultado = (jogador == computador) ? 1 : 0;
        
        break;
    
    default:
    printf("Opção de jogo invalida\n");
    break;
    }
        

        printf("O número do computador é: %d e o número do jogador é: %d\n", computador, jogador);

        if (resultado == 1)
        {
            printf("Parabéns! Você venceu!!\n");
        }else{
            printf("Que pena! Voçê perdeu!\n");
        }
    }

    
