#include <stdio.h>

int main ()
{
// declaração das variaveis da primeira carta

    char estado[20];
    char codigo[20];
    char nomedacidade[20];
    unsigned long int populacao;
    int numerodepontosturisticos;
    float pib;
    float area;
    

// declaração das variaveis da segunda carta

    char estado2[20];
    char codigo2[20];
    char nomedacidade2[20];
    unsigned long int populacao2;
    int numerodepontosturisticos2;
    float pib2;
    float area2;
    

// Coleta é armazenamento dos dados da primeira carta

    printf("Carta 1 \n");

    printf("Digite uma letra de A a H representando o estado \n");
    scanf("%s", &estado);

    printf("Digite a letra do estado seguida de um numero de 01 a 04 (Ex:A01,B03) \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade \n");
    scanf(" %99[^\n]", &nomedacidade);

    printf("Digete o numero da Populacao da cidade \n");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em km² \n");
    scanf("%f", &area);

    printf("Digete o numero do PIB \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos \n");
    scanf("%d", &numerodepontosturisticos);

    printf("===========================================================\n");

// Coleta é armazenamento dos dados da segunda carta

    printf("Carta 2 \n");

    printf("Digite uma letra de A a H representando o estado \n");
    scanf("%s", &estado2);

    printf("Digite a letra do estado seguida de um numero de 01 a 04 (Ex:A01,B03) \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade \n");
    scanf(" %99[^\n]", &nomedacidade2);

    printf("Digete o numero da Populacao da cidade \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em km² \n");
    scanf("%f", &area2);

    printf("Digete o numero do PIB \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos \n");
    scanf("%d", &numerodepontosturisticos2);

// Calculando a densidade populacional da primeira carta 
    
    float calculandoDensidadePopulacional = populacao / area;


 // Calculando a densidade populacional da segunda carta 

    float calculandoDensidadePopulaciona2 = populacao2 / area2;


// calculando o PIB per capita da primeira carta

    float calculandopibpercapita1 = populacao / pib;

// calculando o PIB per capita da segunda carta

    float calculandopibpercapita2 = populacao2 / pib2;

// calculando o super poder 

    float superPoder1 = populacao + area + pib + numerodepontosturisticos + calculandopibpercapita1 + ( 1 / calculandoDensidadePopulacional);

    float superPoder2 = populacao2 + area2 + pib2 + numerodepontosturisticos2 + calculandopibpercapita2 + ( 1 / calculandoDensidadePopulaciona2);


    // exibição dos dados coletados das duas cartas

    printf("====================================================\n");
    
    printf("Carta 1: \n - Estado: %s \n - Codigo: %s \n - Nome da cidade: %s \n ", estado , codigo , nomedacidade);
    printf("- População: %d \n - Area: %.2f km² \n - PIB: %.2f bilhões de reais \n - Numero de pontos turisticos: %d \n - Densidade Populaciona: %.2f hab/km² \n: -  PIB per Capita: %.2f reais \n Super Poder %.2f \n", populacao , area , pib , numerodepontosturisticos , calculandoDensidadePopulacional , calculandopibpercapita1 , superPoder1);

    printf("\n");

    printf("Carta 2: \n - Estado: %s \n - Codigo: %s \n - Nome da cidade: %s \n ", estado2 , codigo2 , nomedacidade2);
    printf("- População: %d \n - Area: %.2f km² \n - PIB: %.2f bilhões de reais \n - Numero de pontos turisticos: %d \n - Densidade Populaciona: %.2f hab/km² \n - PIB per Capita: %.2f reais \n Super Poder %.2f \n", populacao2 , area2 , pib2 , numerodepontosturisticos2 , calculandoDensidadePopulaciona2 , calculandopibpercapita2 , superPoder2);

    printf("\n");
    
 // exibição da comparação das cartas    

    printf("Area da carta %d  venceu \n", (1*(area > area2) + 2*(area < area2)));

    printf("Pib da carta %d venceu \n", (1*(pib > pib2) + 2*(pib < pib2)));

    printf("Numero de pontos turisticos da carta %d venceu \n", (1*(numerodepontosturisticos > numerodepontosturisticos2) + 2*(numerodepontosturisticos < numerodepontosturisticos2)));

    printf("Super poder da carta %d venceu \n", (1*(superPoder1 > superPoder2) + 2*(superPoder1 < superPoder2)));

    printf("Populacao da carta %d venceu \n", (1*(populacao > populacao2) + 2*(populacao < populacao2)));

    printf("Densidade populaciona da carta %d venceu \n", (1*(calculandoDensidadePopulacional < calculandoDensidadePopulaciona2) + 2*(calculandoDensidadePopulacional > calculandoDensidadePopulaciona2)));

    printf("Pib per capita da carta %d venceu \n", (1*(calculandopibpercapita1 > calculandopibpercapita2) + 2*(calculandopibpercapita1 < calculandopibpercapita2)));

    return 0;
}
