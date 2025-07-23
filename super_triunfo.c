#include <stdio.h>

int main()
{
    /*DADOS CARTA 1*/
    char estado1[10];
    int codigo_carta1;
    char nome_cidade1[50];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib1;

    // variaveis para calculo
    float resultadoDensidade1;
    float resultadopibPerCapita1;
    float superPoder1;

    printf("\nCarta 1:\n");

    printf("Digite o estado: ");
    scanf(" %s", estado1);

    printf("Digite o código da carta: ");
    scanf("%d", &codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    resultadoDensidade1 = (float)populacao1 / area1;
    resultadopibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + (1 / resultadoDensidade1) + resultadopibPerCapita1;

    /*DADOS CARTA 2 */
    char estado2[10];
    int codigo_carta2;
    char nome_cidade2[50];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2;

    // variaveis para calculos
    float resultadoDensidade2;
    float resultadopibPerCapita2;
    float superPoder2;

    printf("\nCarta 2:\n");
    getchar();
    printf("Digite o estado: ");
    scanf(" %s", estado2);

    printf("Digite o código da carta: ");
    scanf("%d", &codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    resultadoDensidade2 = (float)populacao2 / area2;
    resultadopibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + (1 / resultadoDensidade2) + resultadopibPerCapita2;

    /*comparando cartas*/

    /*EXIBINDO CARTAS CONSOLOG*/

    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código:B0%d\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", resultadoDensidade1);
    printf("Pib per capita: %.2f reais\n", resultadopibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código:B0%d\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", resultadoDensidade2);
    printf("Pib per capita: %.2f reais\n", resultadopibPerCapita2);

    /*COMPARACAO DAS CARTAS*/
    printf("C\n--- Comparacao de cartas ---\n");

    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    printf("Pib: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);
    printf("Desidade Populacional: Carta %d venceu (%d)\n", (resultadoDensidade1 < resultadoDensidade2) ? 1 : 2, (resultadoDensidade1 > resultadoDensidade2) ? 1 : 0);
    printf("Pib per Capita: Carta %d venceu (%d)\n", (resultadopibPerCapita1 > resultadopibPerCapita2) ? 1 : 2, (resultadopibPerCapita1 > resultadopibPerCapita2) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}