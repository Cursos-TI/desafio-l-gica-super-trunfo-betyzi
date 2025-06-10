#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

//Neste código vamos comparaentre as snduas cartas algum atributo escolhido pelo usuario

    // Primeiramente definimos as variáveis 

    // Variáveis para a Carta 1
    char estado1;
    char codigo1[5];
    char nomecidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosturisticos1;
    float densidade1, pibpercapita1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[5];
    char nomecidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosturisticos2;
    float densidade2, pibpercapita2;

    int opcao;

    // Agora pegamos os valores para as duas cartas

     // Entrandas da carata 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

     //Entradas da carata 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B03): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    
    // Agora fazemos os cálculos
    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

   //Agora criamos um menu usando o Switch, fazendo cases para comparar apenas o atributo que o usuário pedir
    printf("\n=== Escolha um atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB Total\n");
    printf("4 - PIB Per Capita\n");
    printf("5 - Pontos Turísticos\n");
    printf("6 - Densidade Demográfica\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &opcao);

    printf("\n--- COMPARANDO %s (%c) vs %s (%c) ---\n", nomecidade1, estado1, nomecidade2, estado2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nomecidade1, populacao1);
            printf("%s: %lu habitantes\n", nomecidade2, populacao2);
            if (populacao1 > populacao2)
                printf("🏆 %s Venceu!\n", nomecidade1);
            else if (populacao2 > populacao1)
                printf("🏆 %s Venceu!\n", nomecidade2);
            else
                printf("🤝 Empate!\n");
            break;

        case 2:
            printf("Atributo: Área (km²)\n");
            printf("%s: %.2f km²\n", nomecidade1, area1);
            printf("%s: %.2f km²\n", nomecidade2, area2);
            if (area1 > area2)
                printf("🏆 %s Venceu!\n", nomecidade1);
            else if (area2 > area1)
                printf("🏆 %s Venceu!\n", nomecidade2);
            else
                printf("🤝 Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB Total\n");
            printf("%s: R$ %.2f bilhões\n", nomecidade1, pib1);
            printf("%s: R$ %.2f bilhões\n", nomecidade2, pib2);
            if (pib1 > pib2)
                printf("🏆 %s Venceu!\n", nomecidade1);
            else if (pib2 > pib1)
                printf("🏆 %s Venceu!\n", nomecidade2);
            else
                printf("🤝 Empate!\n");
            break;

        case 4:
            printf("Atributo: PIB per capita\n");
            printf("%s: R$ %.2f por habitante\n", nomecidade1, pibpercapita1);
            printf("%s: R$ %.2f por habitante\n", nomecidade2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2)
                printf("🏆 %s Venceu!\n", nomecidade1);
            else if (pibpercapita2 > pibpercapita1)
                printf("🏆 %s Venceu!\n", nomecidade2);
            else
                printf("🤝 Empate!\n");
            break;

        case 5:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomecidade1, pontosturisticos1);
            printf("%s: %d pontos\n", nomecidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2)
                printf("🏆 %s Venceu!\n", nomecidade1);
            else if (pontosturisticos2 > pontosturisticos1)
                printf("🏆 %s Venceu!\n", nomecidade2);
            else
                printf("🤝 Empate!\n");
            break;

        case 6:
            printf("Atributo: Densidade Demográfica (hab/km²)\n");
            printf("%s: %.2f hab/km²\n", nomecidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomecidade2, densidade2);
            if (densidade1 < densidade2)
                printf("🏆 %s Venceu! (menor densidade vence)\n", nomecidade1);
            else if (densidade2 < densidade1)
                printf("🏆 %s Venceu! (menor densidade vence)\n", nomecidade2);
            else
                printf("🤝 Empate!\n");
            break;

        default:
            printf("🚨 Opção inválida! Tente de novo com um número de 1 a 6.\n");
            break;
    }

    printf("Novo commit2");
    
    return 0;
}

    
