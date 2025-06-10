#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

//Para esse nível já deixei as variáveis definidas, como diziam as instruções no nível mestre 

    // Variáveis da carta 1
    char estado1 = 'A';
    char codigo1[5] = "A01";
    char nomecidade1[50] = "Cidade Sol";
    unsigned long int populacao1 = 500000;
    float area1 = 1200.5;
    float pib1 = 50.3;
    int pontosturisticos1 = 12;
    float densidade1 = populacao1 / area1;

    //  Variáveis da carta 2
    char estado2 = 'B';
    char codigo2[5] = "B02";
    char nomecidade2[50] = "Cidade Lua";
    unsigned long int populacao2 = 800000;
    float area2 = 1600.8;
    float pib2 = 60.7;
    int pontosturisticos2 = 18;
    float densidade2 = populacao2 / area2;

    //Agora as váriaveis para armazenar os atributos para a comparação, os valores e as somas
    int escolha1, escolha2;
    float valor1_c1, valor2_c1, valor1_c2, valor2_c2;
    float soma1, soma2;

    //Como neste código já definimos as variáveis, é preciso apenas escolher quais atributos o usuário deseja comparar entre as duas cartas

    // Menu para escolher o primeiro atributo
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &escolha1);

    //Menu para escolher o segundo atributo
    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &escolha2);

    // Aqui verifica se o usuário não repetiu os atributos (escolha dois atributos diferentes, viu?)
    if (escolha1 == escolha2) {
        printf("\nVocê não pode escolher o mesmo atributo duas vezes. Tente novamente.\n");
        return 1;
    }

    // Aqui atribuhimos os valores dos atributos selecionados para cada carta
    switch (escolha1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosturisticos1; valor1_c2 = pontosturisticos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    switch (escolha2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosturisticos1; valor2_c2 = pontosturisticos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // Aqui invertemos o valor da densidade demográfica (a regra é: o menor vence)
    valor1_c1 = (escolha1 == 5) ? -valor1_c1 : valor1_c1;
    valor1_c2 = (escolha1 == 5) ? -valor1_c2 : valor1_c2;
    valor2_c1 = (escolha2 == 5) ? -valor2_c1 : valor2_c1;
    valor2_c2 = (escolha2 == 5) ? -valor2_c2 : valor2_c2;

    // Aqui fazemos a soma dos valores
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // Por fim mostramos o resultado para o usuário
    printf("\n--- Resultado da Comparação ---\n");
    printf("Carta 1 - %s (%c)\n", nomecidade1, estado1);
    printf("Carta 2 - %s (%c)\n", nomecidade2, estado2);
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nomecidade1, soma1);
    printf("%s: %.2f\n", nomecidade2, soma2);

    if (soma1 > soma2) {
        printf("\nE o vencedor é...: A carta 1! Parabens! 🏆 (%s)\n", nomecidade1);
    } else if (soma2 > soma1) {
        printf("\nE o vencedor é...: A carta 2! Parabens! 🏆 (%s)\n", nomecidade2);
    } else {
        printf("\nTivemos um empate! 🤝\n");
    }

    return 0;
}


    
