#include <stdio.h>

int main() {

    int opcao;
    float nota1, nota2, media;

    printf("Menu de gerenciamento de estudantes:\n");
    printf("1- Calcular média\n");
    printf("2- Definir status do estudante\n");
    printf("3- Sair- Encerrar o programa\n");
    printf("Digite a opção desejada:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular média:\n");
        printf("Digite a primeira nota:\n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota:\n");
        scanf("%f", &nota2);
        //Testar a condição se a nota >=0 e <=10
        if((nota1 >= 0 && nota1 <=10) && (nota2 >= 0 && nota2 <=10)){
            media = (nota1 + nota2) / 2;
            printf("A média do estudante é: %.2f\n", media);
        }else{
            printf("Nota inválida. As notas devem ser entre 0 e 10.\n");
        }
        break;
        case 2:
        printf("Definir status do estudante:\n");
        printf("Digite a média do estudante:\n");
        scanf("%f", &media);
        media >= 5 ? printf("O estudante está aprovado.\n") : printf("O estudante está reprovado.\n");
        break;
        case 3:
        printf("Encerrar o programa:\n");
        break;
    
    default:
        printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        break;
    }
}