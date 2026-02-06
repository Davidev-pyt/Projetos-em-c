#include <stdio.h>
//Operadores Lógicos: && (E), || (OU), ! (NãO)

int main() {

    int idade = 10;
    float altura = 1.70;

    if(idade >= 18 && idade <= 45 && altura >= 1.70){
        printf("Voçê esta na faixa etaria e na altura permitida para o alistamento militar.\n");
    }else{
        printf("Voçê não atende os requisitos para o alistamento militar. \n");
    }
}



  