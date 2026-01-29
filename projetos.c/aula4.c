#include <stdio.h>
//Saída de Dados 

int main(){

    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A sua idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A sua altura é de: %f\n", altura);

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("O seu nome é: %s\n", nome);

    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    printf("A opção escolhida é:%c", opcao);


}