#include <stdio.h>

int main() {
    char codigo1[4], nome1[50], codigo2[4], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pt1, pt2; // Pontos Turísticos

    // Cadastro da primeira cidade
    printf ("\n*** Cadastre a Primeira Cidade ***\n");
    printf ("Código da cidade: ");
    scanf ("%s", codigo1);
    printf ("Nome da cidade: ");
    scanf (" %[^\n]", nome1); // Permite espaços no nome
    printf ("População: ");
    scanf ("%lu", &populacao1);
    printf ("Área (km²): ");
    scanf ("%f", &area1);
    printf ("PIB: ");
    scanf ("%lf", &pib1);
    printf ("Número de Pontos Turísticos: ");
    scanf ("%d", &pt1);

    // Cadastro da segunda cidade
    printf ("\n*** Cadastre a Segunda Cidade ***\n");
    printf ("Código da cidade: ");
    scanf ("%s", codigo2);
    printf ("Nome da cidade: ");
    scanf (" %[^\n]", nome2);
    printf ("População: ");
    scanf ("%lu", &populacao2);
    printf ("Área (km²): ");
    scanf ("%f", &area2);
    printf ("PIB: ");
    scanf ("%lf", &pib2);
    printf ("Número de Pontos Turísticos: ");
    scanf ("%d", &pt2);

    // Cálculo da Densidade Populacional e PIB per Capita
    float densidade1 = (area1 > 0) ? (populacao1 / (float) area1) : 0;
    float densidade2 = (area2 > 0) ? (populacao2 / (float) area2) : 0;
    double pibPerCapita1 = (populacao1 > 0) ? (pib1 / populacao1) : 0;
    double pibPerCapita2 = (populacao2 > 0) ? (pib2 / populacao2) : 0;

    // Cálculo do Super Poder
    float superPoder1 = populacao1 + area1 + pib1 + pt1 + pibPerCapita1 + (1.0 / (densidade1 + 1));
    float superPoder2 = populacao2 + area2 + pib2 + pt2 + pibPerCapita2 + (1.0 / (densidade2 + 1));

    // Comparação das Cartas
    printf ("\n****** Comparação das Cartas ******\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pt1 > pt2) ? 1 : 2, (pt1 > pt2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2));

    return 0;
}
