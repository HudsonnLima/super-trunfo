/*
 * Tema 3 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo
 * Autor: Hudson Nascimento de Lima
 * Data: 20/11/2025
 * Desafio nível Aventureiro \o/
 * 
 * Programa que cadastra duas cartas de cidades (Super Trunfo) e permite
 * compará-las por atributos selecionados pelo usuário.
 */

#include <stdio.h>

int main()

{
    

    /*
     * Carta 1 - Declaração das variáveis
     *
     * Declaração das variáveis da Carta 1
     * estado1   -> letra identificando o estado (A-H)
     * codigo1   -> código da carta, ex: "A01"
     * nome1     -> nome da cidade
     * populacao1, area1, pib1, pontos1 -> atributos principais
     * densidade1, pibPerCapita1, superPoder1 -> atributos calculados
     */
     
    char estado1;
    char codigo1[5];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    /*
     * Carta 2 - Declaração das variáveis
     *
     * Declaração das variáveis da Carta 2
     * estado2   -> letra identificando o estado (A-H)
     * codigo2   -> código da carta, ex: "B02"
     * nome2     -> nome da cidade
     * populacao2, area1, pib1, pontos2 -> atributos principais
     * densidade2, pibPerCapita1, superPoder2 -> atributos calculados
     */
    char estado2;
    char codigo2[5];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    /*
     * Entrada dos dados da Carta 1
     */

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    getchar();
    fgets(nome1, 50, stdin);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    /* Cálculos */
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;

    superPoder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        pontos1 +
        pibPerCapita1 +
        (1.0f / densidade1);

    /*
     * Entrada dos dados da Carta 2
     */

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    getchar();
    fgets(nome2, 50, stdin);
    
    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    /* Cálculos */
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        pontos2 +
        pibPerCapita2 +
        (1.0f / densidade2);

    /*
     * Menu Interativo – Switch Case
     * O jogador escolhe um atributo e o programa avalia qual carta vence.
     * Cada caso contém lógica aninhada (if-else dentro de if-else)
     * conforme solicitado no enunciado do desafio.
     */
     

    int opcao;

    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO =====\n");

    switch (opcao)
{
    case 1:
        printf("Comparando População:\n");
        printf("%s -> %lu habitantes\n", nome1, populacao1);
        printf("%s -> %lu habitantes\n", nome2, populacao2);

        if (populacao1 != populacao2)
        {
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nome1);
            else
                printf("Vencedor: %s\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 2:
        printf("Comparando Área:\n");
        printf("%s -> %.2f km²\n", nome1, area1);
        printf("%s -> %.2f km²\n", nome2, area2);

        if (area1 != area2)
        {
            if (area1 > area2)
                printf("Vencedor: %s\n", nome1);
            else
                printf("Vencedor: %s\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 3:
        printf("Comparando PIB:\n");
        printf("%s -> %.2f bilhões\n", nome1, pib1);
        printf("%s -> %.2f bilhões\n", nome2, pib2);

        if (pib1 != pib2)
        {
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nome1);
            else
                printf("Vencedor: %s\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 4:
        printf("Comparando Pontos Turísticos:\n");
        printf("%s -> %d pontos\n", nome1, pontos1);
        printf("%s -> %d pontos\n", nome2, pontos2);

        if (pontos1 != pontos2)
        {
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", nome1);
            else
                printf("Vencedor: %s\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 5:
        printf("Comparando Densidade Demográfica:\n");
        printf("%s -> %.2f hab/km²\n", nome1, densidade1);
        printf("%s -> %.2f hab/km²\n", nome2, densidade2);

        if (densidade1 != densidade2)
        {
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", nome1);
            else
                printf("Vencedor: %s\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 6:
        printf("Comparando PIB per Capita:\n");
        printf("%s -> %.2f\n", nome1, pibPerCapita1);
        printf("%s -> %.2f\n", nome2, pibPerCapita2);

        if (pibPerCapita1 != pibPerCapita2)
        {
            if (pibPerCapita1 > pibPerCapita2)
                printf("Vencedor: %s\n", nome1);
            else
                printf("Vencedor: %s\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 7:
        printf("Comparando Super Poder:\n");
        printf("%s -> %.2f\n", nome1, superPoder1);
        printf("%s -> %.2f\n", nome2, superPoder2);

        if (superPoder1 != superPoder2)
        {
            if (superPoder1 > superPoder2)
                printf("Vencedor: %s\n", nome1);
            else
                printf("Vencedor: %s\n", nome2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    default:
        printf("Opção inválida!\n");
}

    return 0;
}
