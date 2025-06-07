#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

//Primeiro começo definindo as veriáveis do codigo para armazenar os dados das cartas.

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

// Depois uso as funções certas para a entrada de dados das cartas.

     // Pegando os ndados da carata 1
    printf("Cadastro da Carta 1\n");
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


     // Pegando os ndados da carata 2
    printf("\nCadastro da Carta 2\n");
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

    // Agora os cálculos
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;


    // Comparação por População
    printf("\n--- Comparação de cartas (Atributo: População) ---\n");
    printf("Carta 1 - %s (%c): %lu habitantes\n", nomecidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu habitantes\n", nomecidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("Novo commit1")
    return 0;
}

    
    
