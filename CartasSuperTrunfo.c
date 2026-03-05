#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    int populacao;
    int turisticos;
    float pib;
    float area;
    char estado;
    char codigo[50];
    char cidade[50];

    int Populacao;
    int Turisticos;
    float Pib;
    float Area;
    char Estado;
    char Codigo[50];
    char Cidade[50];


  // Área para entrada de dados
    printf("qual o estado: ");
    scanf(" %c", &estado);

    printf("qual o codigo da carta: ");
    scanf("%s", codigo);

    printf("qual o nome da cidade: ");
    scanf("%s", cidade);

    printf("quantidade da população: ");
    scanf("%d", &populacao);

    printf("qual a area: ");
    scanf("%f", &area);

    printf("qual o pib: ");
    scanf("%f", &pib);

    printf("qual o numeros de pontos turisticos: ");
    scanf("%d", &turisticos);

    printf("\nqual o estado: ");
    scanf(" %c", &Estado);

    printf("qual o codigo da carta: ");
    scanf("%s", Codigo);

    printf("qual o nome da cidade: ");
    scanf("%s", Cidade);

    printf("quantidade da população: ");
    scanf("%d", &Populacao);

    printf("qual a area: ");
    scanf("%f", &Area);

    printf("qual o pib: ");
    scanf("%f", &Pib);

    printf("qual o numeros de pontos turisticos: ");
    scanf("%d", &Turisticos);

  // Área para exibição dos dados da cidade

    printf("\ncarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\n", estado, codigo, cidade);    
    printf("População: %d\nÁrea: %.3f km² \n", populacao, area);
    printf("Pib: %.2f trilhões de reais\nNumeros de pontos turisticos: %d\n", pib, turisticos);

     printf("\ncarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\n", Estado, Codigo, Cidade);    
    printf("População: %d\nÁrea: %.3f km² \n", Populacao, Area);
    printf("Pib: %.2f bilhões de reais\nNumeros de pontos turisticos: %d\n", Pib, Turisticos);

return 0;
} 
