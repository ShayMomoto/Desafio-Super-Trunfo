#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int menu, escolhaMenu;
    char codigo1[4], nome1[50], codigo2[4], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pt1, pt2; // Pontos Turísticos

    printf("Escolha uma opção: \n");
    printf("1. Iniciar jogo.\n");
    printf("2. Dicas do jogo.\n");
    printf("3. Fechar o jogo.\n");
    scanf("%d", &escolhaMenu);

    switch (escolhaMenu)
    {
    case 1:

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
 if (populacao1 > populacao2){
    printf("População da carta 1 venceu\n"); 
 } else 
    printf("População da carta 2 venceu\n");

    if (area1 > area2){
      printf("A Área da carta 1 é maior!\n");
   } else {
      printf("A Área da carta 2 é maior!\n");
}
   
if (pib1 > pib2){
      printf("O PIB da carta 1 é maior!\n");
} else {
      printf("O PIB da carta 2 é maior!\n");
   }
   
   if (pt1 > pt2){
      printf("A carta 1 tem mais ponto Turísticos\n");
   } else {
      printf("A carta 2 tem mais ponto Turísticos\n");
      }

    if (densidade1 > densidade2){
         printf("A carta 1 tem mais população!\n");
      } else {
         printf("A carta 2 tem mais população!\n");
         }
   
    if (pibPerCapita1 > pibPerCapita2){
            printf("A carta 1 tem um PIB maior.\n");
       } else {
            printf("A carta 2 tem um PIB maior.\n");
            }
            
   if (superPoder1 > superPoder2){
            printf("A carta 1 usou o Super poder na Carta 2\n");
      } else {
             printf("A carta 2 usou o Super poder na Carta 1\n");
               }
    return 0;
        
        break;

    case 2:

        printf("Escolha uma cidade e cadastre suas informações, como nome, população, área (Km²), pib, pontos turistios e o Código da cidade como por exemplo: A01.\n");

    break;

    case 3:
        printf("Jogo sendo finalizado");
    break;
    
    default:
    printf("Opção inválida.\n");
        break;
    }
return 0;
   
}
