#include <stdio.h>

int main() {
    char Estado1[3];
    char Codigodacarta1[4];
    char Nomedacidade1[50];
    unsigned long int Populacao1; 
    int NumerodepontosTuristicos1;
    float Area1;
    float PIB1;

    char Estado2[3];
    char Codigodacarta2[4];
    char Nomedacidade2[50];
    unsigned long int Populacao2; 
    int NumerodepontosTuristicos2;
    float Area2;
    float PIB2;

    printf("=== Dados da Carta 1 ===\n");
    
    printf("Digite o estado: \n");
    scanf(" %s", Estado1); 
    
    printf("Digite o código da carta: \n");
    scanf(" %s", Codigodacarta1); // O espaço antes de %s ajuda a ignorar espaços em branco

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Nomedacidade1); // Lê até a nova linha

    printf("Digite a População: \n");
    scanf("%lu", &Populacao1); 

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NumerodepontosTuristicos1);

    printf("Digite a área km²: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    float densidadePopulacional1 = Populacao1 / Area1;
    float pibPerCapita1 = PIB1 / Populacao1;

    printf("A densidade populacional da cidade é: %.2f\n", densidadePopulacional1);
    printf("O PIB per capita da cidade é: %.2f reais\n", pibPerCapita1);

    printf("== Dados da carta 2 ==\n");

    printf("Digite o estado: \n");
    scanf(" %s", Estado2); 

    printf("Digite o código da carta: \n");
    scanf(" %s", Codigodacarta2); // O espaço antes de %s ajuda a ignorar espaços em branco

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Nomedacidade2); // Lê até a nova linha

    printf("Digite a População: \n");
    scanf("%lu", &Populacao2); 

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NumerodepontosTuristicos2);

    printf("Digite a área km²: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    float densidadePopulacional2 = Populacao2 / Area2;
    float pibPerCapita2 = PIB2 / Populacao2;

    printf("A densidade populacional da cidade é: %.2f\n", densidadePopulacional2);
    printf("O PIB per capita da cidade é: %.2f reais \n", pibPerCapita2);

    float superPoder1 = Populacao1 + Area1 + PIB1 + NumerodepontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    float superPoder2 = Populacao2 + Area2 + PIB2 + NumerodepontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    printf("\nComparação de Super Poder:\n");

    // Comparação de População
    printf("População: Carta %d venceu (%d)\n", (Populacao1 > Populacao2) ? 1 : 2, (Populacao1 > Populacao2) ? 1 : 0);

    // Comparação de Área
    printf("Área: Carta %d venceu (%d)\n", (Area1 > Area2) ? 1 : 2, (Area1 > Area2) ? 1 : 0);

    // Comparação de PIB
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2) ? 1 : 0);

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (NumerodepontosTuristicos1 > NumerodepontosTuristicos2) ? 1 : 2, (NumerodepontosTuristicos1 > NumerodepontosTuristicos2) ? 1 : 0);

    // Comparação de Densidade Populacional
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0);

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2) ? 1 : 0);

    // Comparação de Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}
