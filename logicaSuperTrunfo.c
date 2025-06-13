#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

       // Declaração das variáveis da carta 01
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração das variáveis da carta 02
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): \n");
    scanf(" %3s", codigo1);
    getchar(); // consome o '\n' deixado pelo scanf
    printf("Digite o nome da cidade: ");
    getchar(); // consome o próximo '\n' se houver
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a populacao: ");
    scanf(" %lu", &populacao1);
    printf("Digite a area em km²: ");
    scanf(" %f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Calculando densidade e PIB per capita da carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;

    // Calculando Super Poder da carta 1
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf(" %3s", codigo2);
    getchar();
    printf("Digite o nome da cidade: ");
    getchar();
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a populacao: ");
    scanf(" %lu", &populacao2);
    printf("Digite a area em km²: ");
    scanf(" %f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Calculando densidade e PIB per capita da carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    // Calculando Super Poder da carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibição dos dados das cartas cadastradas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos atributos
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    // --- COMPARAÇÃO DE CARTAS POR UM ÚNICO ATRIBUTO ---
    // Escolha do atributo para comparação: POPULAÇÃO
    // Para trocar o atributo, altere as variáveis e mensagens abaixo conforme desejado.

    printf("\n==============================\n");
    printf("Comparacao de cartas (Atributo: Populacao):\n\n");
    printf("Carta 1 - %s (%c): %lu habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu habitantes\n", nomeCidade2, estado2, populacao2);

    // Estrutura de decisão para determinar a carta vencedora
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! Ambas as cartas possuem a mesma populacao.\n");
    }
    printf("==============================\n");

    // --- FIM DA COMPARAÇÃO POR ATRIBUTO ---

    return 0;
}
