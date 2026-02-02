 #include <stdio.h>

int main(){

    //Desafio Nível Novato
    
    //variaveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int pontosturistico1;
    float area1, pib1, densidade1, pibpercapita1; 
    unsigned long int populacao1;
    float superpoder1;

    //Variaveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int pontosturistico2;
    float area2, pib2, densidade2, pibpercapita2; 
    unsigned long int populacao2;
    float superpoder2;
    
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

    //--- Cálculo da densidade demografica
    densidade1 = (float)populacao1 / area1;
    //Se o pib for adicionado em bilhões multiplicar por 1000000000
    pibpercapita1 =  (pib1 * 1000000000) / (float) populacao1;

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

    //Calculo da densidade demografica da carta 2
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float) populacao2;

    //Super poder - Comparação das cartas
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturistico1 + (1.0f/densidade1) + pibpercapita1;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturistico2 + (1.0f/densidade2) + pibpercapita2;

    //Exibição do Resultado

   // Exibição dos Resultados
      printf("\nComparacao de Cartas:\n");
      printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
      printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
      printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
      printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontosturistico1 > pontosturistico2) ? 1 : 2, (pontosturistico1 > pontosturistico2));
      printf("Densidade Populacional: Carta %d venceu (%.2f)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));
      printf("PIB per Capita: Carta %d venceu (%.2f)\n", (pibpercapita1 > pibpercapita2) ? 1 : 2, (pibpercapita1 > pibpercapita2));
      printf("Super Poder: Carta %d venceu (%.2f)\n", (superpoder1 > superpoder2) ? 1 : 2, (superpoder1 > superpoder2));
  
      return 0;
  }
  