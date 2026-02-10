#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Menu interativo
int main() {

    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1- Iniciar Jogo\n");
    printf("2- Ver Regras\n");
    printf("3- sair\n");
    printf("Digite a opção desejada: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Iniciando o jogo...\n");
        break;
        case 2: 
        printf("Verificando regras...\n");
        break;
        case 3:
        printf("Saindo do jogo...\n");
        break;
    
    default:
        printf("Opção invalida. Por favor, escolha uma opção válida.\n");
        break;
    }
    switch (opcao)
    {
        case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite seu palpite (0-9): \n");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite) {
            printf("Parabéns! Você acertou o número secreto!!\n");
        }else {
            printf("Que pena! Voçê errou o número secreto. O número era %d\n", numeroSecreto);
        }
        printf("Numero secreto gerado %d\n", numeroSecreto);
        break;
        case 2:
        printf("As regras do jogo são as seguintes...\n");
        printf("Digite a opção relacionada as regras do jogo: \n");
        scanf("%d", &regras);
        switch (regras){
            case 1:
            printf("Regra 1: O jogador deve adivinhar um número entre 0 e 9.\n");
            break;
    
        case 2:
        printf("Regra 2: O jogador tem 3 tentativas para acertar o número.\n");
        break;
        case 3:
        printf("Regra 3: O jogo termina quando o jogador acerta o número ou esgota as tentativas.\n");
        break;
        
        default:
            break;
        }
        }


      /*  break;
        case 3:
        printf("Saindo do jogo...\n");

        break;
    
    default:
    printf("Opção invalida. Por favor, escolha uma opção válida.\n");
        break;
    }
*/

    }