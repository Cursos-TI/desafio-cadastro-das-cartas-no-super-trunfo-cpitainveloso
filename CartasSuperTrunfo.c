#include <stdio.h>

int main() {
    // Características da carta 1
    char estado;
    char codigo_carta[16];
    char nome_cidade[16];
    int populacao;
    float area_km;
    float pib;
    int pontos_turisticos; 

    // Características da carta 2
    char estado2;
    char codigo_carta2[16];
    char nome_cidade2[16];
    int populacao2; 
    float area_km2; 
    float pib2;
    int pontos_turisticos2;

    // Entrada de dados para a primeira carta
    printf("Entre com a sigla do estado (ex: S, M, R...): ");
    scanf(" %c", &estado);

    printf("Qual o código da sua carta: ");
    scanf("%s", codigo_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Qual o número da população: ");
    scanf("%d", &populacao);

    printf("Quantos km² tem essa cidade: ");
    scanf("%f", &area_km);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Entrada de dados para a segunda carta
    printf("\nEntre com a sigla do segundo estado (ex: S, M, R...): ");
    scanf(" %c", &estado2);  // Espaço antes do %c evita erro

    printf("Qual o código da sua carta: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Qual o número da população: ");
    scanf("%d", &populacao2);

    printf("Quantos km² tem essa cidade: ");
    scanf("%f", &area_km2);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados das duas cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area_km);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}


