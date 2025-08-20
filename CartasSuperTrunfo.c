#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Alex

int main() {
    // Variáveis para a Carta 1
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Variáveis para a Carta 2
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Primeira Carta ---\n");
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de USD): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // --- Cadastro da Carta 2 ---
    printf("--- Cadastro da Segunda Carta ---\n");
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de USD): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // --- Exibicao dos Dados das Cartas ---
    printf("--- Dados da Primeira Carta ---\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de USD\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("\n");

    printf("--- Dados da Segunda Carta ---\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de USD\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}