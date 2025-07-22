#include <stdio.h>

int main() {
    /*DADOS CARTA 1*/
    char estado1[10];
    int codigo_carta1;
    char nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    
    //variaveis para calculo
    float resultadoDensidade1;
    float resultadopibPerCapita1;

    printf("\nCarta 1:\n");

    printf("Digite o estado: ");
    scanf(" %s", estado1);  // Removi o & pois arrays já são ponteiros

    printf("Digite o código da carta: ");
    scanf("%d", &codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    resultadoDensidade1 = (float)populacao1 / area1;
    resultadopibPerCapita1 = (pib1 * 1000000000) / populacao1; // Corrigido aqui

    /*DADOS CARTA 2 */
    char estado2[10];
    int codigo_carta2;
    char nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    //variaveis para calculos
    float resultadoDensidade2;
    float resultadopibPerCapita2;

    printf("\nCarta 2:\n");
    getchar();
    printf("Digite o estado: ");
    scanf(" %s", estado2);  // Removi o & aqui também

    printf("Digite o código da carta: ");
    scanf("%d", &codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    resultadoDensidade2 = (float)populacao2 / area2;
    resultadopibPerCapita2 = (pib2 * 1000000000) / populacao2; // Corrigido aqui

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

    return 0;  
}