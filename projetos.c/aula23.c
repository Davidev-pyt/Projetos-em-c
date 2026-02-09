#include <stdio.h>
//switch
int main(){

    int opcao;
    float saldo = 1000;

    printf("Escolha uma opção:\n");
    printf("-1- Verificar saldo\n");
    printf("-2- Fazer um depósito\n");
    printf("-3- Fazer um saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    printf("O seu saldo é: R$ %f \n", saldo);
        break;
        case 2:
        printf("Digite o banco para depósito\n");
        printf("Agência: \n");
        printf("conta: \n");

        case 3:
        printf("Digite o valor para saque\n");
        break;
    
    default:
    printf("Opção invalida\n");
        break;
    }
    
}
