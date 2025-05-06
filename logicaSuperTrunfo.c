#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Cadastro das Cartas:
    // Solicita ao usuário que insira os dados das cidades
    printf("Cadastro da Carta 1\n");
    printf("-------------------\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2\n");
    printf("-------------------\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B03): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo de densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB em reais por pessoa

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Comparação de Cartas:
    // Atributo escolhido: PIB per capita
    printf("\n\nComparação de cartas (Atributo: PIB per capita):\n\n");
    printf("Carta 1 - %s (%c): R$ %.2f por pessoa\n", nomeCidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%c): R$ %.2f por pessoa\n", nomeCidade2, estado2, pibPerCapita2);

    // Verifica qual cidade tem o maior PIB per capita
    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate entre as duas cartas!\n");
    }

    return 0;
}

