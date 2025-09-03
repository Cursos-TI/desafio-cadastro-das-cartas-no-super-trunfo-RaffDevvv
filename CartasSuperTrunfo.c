#include <stdio.h>

int main(void)
{
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Título do programa
    printf("=== SUPER TRUNFO - CADASTROS DE CARTAS ===\n\n");

    // Cadastro da primeira carta
    printf("--- CADASTRO DA CARTA 1 ---\n\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); // <- %c para char

    printf("Digite o código da cidade (ex: A01): ");
    scanf(" %3s", codigo1); // <- limita a 3 chars

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade1); // <- lê até \n com limite

    printf("Digite a população: ");
    scanf(" %d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    printf("\n--- CARTA 1 CADASTRADA ---\n\n\n");

    // Cadastro da segunda carta
    printf("--- CADASTRO DA CARTA 2 ---\n\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2); // <- %c para char

    printf("Digite o código da cidade (ex: B02): ");
    scanf(" %3s", codigo2); // <- limita a 3 chars

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2); // <- lê até \n com limite

    printf("Digite a população: ");
    scanf(" %d", &populacao2);

    printf("Digite a área em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    printf("\n--- CARTA 2 CADASTRADA ---\n\n");

    // Exibição das informações das cartas
    printf("=== INFORMAÇÕES DAS CARTAS CADASTRADAS ===\n\n");

    // Exibição da primeira carta
    printf("--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("\n");

    // Exibição da segunda carta
    printf("--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("\n");

    return 0;
}
