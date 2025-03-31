#include <stdio.h>

int main(){

    char pais1[20], pais2[20];
    char estado1[20], estado2[20];
    char codigo1[20], cidade1[20], codigo2[20], cidade2[20];
    unsigned long int turismo1, populacao1, turismo2, populacao2, atributo1, atributo2;
    float area1, pib1, densidade1, percapita1, area2, pib2, densidade2, percapita2, resultado1, resultado2, resultado3;
    float valor1c1, valor2c1, valor2c2, valor1c2 , soma1, soma2;

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
    scanf("%u", &populacao1);
    printf("Digite o número de pontos turísticos da cidade da carta número 1: \n");
    scanf("%u", &turismo1);
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
    printf("Número de habitantes: %u \n", populacao1);
    printf("Pontos turísticos: %u \n", turismo1);
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
    scanf("%u", &populacao2);
    printf("Digite o número de pontos turísticos da cidade da  carta número 2: \n");
    scanf("%u", &turismo2);
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
    printf("Número de habitantes: %u \n", populacao2);
    printf("Pontos turísticos: %u \n", turismo2);
    printf("Área da cidade: %f \n", area2);
    printf("PIB: %f \n", pib2); 
    printf("PIB per capita: %f \n", percapita2);
    printf("Densidade Populacional: %f \n", densidade2);

    printf("***Primera rodada***\n");
    printf("Escolha o primeiro atributo das cartas para comparar:\n");
    printf("1. Número de habitantes\n");
    printf("2. Número de pontos turísticos\n");
    printf("3. Área da cidade\n");
    printf("4. PIB\n");
    printf("5. PIB per capita\n");
    printf("6. Densidade Populacional\n");


    printf("Escolha um atributo: \n");
    scanf("%u", &atributo1);

    switch (atributo1)
    {
    case 1:
        printf("Você escolheu o atributo Número de Habitantes\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        valor1c1 = populacao1;
        valor1c2 = populacao2;

        if (populacao1 == populacao2)
        {
            printf("Empate\n");
        }
        else if (populacao1 > populacao2)
        {
            printf("A carta número 1 ganhou esta rodada\n");
        }
        else
        {
            printf("A carta número 2 ganhou esta rodada\n");
        }

        break;
    case 2:
        printf("Você escolheu o atributo Número de Pontos Turisticos\n");
        resultado1 = turismo1 > turismo2 ? 1 : 0;
        valor1c1 = turismo1;
        valor1c2 = turismo2;
        if (turismo1 == turismo2)
        {
            printf("Empate\n");
        }
        else if (turismo1 > turismo2)
        {
            printf("A carta número 1 ganhou esta rodada\n");
        }
        else
        {
            printf("A carta número 2 ganhou esta rodada\n");
        }
        break;
    case 3:
        printf("Você escolheu o atributo Área da cidade\n");
        resultado1 = area1 > area2 ? 1 : 0;
        valor1c1 = area1;
        valor1c2 = area2;
        if (area1 == area2)
        {
            printf("Empate\n");
        }
        else if (area1 > area2)
        {
            printf("A carta número 1 ganhou esta rodada\n");
        }
        else
        {
            printf("A carta número 2 ganhou esta rodada\n");
        }
        break;
    case 4:
        printf("Você escolheu o atributo PIB\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        valor1c1 = pib1;
        valor1c2 = pib2;
        if (pib1 == pib2)
        {
            printf("Empate\n");
        }
        else if (pib1 > pib2)
        {
            printf("A carta número 1 ganhou esta rodada\n");
        }
        else
        {
            printf("A carta número 2 ganhou esta rodada\n");
        }
        break;
    case 5:
        printf("Você escolheu o atributo PIB per capita\n");
        resultado1 = percapita1 > percapita2 ? 1 : 0;
        valor1c1 = percapita1;
        valor1c2 = percapita2;
        if (percapita1 == percapita2)
        {
            printf("Empate\n");
        }
        else if (percapita1 > percapita2)
        {
            printf("A carta número 1 ganhou esta rodada\n");
        }
        else
        {
            printf("A carta número 2 ganhou esta rodada\n");
        }
        break;
    case 6:
        printf("Você escolheu o atributo Densidade Populacional\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        valor1c1 = densidade1;
        valor1c2 = densidade2;
        if (densidade1 == densidade2)
        {
            printf("Empate\n");
        }
        else if (densidade1 < densidade2)
        {
            printf("A carta número 1 ganhou esta rodada\n");
        }
        else
        {
            printf("A carta número 2 ganhou esta rodada\n");
        }
        break;
    
    default:
        printf("Opção de atributo invalida\n");
        break;
    }
    
    printf("***Segunda rodada***\n");
    printf("Escolha o segundo atributo das cartas para comparar:\n");
    printf("1. Número de habitantes\n");
    printf("2. Número de pontos turísticos\n");
    printf("3. Área da cidade\n");
    printf("4. PIB\n");
    printf("5. PIB per capita\n");
    printf("6. Densidade Populacional\n");


    printf("Escolha um atributo: \n");
    scanf("%u", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("Esse atributo já foi escolhido anteriormente\n");
    }
    else
    {
        switch (atributo2)
        {
        case 1:
        printf("Você escolheu o atributo Número de Habitantes\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        valor2c1 = populacao1;
        valor2c2 = populacao2;
        if (populacao1 == populacao2)
        {
            printf("Empate\n");
        }
        else if (populacao1 > populacao2)
        {
            printf("A carta número 1 ganhou esta rodada\n");
        }
        else
        {
            printf("A carta número 2 ganhou esta rodada\n");
        }
            break;
        case 2:
            printf("Você escolheu o atributo Número de Pontos Turisticos\n");
            resultado2 = turismo1 > turismo2 ? 1 : 0;
            valor2c1 = turismo1;
            valor2c2 = turismo2;
            if (turismo1 == turismo2)
            {
                printf("Empate\n");
            }
            else if (turismo1 > turismo2)
            {
                printf("A carta número 1 ganhou esta rodada\n");
            }
            else
            {
                printf("A carta número 2 ganhou esta rodada\n");
            }
            break;
        case 3:
            printf("Você escolheu o atributo Área da cidade\n");
            resultado2 = area1 > area2 ? 1 : 0;
            valor2c1 = area1;
            valor2c2 = area2;
            if (area1 == area2)
            {
            printf("Empate\n");
            }
            else if (area1 > area2)
            {
            printf("A carta número 1 ganhou esta rodada\n");
            }
            else
            {
            printf("A carta número 2 ganhou esta rodada\n");
            }
            break;
        case 4:
            printf("Você escolheu o atributo PIB\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            valor2c1 = pib1;
            valor2c2 = pib2;
            if (pib1 == pib2)
            {
                printf("Empate\n");
            }
            else if (pib1 > pib2)
            {
                printf("A carta número 1 ganhou esta rodada\n");
            }
            else
            {
                printf("A carta número 2 ganhou esta rodada\n");
            }
            break;
        case 5:
            printf("Você escolheu o atributo PIB per capita\n");
            resultado2 = percapita1 > percapita2 ? 1 : 0;
            valor2c1 = percapita1;
            valor2c2 = percapita2;
            if (percapita1 == percapita2)
            {
                printf("Empate\n");
            }
            else if (percapita1 > percapita2)
            {
                printf("A carta número 1 ganhou esta rodada\n");
            }
            else
            {
                printf("A carta número 2 ganhou esta rodada\n");
            }
            break;
        case 6:
            printf("Você escolheu o atributo Densidade Populacional\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            valor2c1 = densidade1;
            valor2c2 = densidade2;
            if (densidade1 == densidade2)
            {
            printf("Empate\n");
            }
            else if (densidade1 < densidade2)
            {
            printf("A carta número 1 ganhou esta rodada\n");
            }
            else
            {
            printf("A carta número 2 ganhou esta rodada\n");
            }
            break;
        
        default:
            break;
        }
    }
    printf("***Rodade extra, soma dos atributos escolhidos***\n");
    soma1 = valor1c1 + valor2c1;
    soma2 = valor1c1 + valor2c2;
    resultado3 = soma1 > soma2 ? 1 : 0;
    if (soma1 == soma2)
    {
        printf("Empate\n");
    }
    else if (soma1 > soma2)
    {
       printf("A carta número 1 ganhou esta rodada\n");
    }
    else 
    {
        printf("A carta número 2 ganhou esta rodada\n");
    }
    
    
    
    if (soma1 == soma2)
    {
        printf("A competição acabou em empate\n");
    }
    else
    {
        if (resultado1 && resultado2 && resultado3)
        {
            printf("A carta número 1 ganhou a competição!");
        }
        else if (resultado1 && resultado2)
        {
            printf("A carta número 1 ganhou a competição!");
        }
        else if (resultado1 && resultado3)
        {
            printf("A carta número 1 ganhou a competição!");
        }
        else if (resultado2 && resultado3)
        {
            printf("A carta número 1 ganhou a competição!");
        }
        else
        {
            printf("A carta número 2 ganhou a competição!");
        }
        
    }
    

    return 0;
}