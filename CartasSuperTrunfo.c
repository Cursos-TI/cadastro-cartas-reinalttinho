#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, estado2;
    char codigoCarta[4], codigoCarta2[4];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTur, pontosTur2;

  // ÁREA DE BOAS-VINDAS:

    printf("Seja bem-vindo(a) ao SuperTrunfo Cidades!\n");
    printf("-------------------------------------------\n");

    // --- Entrada de dados para a CARTA 1 ---
    printf("\nVamos cadastrar a PRIMEIRA carta do jogo!\n");
    scanf(" %c", &estado);

    printf("Digite um código para a sua Cidade! Ele deve conter a letra do Estado + um número de 0 a 4:\n");
    scanf("%s", codigoCarta);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", cidade);

    printf("Informe a População da cidade:\n");
    scanf("%d", &populacao);

    printf("Informe a Area da cidade (em km²):\n");
    scanf("%f", &area);

    printf("Informe o PIB da cidade (em R$):\n");
    scanf("%f", &pib);

    printf("Informe o total de Pontos Turísticos da cidade:\n");
    scanf("%d", &pontosTur);

    // --- Entrada de dados para a CARTA 2 ---
    printf("\nVamos cadastrar a SEGUNDA carta do jogo!\n");

    printf("Digite uma letra entre A e H para representar o Estado: ");
    scanf(" %c", &estado2); // O espaço antes de %c é crucial aqui

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Informe a População da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a Area da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade (em bilhões de R$): ");
    scanf("%f", &pib2);

    printf("Informe o total de Pontos Turísticos da cidade: ");
    scanf("%d", &pontosTur2);

    // --- Área para exibição dos dados das cidades ---
    printf("\n\n--- CARTAS CADASTRADAS COM SUCESSO! ---\n");
    

  // Área para exibição dos dados da cidade
    printf("Primeira Carta cadastrada com sucesso! Confira os dados:\n");
    printf("ESTADO: %c\n", estado);
    printf("CÓDIGO DA CARTA: %c\n", codigoCarta);
    printf("CIDADE: %s\n", cidade);
    printf("ESTADO: %d\n", populacao);
    printf("ESTADO: %f\n", area);
    printf("ESTADO: %f\n", pib);
    printf("ESTADO: %d\n", pontosTur);

return 0;

}