#include <stdio.h>

int main(void)
{
    /* -------- Carta 1 -------- */
    char estado1;                 // mantendo como letra (A-H) conforme seu fluxo atual
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1; // AGORA unsigned long int
    float area1;
    float pib1;                   // em bilhões de reais
    int pontosTuristicos1;

    /* -------- Carta 2 -------- */
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2; // AGORA unsigned long int
    float area2;
    float pib2;                   // em bilhões de reais
    int pontosTuristicos2;

    /* -------- Título -------- */
    printf("=== SUPER TRUNFO - CADASTROS DE CARTAS ===\n\n");

    /* -------- Cadastro Carta 1 -------- */
    printf("--- CADASTRO DA CARTA 1 ---\n\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da cidade (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade1);

    printf("Digite a populacao: ");
    scanf(" %lu", &populacao1);  // leitura de unsigned long

    printf("Digite a area (em km2): ");
    scanf(" %f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    printf("\n--- CARTA 1 CADASTRADA ---\n\n");

    /* -------- Cadastro Carta 2 -------- */
    printf("--- CADASTRO DA CARTA 2 ---\n\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da cidade (ex: B02): ");
    scanf(" %3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Digite a populacao: ");
    scanf(" %lu", &populacao2);  // leitura de unsigned long

    printf("Digite a area (em km2): ");
    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    printf("\n--- CARTA 2 CADASTRADA ---\n\n");

    /* -------- Cálculos obrigatórios -------- */
    /* Densidade = populacao / area (hab/km2) */
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    /* PIB per capita = (PIB em reais) / populacao
       OBS: entrada é em BILHOES → multiplicar por 1e9 */
    float pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    /* Super Poder:
       soma dos atributos numericos:
       Populacao + Area + PIB(bilhoes) + PontosTuristicos + PIB per Capita + (1 / Densidade) */
    float superPoder1 = (float)populacao1
                      + area1
                      + pib1
                      + (float)pontosTuristicos1
                      + pibPerCapita1
                      + (1.0f / densidade1);

    float superPoder2 = (float)populacao2
                      + area2
                      + pib2
                      + (float)pontosTuristicos2
                      + pibPerCapita2
                      + (1.0f / densidade2);

    /* -------- Saída — Cartas -------- */
    printf("=== INFORMACOES DAS CARTAS CADASTRADAS ===\n\n");

    printf("--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");

    printf("--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    /* -------- Comparacoes — 1 vence (1) / 2 vence (0) -------- */
    printf("=== COMPARACAO DE CARTAS ===\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", (populacao1 > populacao2));
    printf("Area: Carta 1 venceu (%d)\n", (area1 > area2));
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2));

    /* Para Densidade, vence a MENOR */
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidade1 < densidade2));

    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta 1 venceu (%d)\n", (superPoder1 > superPoder2));

    return 0;
}
