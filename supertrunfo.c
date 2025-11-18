/*
 * Tema 2 - Super Trunfo em c: Fundamentos e Técnicas Avançadas 
 * Autor: Hudson Nascimento de Lima
 * Data: 17/11/2025
 * Desafio nível Aventureiro =) 
 */

#include <stdio.h>

int main() {

    /*
    * Carta 1 - Declaração das variáveis
    */
    char estado1;
    char codigo1[5];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    /* Novas variáveis */
    float densidade1;
    float pibPerCapita1;

    /*
    * Carta 2 - Declaração das variáveis
    */
    char estado2;
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    /* Adição de novas variáveis */
    float densidade2;
    float pibPerCapita2;

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
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    /* Cálculos */
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;


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
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    /* Cálculos */
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;


    /*
    * Saída das Cartas
    */

    printf("\n\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
