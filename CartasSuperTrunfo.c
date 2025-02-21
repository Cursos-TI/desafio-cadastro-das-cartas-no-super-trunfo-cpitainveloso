#include<stdio.h>

int main() {

//dados da primeira carta, carta numero 1

int carta1;
char estado1; 
char codigo_da_carta1[50];
char nome_da_cidade1[50];
int populacao1;
float area_em_km1;
float pib1;
int numero_de_pontos_turisticos1;

//dados da segunda carta, carta numero 2
int carta2;
char estado2;
char codigo_da_carta2 [50];
char nome_da_cidade2[50];
int populacao2;
float area_em_km2;
float pib2;
int numero_de_pontos_turisticos2;
 
//impressao da primeira carta

printf("informe o numero da carta\n"); 
scanf("%d", &carta1);
printf("carta1: %d\n", carta1);

printf("informe o primeiro estado\n");
scanf(" %c", &estado1);
printf("estado1: %c\n", estado1);

printf("digite o codigo da carta1\n");
scanf("%s", codigo_da_carta1);
printf("codigo_da_carta1: %s\n", codigo_da_carta1);

printf("digite o nome da cidade1\n");
scanf("%s", nome_da_cidade1);
printf("cidade1: %s\n", nome_da_cidade1);

printf("informe o numero da populacao\n");
scanf("%d", &populacao1);
printf("populacao1: %d\n", populacao1);

printf("informe a area em km\n");
scanf("%f", &area_em_km1);
printf("area_em_km: %f\n", area_em_km1);

printf("qual o pib dessa cidade\n");
scanf("%f", &pib1);
printf("pib1: %f\n", pib1);

printf("informe quantos pontos turisticos\n");
scanf("%d", &numero_de_pontos_turisticos1);
printf("numero_de_pontos_turisticos1: %d\n", populacao1);

//fim do primeiro codigo da carta 

//inicio do codigo da segunda carta 

printf("informe o numero da carta\n");
scanf("%d", &carta2);
printf("carta2: %d\n", carta2);

printf("informe o segundo estado\n");
scanf("%c", &estado2);
printf("estado2: %c\n", estado2);

printf("digite o codigo da carta2\n");
scanf("%s", &codigo_da_carta2);
printf("codigo_da_carta2: %s\n", codigo_da_carta2);

printf("digite o nome da cidade2\n");
scanf("%s", &nome_da_cidade2);
printf("cidade2: %s\n", nome_da_cidade2);

printf("informe o numero da populacao\n");
scanf("%d", &populacao2);
printf("populacao2: %d\n", populacao2);

printf("informe a area em km\n");
scanf("%f", &area_em_km2);
printf("area_em_km2: %f\n", area_em_km2);

printf("qual o pib dessa cidade\n");
scanf("%f", &pib2);
printf("pib2: %f\n", pib2);


printf("informe quantos pontos turisticos\n");
scanf("%d", &numero_de_pontos_turisticos2);
printf("numero_de_pontos_turisticos2: %d\n", numero_de_pontos_turisticos2);

// fim do codigo
return 0;
}