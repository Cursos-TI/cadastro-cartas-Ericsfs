#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

int main() {

  char EstadoA[20];
  char cidade01[20];

  float km01;
  double PIBTotal01;
  double pib_Per_Capita;
  double densidade_populacional;

  int populacao01;
  int pontos_turisticos01;

  // entrada de dados da primeira carta

  printf("Bem-vindo ao desafio Super Trunfo - Países!\n");
  printf("Vamos começar cadastrando a primeira carta.\n");

  printf("Digite o estado da primeira carta: ");
  scanf("%s", EstadoA);

  printf("Digite a cidade da primeira carta: ");
  scanf("%s", cidade01);

  printf("Digite o PIB total da cidade: ");
  scanf("%lf", &PIBTotal01);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao01);

  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pontos_turisticos01);

  printf("Digite a distância da cidade em km: ");
  scanf("%f", &km01);

  // cálculo depois das entradas
  pib_Per_Capita = PIBTotal01 / (double) populacao01;
  densidade_populacional = (double) populacao01 / km01;

  printf("\nCarta do Super Trunfo - Cidade: %s\n", cidade01);
  printf("Estado: %s\n", EstadoA);
  printf("PIB Total: %.2lf\n", PIBTotal01);
  printf("População: %d\n", populacao01);
  printf("Pontos Turísticos: %d\n", pontos_turisticos01);
  printf("PIB per capita: %.2lf\n", pib_Per_Capita);
  printf("Distância: %.2f km\n", km01);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);


   // entrada de dados da segunda carta

    char EstadoB[20];
  char cidade02[20];

  float km02;
  double PIBTotal02;
  double pib_Per_Capita2;
  double densidade_populacional2;

  int populacao02;
  int pontos_turisticos02;


  printf("Bem-vindo ao desafio Super Trunfo - Países!\n");
  printf("Vamos começar cadastrando a segunda carta.\n");

  printf("Digite o estado da segunda carta: ");
  scanf("%s", EstadoB);

  printf("Digite a cidade da segunda carta: ");
  scanf("%s", cidade02);

  printf("Digite o PIB total da cidade: ");
  scanf("%lf", &PIBTotal02);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao02);

  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pontos_turisticos02);

  printf("Digite a distância da cidade em km: ");
  scanf("%f", &km02);

  // cálculo depois das entradas
  pib_Per_Capita2 = PIBTotal02 / (double) populacao02;
  densidade_populacional2 = (double) populacao02 / km02;

  printf("\nCarta do Super Trunfo - Cidade: %s\n", cidade02);
  printf("Estado: %s\n", EstadoB);
  printf("PIB Total: %.2lf\n", PIBTotal02);
  printf("População: %d\n", populacao02);
  printf("Pontos Turísticos: %d\n", pontos_turisticos02);
  printf("PIB per capita: %.2lf\n", pib_Per_Capita2);
  printf("Distância: %.2f km\n", km02);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);

  return 0;
}
