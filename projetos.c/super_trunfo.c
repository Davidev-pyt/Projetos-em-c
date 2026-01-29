 #include <stdio.h>

int main(){

    //Desafio Nível Novato
    
    //variaveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1, pontosturistico1;
    float area1, pib1; 

    //Variaveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2, pontosturistico2;
    float area2, pib2; 

    //Cadastro da carta 1

    printf("--- Carta 1: --- \n");
    printf("Estado (A-H)");
    scanf(" %c", &estado1); //Espaço antes do c para limpar o teclado
    printf("Codigo da carta ex(A01-B03): ");
    scanf("%s", &codigo1);
    printf("Nome da cidade: ");
    scanf("%s",&cidade1);    
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Àrea: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos Túristicos: ");
    scanf("%d", &pontosturistico1);

    //Cadastro da carta 2

    printf("--- Carta 2: --- \n");
    printf("Estado (A-H)");
    scanf(" %c", &estado2); //Espaço antes do c para limpar o teclado
    printf("Codigo da carta ex(A01-B03): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s",cidade2);    // %[^\n le as strings com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Àrea: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos Túristicos: ");
    scanf("%d", &pontosturistico2);

    //Dados da carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("população: %d\n", populacao1);
    printf("Àrea: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturistico1);

    //Dados da carta 1
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("população: %d\n", populacao2);
    printf("Àrea: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturistico2);
}