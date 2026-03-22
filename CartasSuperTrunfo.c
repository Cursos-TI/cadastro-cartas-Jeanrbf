#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    int populacao1, populacao2;
    int turisticos1, turisticos2;
    float pib1, pib2;
    float area1, area2;
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    float densidade1, densidade2;
    float capita1, capita2;


  // Área para entrada de dados
    printf("qual o estado: ");
    scanf(" %c", &estado1);

    printf("qual o codigo da carta: ");
    scanf("%s", codigo1);

    printf("qual o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("quantidade da população: ");
    scanf("%d", &populacao1);

    printf("qual a area: ");
    scanf("%f", &area1);

    printf("qual o pib: ");
    scanf("%f", &pib1);

    printf("qual o numeros de pontos turisticos: ");
    scanf("%d", &turisticos1);

    densidade1 = (populacao1 / area1);
    printf("Densidade Populacional: %.2f\n", densidade1);

    capita1 = (float) (pib1 * 1000000000 / populacao1);
    printf("Pib per Capita: %.2f\n", capita1);

    printf("\nqual o estado: ");
    scanf(" %c", &estado2);

    printf("qual o codigo da carta: ");
    scanf("%s", codigo2);

    printf("qual o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("quantidade da população: ");
    scanf("%d", &populacao2);

    printf("qual a area: ");
    scanf("%f", &area2);

    printf("qual o pib: ");
    scanf("%f", &pib2);

    printf("qual o numeros de pontos turisticos: ");
    scanf("%d", &turisticos2);

    densidade2 = (float) (populacao2 / area2);
    printf("Densidade Populacional: %.2f\n", densidade2);

    capita2 = (float) (pib2 * 1000000000 / populacao2);
    printf("Pib per Capita: %.2f\n", capita2);

  // Área para exibição dos dados da cidade

    printf("\ncarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\n", estado1, codigo1, cidade1);    
    printf("População: %d\nÁrea: %.3f km² \n", populacao1, area1);
    printf("Pib: %.2f bilhões de reais\nNumeros de pontos turisticos: %d\n", pib1, turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\nPib per Capita: %.2f Reais\n", densidade1, capita1);

    printf("\ncarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\n", estado2, codigo2, cidade2);    
    printf("População: %d\nÁrea: %.3f km² \n", populacao2, area2);
    printf("Pib: %.2f bilhões de reais\nNumeros de pontos turisticos: %d\n", pib2, turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\nPib per Capita: %.2f Reais\n", densidade2, capita2);


return 0;
} 
