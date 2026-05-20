#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Varias da primeira carta do super trunfo
  char EstadoA[20];
  char opcaoA[20];
  char cidade01 [20];
  int população01;
  float km01;
  float PIB01;
  int pontos_turísticos01;

  printf("\nPrimeira carta do Super Trunfo - Países\n");
  printf("Digite o estado da cidade: ");
  scanf("%s", EstadoA);
  printf("Digite a opção da carta: ");
  scanf("%s", opcaoA);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade01);
  printf("Digite a população da cidade: ");
  scanf("%d", &população01);
  printf("Digite a área da cidade em km²: ");
  scanf("%f", &km01);
  printf("Digite o PIB da cidade: ");
  scanf("%f", &PIB01);
  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &pontos_turísticos01);

  printf("\nCarta do Super Trunfo - Países\n");
  printf("Estado: %s\n", EstadoA);
  printf("Opção: %s\n", opcaoA);
  printf("Cidade: %s\n", cidade01);
  printf("População: %d\n", população01);
  printf("Área: %.2f km²\n", km01);
  printf("PIB: %.2f\n", PIB01);
  printf("Pontos Turísticos: %d\n", pontos_turísticos01);

return 0;   
} 
