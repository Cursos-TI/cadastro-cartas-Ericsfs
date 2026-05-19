#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Varias da primeira carta do super trunfo
  char estadoA[20];
  char pais[20];
  char cidade01 [20];
  int população01;
  float km01;
  float PIB01;
  int pontos_turísticos01;

  // Área para entrada de dados
  printf("Digite o nome do seu pais: ");
  scanf("%s", pais);

  printf("Digite o nome do seu estado: ");
  scanf("%s", estadoA);

  printf("Digite o nome da sua cidade: ");
  scanf("%s", cidade01);

  printf("Digite a população da sua cidade: ");
  scanf("%d", &população01);

  printf("Digite a área da sua cidade em Km²: ");
  scanf("%f", &km01);

  printf("Qual é o PIB da sua cidade? ");
  scanf("%f", &PIB01);

  printf("Quantos pontos turísticos tem na sua cidade? ");
  scanf("%d", &pontos_turísticos01);

  printf("Seu pais é: %s\n", pais);
  printf("Seu estado é: %s\n", estadoA);
  printf("Sua cidade é: %s\n", cidade01);
  printf("A população da sua cidade é: %.2d pessoas\n", população01);
  printf("A área da sua cidade é: %.2f Km²\n", km01);
  printf("O PIB da sua cidade é: %.2f\n", PIB01);
  printf("A sua cidade tem %d pontos turísticos\n", pontos_turísticos01);

  // Varias da segunda carta do super trunfo

  char estadoB[20];
  char paisB[20];
  char cidade02 [20];
  int população02;
  float km02;
  float PIB02;
  int pontos_turísticos02;

  // Área para entrada de dados

  printf("Digite o nome do seu pais: ");
  scanf("%s", paisB);

  printf("Digite o nome do seu estado: ");
  scanf("%s", estadoB);

  printf("Digite o nome da sua cidade: ");
  scanf("%s", cidade02);

  printf("Digite a população da sua cidade: ");
  scanf("%d", &população02);

  printf("Digite a área da sua cidade em Km²: ");
  scanf("%f", &km02);

  printf("Qual é o PIB da sua cidade? ");
  scanf("%f", &PIB02);

  printf("Quantos pontos turísticos tem na sua cidade? ");
  scanf("%d", &pontos_turísticos02);

  printf("Seu pais é: %s\n", pais);
  printf("Seu estado é: %s\n", estadoB);
  printf("Sua cidade é: %s\n", cidade02);
  printf("A população da sua cidade é: %.2d pessoas\n", população02);
  printf("A área da sua cidade é: %.2f Km²\n", km02);
  printf("O PIB da sua cidade é: %.2f\n", PIB02);
  printf("A sua cidade tem %d pontos turísticos\n", pontos_turísticos02);




return 0;
} 
