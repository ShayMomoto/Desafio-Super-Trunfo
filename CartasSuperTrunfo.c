#include <stdio.h>
#include <stdlib.h>

int main() {
    int escolhaMenu, atributo1, atributo2;
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

    switch (escolhaMenu) {
        case 1:
            // Cadastro das cidades
            printf("\n*** Cadastre a Primeira Cidade ***\n");
            printf("Código da cidade: ");
            scanf("%s", codigo1);
            printf("Nome da cidade: ");
            scanf(" %[^\n]", nome1);
            printf("População: ");
            scanf("%lu", &populacao1);
            printf("Área (km²): ");
            scanf("%f", &area1);
            printf("PIB: ");
            scanf("%lf", &pib1);
            printf("Número de Pontos Turísticos: ");
            scanf("%d", &pt1);

            printf("\n*** Cadastre a Segunda Cidade ***\n");
            printf("Código da cidade: ");
            scanf("%s", codigo2);
            printf("Nome da cidade: ");
            scanf(" %[^\n]", nome2);
            printf("População: ");
            scanf("%lu", &populacao2);
            printf("Área (km²): ");
            scanf("%f", &area2);
            printf("PIB: ");
            scanf("%lf", &pib2);
            printf("Número de Pontos Turísticos: ");
            scanf("%d", &pt2);

            // Cálculo das propriedades
            float densidade1 = (area1 > 0) ? (populacao1 / area1) : 0;
            float densidade2 = (area2 > 0) ? (populacao2 / area2) : 0;
            double pibPerCapita1 = (populacao1 > 0) ? (pib1 / populacao1) : 0;
            double pibPerCapita2 = (populacao2 > 0) ? (pib2 / populacao2) : 0;

            // Escolha dos atributos para comparação
            printf("\nEscolha dois atributos diferentes para comparar:\n");
            printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n6. PIB per Capita\n");
            do {
                printf("Escolha o primeiro atributo (1-6): ");
                scanf("%d", &atributo1);
                printf("Escolha o segundo atributo (1-6): ");
                scanf("%d", &atributo2);

                if (atributo1 == atributo2) {
                    printf("Os dois atributos não podem ser iguais. Escolha novamente.\n");
                }
            } while (atributo1 == atributo2);

            // Comparação dos atributos escolhidos
            float valor1, valor2, soma1, soma2;

            for (int i = 0; i < 2; i++) {
                int atributo = (i == 0) ? atributo1 : atributo2;
                float v1 = 0, v2 = 0;

                switch (atributo) {
                    case 1: v1 = populacao1; v2 = populacao2;
                    break;
                    case 2: v1 = area1; v2 = area2;
                    break;
                    case 3: v1 = pib1; v2 = pib2;
                    break;
                    case 4: v1 = pt1; v2 = pt2;
                    break;
                    case 5: v1 = densidade1; v2 = densidade2;
                    break;
                    case 6: v1 = pibPerCapita1; v2 = pibPerCapita2;
                    break;
                }

                // Exibir comparação
                printf("\nComparação do atributo %d:\n", atributo);
                printf("Carta 1 - %s: %.2f\n", nome1, v1);
                printf("Carta 2 - %s: %.2f\n", nome2, v2);

                if (atributo == 5) {
                    printf("Resultado: %s venceu!\n", (v1 < v2) ? nome1 : nome2);
                } else {
                    printf("Resultado: %s venceu!\n", (v1 > v2) ? nome1 : nome2);
                }

                // Acumular os valores para soma final
                if (i == 0) {
                    valor1 = v1;
                    valor2 = v2;
                } else {
                    soma1 = valor1 + v1;
                    soma2 = valor2 + v2;
                }
            }

            // Exibir soma e determinar vencedor final
            printf("\n===== Resultado Final =====\n");
            printf("Soma dos atributos escolhidos:\n");
            printf("Carta 1 - %s: %.2f\n", nome1, soma1);
            printf("Carta 2 - %s: %.2f\n", nome2, soma2);

            if (soma1 > soma2) {
                printf("Resultado Final: %s venceu!\n", nome1);
            } else if (soma2 > soma1) {
                printf("Resultado Final: %s venceu!\n", nome2);
            } else {
                printf("Resultado Final: Empate!\n");
            }
            break;

        case 2:
            printf("Escolha uma cidade e cadastre suas informações, como nome, população, área (Km²), PIB, pontos turísticos e o Código da cidade, como por exemplo: A01.\n");
            break;

        case 3:
            printf("Jogo sendo finalizado\n");
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }
    return 0;
}
