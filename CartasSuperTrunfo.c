#include <stdio.h>

int main() { //estrutura para armazenar os dados de uma carta
    unsigned long int populacao1, populacao2; //VARIAVEIS PARA ARMAZENAR A POPULAÇÃO
    float area1, area2;// VARIAVEIS PARA ARMAZENAR A AREA
    float pib1, pib2;//VARIAVEIS PARA ARMAZENAR O PIB DA AREA
    int pontos_turisticos1, pontos_turisticos2;//VARIAVEIS PARA ARMAZENAR OS PONTOS TURISTICOS
    char estado1[20], estado2[20];//VARIAVEIS PARA ARMAZENAR O ESTADO
    char codigo1[10], codigo2[10];//VARIAVEIS PARA ARMAZENAR O CODIGO
    char cidade1[40], cidade2[40];//VARIAVEIS PARA ARMAZENAR A CIDADE
    
    //variaveis para armazenaar a densidade populacional e o pib per capita
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    //variaveis para armazenar o super poder
    float superpoder1, superpoder2;

    //perguntado ao usuario os dados da carta1
    printf("Cadastro da Carta 1:\n");

    printf("Digite seu estado: \n");
    scanf("%s", &estado1);//LE O ESTADO DA CARTA

    printf("Codigo da carta1: \n");
    scanf("%s", &codigo1);//LE O CODIGO DA CARTA

    printf("Nome da cidade:\n");
    scanf("%s", &cidade1);//LE A CIDADE DA CARTA

    printf("População:\n ");
    scanf("%d", &populacao1);//LE A POPULACAO DA CARTA

    printf("Área: ");
    scanf("%f", &area1);//LE A AREA DA CARTA

    printf("PIB: ");
    scanf("%f", &pib1);//LE O PIB DA CARTA

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);//LE OS PONTOS TURISTICOS DAS PASTAS

    //perguntando ao usuario os dados da carta2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite seu estado:\n");
    scanf("%s", &estado2);

    printf("Codigo:\n");
    scanf("%s", &codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //calculando a densidade populacional e o pib per capita
    densidadepopulacional1 = (float)populacao1 / area1;
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    //calculando o super poder
    superpoder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pibpercapita1 + (1.0f / densidadepopulacional1);
    superpoder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pibpercapita2 + (1.0f / densidadepopulacional2);

    //exibir os dados da carta1
    printf("\nDados da Carta 1:\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo da carta1 %s%s \n",estado1, codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("pib per capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);
   
    //exibir os dados da carta2
    printf("\nDados da Carta 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da carta2 %s%s \n",estado2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparando as cartas
printf("\nComparação de Cartas:\n");
printf("População: %s\n", (populacao1 > populacao2) ? "Carta 1 venceu" : "Carta 2 venceu");
printf("Área: %s\n", (area1 > area2) ? "Carta 1 venceu" : "Carta 2 venceu");
printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 venceu" : "Carta 2 venceu");
printf("Pontos Turísticos: %s\n", (pontos_turisticos1 > pontos_turisticos2) ? "Carta 1 venceu" : "Carta 2 venceu");
printf("Densidade Populacional: %s\n", (densidadepopulacional1 < densidadepopulacional2) ? "Carta 1 venceu" : "Carta 2 venceu");
printf("PIB per Capita: %s\n", (pibpercapita1 > pibpercapita2) ? "Carta 1 venceu" : "Carta 2 venceu");
printf("Super Poder: %s\n", (superpoder1 > superpoder2) ? "Carta 1 venceu" : "Carta 2 venceu");

    return 0;
}
