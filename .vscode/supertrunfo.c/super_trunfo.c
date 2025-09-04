#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4]; // Código da carta, como "P01"
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4]; // Código da carta, como "T02"
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Solicitar informações da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  // Leitura do estado

    printf("Código da Carta (ex: P01): ");
    scanf("%s", codigo1);  // Leitura do código da carta

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);  // Leitura do nome da cidade

    printf("População: ");
    scanf("%d", &populacao1);  // Leitura da população

    printf("Área (em km²): ");
    scanf("%f", &area1);  // Leitura da área

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);  // Leitura do PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);  // Leitura dos pontos turísticos

    printf("\n");

    // Solicitar informações da segunda carta
    printf("Cadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);  // Leitura do estado

    printf("Código da Carta (ex: T02): ");
    scanf("%s", codigo2);  // Leitura do código da carta

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);  // Leitura do nome da cidade

    printf("População: ");
    scanf("%d", &populacao2);  // Leitura da população

    printf("Área (em km²): ");
    scanf("%f", &area2);  // Leitura da área

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);  // Leitura do PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);  // Leitura dos pontos turísticos

    // Exibir as informações coletadas
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
