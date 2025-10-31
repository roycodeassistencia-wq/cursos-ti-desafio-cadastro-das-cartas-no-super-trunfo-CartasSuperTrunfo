#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS CARTA 1

    char estado1[2];
    unsigned int codigo1;
    char cidade1[50];
    unsigned int populacao1;
    float area1;
    float pib1;
    unsigned int pontos_turisticos1;

    // SOLICITAÇÃO DE DADOS DA CARTA 1
    printf("##Informe os dados da primeira carta##\n");
    printf("\nInforme o código do estado (usando de A até H): ");
    scanf("%s", &estado1);
    printf("\ninforme o codigo da cidade (utilize um número de 1 a 4): ");
    scanf("%u", &codigo1);
    printf("\ninforme o nome da cidade: ");
    scanf("%49s", &cidade1);
    printf("\ninforme a populacao da cidade: ");
    scanf("%u", &populacao1);
    printf("\ninforme a area da cidade: ");
    scanf("%f", &area1);
    printf("\ninforme o pib da cidade: ");
    scanf("%f", &pib1);
    printf("\ninforme a quantidade de pontos turisticos da cidade: ");
    scanf("%u", &pontos_turisticos1);

    // CALCULAR PIB PER CAPITA E DENSIDADE POPULACIONAL E SUPER PODER
    float pib_capita1 = pib1 / populacao1;
    float densidade1 = populacao1 / area1;
    float superpoder1 = (populacao1 + area1 + pib1 + pontos_turisticos1 + pib_capita1) + densidade1 / 100;
    // DECLARAÇÃO DE VARIÁVEIS CARTA 2

    char estado2[2];
    unsigned int codigo2;
    char cidade2[50];
    unsigned int populacao2;
    float area2;
    float pib2;
    unsigned int pontos_turisticos2;

    // SOLICITAÇÃO DE DADOS DA CARTA 2
    printf("\n\n##Informe os dados da segunda carta##\n");
    printf("\nInforme o código do estado (usando de A até H): ");
    scanf("%s", &estado2);
    printf("\ninforme o codigo da cidade (utilize um número de 1 a 4): ");
    scanf("%u", &codigo2);
    printf("\ninforme o nome da cidade: ");
    scanf("%49s", &cidade2);
    printf("\ninforme a populacao da cidade: ");
    scanf("%u", &populacao2);
    printf("\ninforme a area da cidade: ");
    scanf("%f", &area2);
    printf("\ninforme o pib da cidade: ");
    scanf("%f", &pib2);
    printf("\ninforme a quantidade de pontos turisticos da cidade: ");
    scanf("%u", &pontos_turisticos2);

    // CALCULAR PIB PER CAPITA E DENSIDADE POPULACIONAL E SUPER PODER
    float pib_capita2 = pib2 / populacao2;
    float densidade2 = populacao2 / area2;
    float superpoder2 = (populacao2 + area2 + pib2 + pontos_turisticos2 + pib_capita2) + densidade2 / 100;

    // EXIBINDO CARTA 1
    printf("\n##CARTA 1###");
    printf("\nESTADO: %s", estado1);
    printf("\nCÓDIGO: %s0%u", estado1, codigo1);
    printf("\nCIDADE: %s", cidade1);
    printf("\nPOPULAÇÃO: %u", populacao1);
    printf("\nÁREA: %2.f", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nPONTOS TURÍSTICOS: %u", pontos_turisticos1);
    printf("\nPIB PER CAPITA: %.2f", pib_capita1);
    printf("\nDENSIDADE POPULACIONAL: %.2f\n", densidade1);
    // dividindo as cartas
    printf("-------------------------------------\n");

    // EXIBINDO CARTA 2
    printf("\n##CARTA 2###");
    printf("\nESTADO: %s", estado2);
    printf("\nCÓDIGO: %s0%u", estado2, codigo2);
    printf("\nCIDADE: %s", cidade2);
    printf("\nPOPULAÇÃO: %u", populacao2);
    printf("\nÁREA: %2.f", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nPONTOS TURÍSTICOS: %u", pontos_turisticos2);
    printf("PIB PER CAPITA: %.2f\n", pib_capita2);
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidade2);

    printf("-------------------------------------\n");

    // COMPARAÇÃO DAS CARTAS
    printf("\n## ESCOLHA QUAL ATRIBUTO IRÁ COMPARAR##");
    printf("\n 1 - POPULAÇÃO");
    printf("\n 2 - ÁREA");
    printf("\n 3 - PIB");
    printf("\n 4 - PONTOS TURÍSTICOS");
    printf("\n 5 - PIB PER CAPITA");
    printf("\n 6 - DENSIDADE POPULACIONAL");
    printf("\n 7 - SUPER PODER \n Digite sua escolha:");
    int escolha;
    scanf("%d", &escolha);
    printf("\n----------------------------------------\n \n");

    switch (escolha)
    {
    case 1:
        printf("\n## SUA ESCOLHA FOI POPULAÇÃO##");
        if (populacao1 > populacao2)
        {
            printf("\n %s: POPULAÇÃO: %d", cidade1, populacao1);
            printf("\n %s: POPULAÇÃO: %d", cidade2, populacao2);

            printf("\n ### O O VENCEDOR É %s ###", cidade1);
        }
        else if (populacao2 > populacao1)
        {
            printf("\n %s: POPULAÇÃO: %d", cidade1, populacao1);
            printf("\n %s: POPULAÇÃO: %d", cidade2, populacao2);
            printf("\n ### O O VENCEDOR É %s ###", cidade2);
        }
        else
        {
            printf("\n ##EMPATE##");
        }
        break;
    case 2:
        printf("\n## SUA ESCOLHA FOI ÁREA##");
        if (area1 > area2)
        {
            printf("\n %s: ÁREA: %.2f", cidade1, area1);
            printf("\n %s: ÁREA: %.2f", cidade2, area2);

            printf("\n ### O O VENCEDOR É %s ###", cidade1);
        }
        else if (area1 < area2)
        {
            printf("\n %s: ÁREA: %.2f", cidade1, area1);
            printf("\n %s: ÁREA: %.2f", cidade2, area2);

            printf("\n ### O O VENCEDOR É %s ###", cidade2);
        }
        else
        {
            printf("\n ##EMPATE##");
        }
        break;
    case 3:
        printf("\n## SUA ESCOLHA FOI PIB##");
        if (pib1 > pib2)
        {
            printf("\n %s: PIB: %.2f", cidade1, pib1);
            printf("\n %s: PIB: %.2f", cidade2, pib2);

            printf("\n ### O O VENCEDOR É %s ###", cidade1);
        }
        else if (pib1 < pib2)
        {
            printf("\n %s: PIB: %2f", cidade1, pib1);
            printf("\n %s: PIB: %2f", cidade2, pib2);

            printf("\n ### O O VENCEDOR É %s ###", cidade2);
        }
        else
        {
            printf("\n ##EMPATE##");
        }
        break;
    case 4:
        printf("\n## SUA ESCOLHA FOI PONTOS TURÍSTICOS##");
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("\n %s: PONTOS TURÍSTICOS: %d", cidade1, pontos_turisticos1);
            printf("\n %s: PONTOS TURÍSTICOS: %d", cidade2, pontos_turisticos2);

            printf("\n ### O O VENCEDOR É %s ###", cidade1);
        }
        else if (pontos_turisticos1 < pontos_turisticos2)
        {
            printf("\n %s: PONTOS TURÍSTICOS: %d", cidade1, pontos_turisticos1);
            printf("\n %s: PONTOS TURÍSTICOS: %d", cidade2, pontos_turisticos2);

            printf("\n ### O O VENCEDOR É %s ###", cidade2);
        }
        else
        {
            printf("\n ##EMPATE##");
        }

        break;
    case 5:
        printf("\n## SUA ESCOLHA FOI PIB PER CAPITA##");
        if (pib_capita1 > pib_capita2)
        {
            printf("\n %s: PIB PER CAPTA: %.2ff", cidade1, pib_capita1);
            printf("\n %s: PIB PER CAPTA: %.2ff", cidade2, pib_capita2);

            printf("\n ### O O VENCEDOR É %s ###", cidade1);
        }
        else if (pib_capita1 < pib_capita2)
        {
            printf("\n %s: PIB PER CAPTA: %.2ff", cidade1, pib_capita1);
            printf("\n %s: PIB PER CAPTA: %.2ff", cidade2, pib_capita2);

            printf("\n ### O O VENCEDOR É %s ###", cidade2);
        }
        else
        {
            printf("\n ##EMPATE##");
        }

        break;
    case 6:
        printf("\n## SUA ESCOLHA FOI DENSIDADE POPULACIONAL##");
        if (densidade1 < densidade2)
        {
            printf("\n %s: DENSIDADE POPULACIONAL: %.2f", cidade1, densidade1);
            printf("\n %s: DENSIDADE POPULACIONAL: %.2f", cidade2, densidade2);

            printf("\n ### O O VENCEDOR É %s ###", cidade1);
        }
        else if (densidade1 > densidade2)
        {
            printf("\n %s: DENSIDADE POPULACIONAL: %.2f", cidade1, densidade1);
            printf("\n %s: DENSIDADE POPULACIONAL: %.2f", cidade2, densidade2);

            printf("\n ### O O VENCEDOR É %s ###", cidade2);
        }
        else
        {
            printf("\n ##EMPATE##");
        }
        break;

    case 7:
        printf("\n## SUA ESCOLHA FOI SUPER PODER##");
        if (superpoder1 > superpoder2)
        {
            printf("\n %s: SUPER PODER: %.2f", cidade1, superpoder1);
            printf("\n %s: SUPER PODER: %.2f", cidade2, superpoder2);

            printf("\n ### O O VENCEDOR É %s ###", cidade1);
        }
        else if (superpoder1 < superpoder2)
        {
            printf("\n %s: SUPER PODER: %.2f", cidade1, superpoder1);
            printf("\n %s: SUPER PODER: %.2f", cidade2, superpoder2);

            printf("\n ### O O VENCEDOR É %s ###", cidade2);
        }
        else
        {
            printf("\n ##EMPATE##");
        }

        break;

    default:
    }

    return 0;
}