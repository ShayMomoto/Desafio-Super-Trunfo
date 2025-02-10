#include <stdio.h>


int main() {
    char codigo [4];
    char nome [50];
    int populacao;
    float area;
    double pib;
    int pt; //Ponto Turistico.

    //cidades

    printf ("Cadastro da Cidade.\n");
    printf ("Digite o código da Cidade:\n");
    scanf ("%s", &codigo);

    printf ("Nome da cidade:\n");
    scanf ("%s", &nome);

    printf ("População:\n");
    scanf ("%d", &populacao);
    
    printf ("Área (km²):\n");
    scanf ("%f", &area);

    printf ("PIB:\n");
    scanf ("%lf", &pib );

    printf ("Numero de Pontos Turisticos:\n");
    scanf ("%d", &pt);

      // Exibição dos dados cadastrados
    printf("\n===== Dados da Cidade =====\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pt);

    return 0;
}
