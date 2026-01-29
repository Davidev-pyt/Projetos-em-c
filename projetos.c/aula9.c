#include <stdio.h>

int main(){
    
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; //Note que a divisão de um número inteiro resulta  em um número inteiro

    printf("A Soma é: %d\n", soma);
    printf("A Diferença é: %d\n", diferenca);
    printf("O Produto é: %d\n", produto);
    printf("O Quociente é: %d\n", quociente);

    return 0;

}