#include <stdio.h>

int main() {

    char Estado1[3];
    char Codigodacarta1[4];
    char Nomedacidade1[50];
    int Populacao1; 
    int NumerodepontosTuristicos1;
    float Area1;
    float PIB1;

    char Estado2[3];
    char Codigodacarta2[4];
    char Nomedacidade2[50];
    int Populacao2; 
    int NumerodepontosTuristicos2;
    float Area2;
    float PIB2;
    

    printf("=== Dados da Carta 1 ===\n");
    

    printf("Digite o estado: \n");
    scanf(" %c", Estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", Codigodacarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nomedacidade1);
    fgets(Nomedacidade1, sizeof(Nomedacidade1), stdin);

    printf("Digite a População: \n");
    scanf("%d", &Populacao1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NumerodepontosTuristicos1);

    printf("Digite a área km²: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

// Cálculo da densidade populacional e PIB per capita
    float densidadePopulacional1 = Populacao1 / Area1;
    float pibPerCapita1 = PIB1 / Populacao1;


    printf("A densidade populacional da cidade é: %.2f\n", densidadePopulacional1);

    printf("O PIB per capita da cidade é: %.2f reais\n", pibPerCapita1);

    
    printf("== Dados da carta 2 ==\n");

    
    
    printf("Digite o estado: \n");
    scanf(" %c", Estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", Codigodacarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nomedacidade2);
    fgets(Nomedacidade1, sizeof(Nomedacidade1), stdin);
    
    printf("Digite a População: \n");
    scanf("%d", &Populacao2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NumerodepontosTuristicos2);

    printf("Digite a área km²: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);


// Cálculo da densidade populacional e PIB per capita

    float densidadePopulacional2 = Populacao2 / Area2;
    float pibPerCapita2 = PIB2 / Populacao2;

    printf("A densidade populacional da cidade é: %.2f\n", densidadePopulacional2);

    printf("O PIB per capita da cidade é: %.2f reais \n", pibPerCapita2);

    return 0;

}