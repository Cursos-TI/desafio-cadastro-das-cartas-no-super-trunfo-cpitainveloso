#include <stdio.h>

int main() {
    // Estrutura para armazenar os dados das cartas
    int carta1, carta2;
    char estado1, estado2;
    char codigo_da_carta1[50], codigo_da_carta2[50];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    int populacao1, populacao2;
    float area_em_km1, area_em_km2;
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;

    // Entrada de dados da primeira carta
    printf("Informe o número da carta 1: ");
    scanf("%d", &carta1);
    getchar(); // Consumir o ENTER deixado pelo scanf

    printf("Informe o primeiro estado (A-H): ");
    scanf(" %c", &estado1);
    getchar(); // Consumir o ENTER deixado pelo scanf

    printf("Digite o código da carta 1: ");
    scanf("%49s", codigo_da_carta1);
    getchar(); // Consumir o ENTER deixado pelo scanf

    printf("Digite o nome da cidade 1: ");
    scanf(" %49[^\n]", nome_da_cidade1); // Permite espaços no nome da cidade
    getchar();

    printf("Informe a população: ");
    scanf("%d", &populacao1);
    getchar();

    printf("Informe a área em km²: ");
    scanf("%f", &area_em_km1);
    getchar();

    printf("Qual o PIB dessa cidade (em bilhões): ");
    scanf("%f", &pib1);
    getchar();

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);
    getchar();

    // Entrada de dados da segunda carta
    printf("\nInforme o número da carta 2: ");
    scanf("%d", &carta2);
    getchar();

    printf("Informe o segundo estado (A-H): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o código da carta 2: ");
    scanf("%49s", codigo_da_carta2);
    getchar();

    printf("Digite o nome da cidade 2: ");
    scanf(" %49[^\n]", nome_da_cidade2);
    getchar();

    printf("Informe a população: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Informe a área em km²: ");
    scanf("%f", &area_em_km2);
    getchar();

    printf("Qual o PIB dessa cidade (em bilhões): ");
    scanf("%f", &pib2);
    getchar();

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);
    getchar();

    // Exibição dos dados cadastrados
    printf("\n========== Cartas Cadastradas ==========\n");

    printf("\nCarta 1:\n");
    printf("Número: %d\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area_em_km1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Número: %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_em_km2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos2);

    return 0;
}
