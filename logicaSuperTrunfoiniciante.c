#include <stdio.h>

int main(){
    
    char pais1[20], pais2[20];
    char estado1[20], estado2[20];
    char codigo1[20], cidade1[20], codigo2[20], cidade2[20];
    unsigned long int turismo1, populacao1, turismo2, populacao2;
    float area1, pib1, densidade1, percapita1, area2, pib2, densidade2, percapita2;

    printf("***Carta número 1***\n");
    printf("Digite o pais da carta número 1: \n");
    scanf("%s", &pais1);
    printf("Digite o nome do Estado da carta número 1 (sem espaços): \n");
    scanf("%s", &estado1);
    printf("Digite o código da carta número 1: \n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade a carta  número 1(sem espaços): \n");
    scanf("%s", &cidade1);
    printf("Digite o número de habitantes da cidade da carta número 1: \n");
    scanf("%d", &populacao1);
    printf("Digite o número de pontos turísticos da cidade da carta número 1: \n");
    scanf("%d", &turismo1);
    printf("Digite a área da cidade(Km²) da carta número 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta número 1: \n");
    scanf("%f", &pib1);

    densidade1 = (float) populacao1 / area1;
    percapita1 = (float) pib1 / populacao1;

    printf("Pais: %s \n", pais1);
    printf("Estado: %s \n", estado1);
    printf("Cósigo da carta: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("Número de habitantes: %d \n", populacao1);
    printf("Pontos turísticos: %d \n", turismo1);
    printf("Área da cidade: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("PIB per capita: %f \n", percapita1);
    printf("Densidade Populacional: %f \n", densidade1);

    printf("***Carta número 2***\n");
    printf("Digite o pais da carta número 2: \n");
    scanf("%s", &pais2);
    printf("Digite o nome do Estado da  carta número 2(sem espaços): \n");
    scanf("%s", &estado2);
    printf("Digite o código da carta número 2: \n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade da  carta número 2(sem espaços): \n");
    scanf("%s", &cidade2);
    printf("Digite o número de habitantes da cidade da  carta número 2: \n");
    scanf("%d", &populacao2);
    printf("Digite o número de pontos turísticos da cidade da  carta número 2: \n");
    scanf("%d", &turismo2);
    printf("Digite a área da cidade da carta número 2(Km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta número 2: \n");
    scanf("%f", &pib2);

    densidade2 = (float) populacao2 / area2;
    percapita2 = (float) pib2 / populacao2;

    printf("Pais: %s \n", pais2);
    printf("Estado: %s \n", estado2);
    printf("Cósigo da carta: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Número de habitantes: %d \n", populacao2);
    printf("Pontos turísticos: %d \n", turismo2);
    printf("Área da cidade: %f \n", area2);
    printf("PIB: %f \n", pib2); 
    printf("PIB per capita: %f \n", percapita2);
    printf("Densidade Populacional: %f \n", densidade2);

    printf("***Comparação do PIB***\n");
    if (percapita1 > percapita2)
    {
        printf("PIB da carta número 1: %f\n", percapita1);
        printf("PIB da carta número 2: %f\n", percapita2);
        printf("A carta número 1 ganhou!");
    }
    else
    {
        printf("PIB da carta número 1: %f\n", percapita1);
        printf("PIB da carta número 2: %f\n", percapita2);
        printf("A carta número 2 ganhou!");
    }
    
    return 0;
    }