#include <stdio.h>

void jogo()
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

    /* MENU PARA SELECIONAR O TIPO DE COMPARACAO A SER USADA NO JOGO */
    int opcaoAtributo;

    printf("\nEscolha o atributo para comparar:\n");
    printf("1. Dados Cartas\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. Pib\n");
    printf("5. Pontos Turisticos\n");
    printf("6. Densidade Demografica\n");
    printf("Opção: ");
    scanf("%d", &opcaoAtributo);

    switch (opcaoAtributo)
    {
    case 1:
        // trazer dados comuns
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
        break;
    case 2:
        // calculo populacao
        printf("\n--- Comparando População ---\n");
        printf("%s: %lu habitantes\n", nome_cidade1, nome_cidade2);
        printf("%s: %lu habitantes\n", nome_cidade2, nome_cidade1);

        if (populacao1 > populacao2)
        {
            printf("Vencedor: %s\n", nome_cidade1);
        }
        else if (populacao2 > populacao1)
        {
            printf("Vencedor: %s\n", nome_cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;
    case 3:
        // calculo area
        printf("\n--- Comparando Área ---\n");
        printf("%s: %.2f km²\n", nome_cidade1, area1);
        printf("%s: %.2f km²\n", nome_cidade2, area2);

        if (area1 > area2)
        {
            printf("Vencedor: %s\n", nome_cidade1);
        }
        else if (area2 > area1)
        {
            printf("Vencedor: %s\n", nome_cidade2);
        }
        else
        {
            printf("Empate!");
        }
        break;

    case 4:
        // calculo pib
        printf("\n--- Comparando Pontos Turisticos ---\n");
        printf("%s: %d Pontos Turisticos\n", nome_cidade1, resultadopibPerCapita1);
        printf("%s: %d Pontos Turisticos\n", nome_cidade2, resultadopibPerCapita2);

        if (resultadopibPerCapita1 > resultadopibPerCapita2)
        {
            printf("Vencedor: %d\n", nome_cidade1);
        }
        else if (resultadopibPerCapita2 > resultadopibPerCapita1)
        {
            printf("Vencedor: %d\n", nome_cidade2);
        }
        else
        {
            printf("Empate!\n");
        }

        break;
    case 5:
        printf("\n--- Comparando Pontos Turisticos ---\n");
        printf("%s: %d Pontos Turisticos\n", nome_cidade1, pontos_turisticos1);
        printf("%s: %d Pontos Turisticos\n", nome_cidade2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("Vencedor: %d\n", nome_cidade1);
        }
        else if (pontos_turisticos2 > pontos_turisticos1)
        {
            printf("Vendecor: %d\n", nome_cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;
    case 6:
        printf("\n--- Comparando Densidade Demografica ---\n");
        printf("%s: %.2f km²\n", nome_cidade1, resultadoDensidade1);
        printf("%s: %.2f km²\n", nome_cidade2, resultadoDensidade2);

        if (resultadoDensidade1 < resultadoDensidade2)
        {
            printf("Vencedor: %s\n", nome_cidade1);
        }
        else if (resultadoDensidade2 < resultadoDensidade1)
        {
            printf("Vencedor: %s\n", nome_cidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;
    default:
        printf("Opcao Invalida\n");
        break;
    }
}

int main()
{
    int opcao;

    printf("Escolha uma opção:\n");
    printf("1. Iniciar Jogo:\n");
    printf("2. Regras do Jogo:\n");
    printf("3. fechar Jogo:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        jogo();
        break;
    case 2:
        printf("Regras 1\n");
        printf("Regras 2\n");
        printf("Regras 3\n");
        break;
    case 3:
        printf("Você saiu do jogo");
    default:
        printf("Opcao invalida");
        break;
    }
}