#include <stdio.h>

int main() {
    double pibTotal;
    int populacao;
    double pibPerCapita;

    printf("Digite o PIB total da cidade: ");
    scanf("%lf", &pibTotal);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    pibPerCapita = pibTotal / populacao;

    printf("PIB per capita: %.2f\n", pibPerCapita);

    return 0;
}