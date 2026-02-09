#include <stdio.h>

int main(){

    int numero;

    printf("Digite um número: \n");
    scanf("%d", &numero);

    if(numero > 0){
        if (numero % 2 == 0)
        {
            printf("Par\n");
        }else{
            printf("Ímpar \n");
        }
        
        printf("Positivo\n");

    }else if (numero == 0){
        printf("Neutro\n");
        }else{
            printf("negativo\n");
        }
   }
