#include <stdio.h>

int main() {
    // Características da cidade3
    char estado;
    char codigo_carta[16];
    char nome_cidade[16];
    int populacao;
    float area_km;
    float pib;
    int pontos_turisticos; 
 
// carta de numero 2 
   carta 2;


    char estado2;
    char codigo_carta2[15];
    char nome_cidade2[15];
    int populacao2; 
    float area_km2; 
    float pib2;
    int pontos_turisticos2;

    // Entrada de dados
    printf("Entre com a sigla do estado  (ex: S, M, R...)\n");
    scanf(" %c", &estado);
    printf("Estado: %c\n", estado);

    printf("Qual o código da sua carta\n");
    scanf("%s", codigo_carta);
    printf("Código: %s\n", codigo_carta);

    printf("Digite o nome da cidade\n");
    scanf("%s", nome_cidade);
    printf("Nome: %s\n", nome_cidade);

    printf("Qual o número da população\n");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    printf("Quantos km² tem essa cidade\n");
    scanf("%f", &area_km);
    printf("Área: %.2f km²\n", area_km);

    printf("Informe o PIB (em bilhões)\n");
    scanf("%f", &pib);
    printf("PIB: %.2f bilhões\n", pib);

    printf("Número de pontos turísticos\n");
    scanf("%d", &pontos_turisticos);
    printf("Pontos turísticos: %d\n", pontos_turisticos);


    // Entrada de dados carta 2 
    printf("Entre com a sigla do segundo estado  (ex: S, M, R...)\n");
    scanf(" %c", &estado2);
    printf("Estado: %c\n", estado2);

    printf("Qual o código da sua carta\n");
    scanf("%s", codigo_carta2);
    printf("Código: %s\n", codigo_carta2);

    printf("Digite o nome da cidade\n");
    scanf("%s", nome_cidade2);
    printf("Nome: %s\n", nome_cidade2);

    printf("Qual o número da população\n");
    scanf("%d", &populacao2);
    printf("População: %d\n", populacao2);

    printf("Quantos km² tem essa cidade\n");
    scanf("%f", &area_km2);
    printf("Área: %.2f km²\n", area_km2);

    printf("Informe o PIB (em bilhões)\n");
    scanf("%f", &pib2);
    printf("PIB: %.2f bilhões\n", pib2);

    printf("Número de pontos turísticos\n");
    scanf("%d", &pontos_turisticos2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}

