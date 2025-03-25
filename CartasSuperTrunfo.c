int main() { //estrutura para armazenar os dados de uma carta
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    char estado1[20], estado2[20];
    char codigo1[10], codigo2[10];
    char cidade1[40], cidade2[40];

    //perguntado ao usuario os dados da carta1
    printf("Cadastro da Carta 1:\n");
    printf("Digite seu estado\n");
    scanf("%s", &estado1);

    printf("Codigo\n");
    scanf("%s", &codigo1);

    printf("Nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("População:\n ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

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

    //exibir os dados da carta1
    printf("\nDados da Carta 1:\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo da carta1 %s%s \n",estado1, codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

    //exibir os dados da carta2
    printf("\nDados da Carta 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da carta2 %s%s \n",estado2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}
