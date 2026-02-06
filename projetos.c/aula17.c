#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque , estoqueMinimo = 1000;

    printf("entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("entre com o estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30.0)
    printf("A temperatura está alta\n");
 else {
    printf("A temperatura está normal\n");
}
    if (umidade > 50) {
    printf("A umidade elevada\n");
    } else {
    printf("A umidade está dentro dos limites\n");
 }
    if (estoque < estoqueMinimo) {
        printf("Estoque abaixo do mínimo\n");
    }else {
        printf("Estoque dentro dos limites\n");
    }
}