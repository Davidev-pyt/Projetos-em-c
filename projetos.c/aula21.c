#include <stdio.h>

int main() {

    //Primeira condição a idade do usuário estar entre 18 e 65 anos
    //Segunda condição verificar se a renda do usuário é menor que 3000
    //Terceira condição verificar se o número de dependentes do usuario é maior que 2
    int idade, dependentes;
    float renda;
    printf("Digite a idade do usuario: \n");
    scanf("%d", &idade);
    printf("Digite a renda do usuario: \n");
    scanf("%f", &renda);
    printf("Digite o numero de dependentes do usuario: \n");
    scanf("%d", &dependentes);

    if(idade >= 18 && idade <= 65){
        if( renda < 3000){
            if(dependentes > 2){
                printf("Usuario atende a todos os criteiros\n");
            }else{
                printf("Usuario não atende ao criterio dependentes\n");
            }
        }else{
            printf("Usuario não atende ao criterio renda\n");
        }

    }else{
        printf("Usuario não atende ao criterio idade\n");
    }
}