#include <stdio.h>
//programa básico de registro de alunos
int main(){

    int idade , matricula;
    float altura;
    char nome[50];

    printf("Digite a idade do aluno: \n");
    scanf("%d", &idade);

    printf("Digite a altura do aluno:  \n");
    scanf("%f", &altura);

    printf("Digite o nome do aluno: \n");
    scanf("%s", &nome);

    printf("Digite o numero de matricula do aluno: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matricula: %d \n", nome , matricula);
    printf("ALtura do Aluno: %f - Idade do Aluno: %d \n", altura , idade);

}