#include <stdio.h>

int main() {

    int idade;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    if (idade < 12) {
        printf("Voçê é uma criança.\n");
    }else if (idade >= 12 && idade < 18) {
        printf("Voçê é um adolescente.\n");
    }else if (idade >= 18 && idade < 60) {
        printf("Voçê é um adulto.\n");
    }else{
        printf("Voçê é um idoso.\n");
    }

}
