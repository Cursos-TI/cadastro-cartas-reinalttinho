#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    char codigoCarta[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTur;

  // Área para entrada de dados
    printf("Seja bem-vindo(a) ao SuperTrunfo Países!\n Vamos cadastrar a primeira carta do jogo!\n");
    printf("Digite uma letra entre A e H para representar o Estado:\n");
    scanf("%c", &estado);

    printf("Digite um código para a sua Cidade! Ele deve conter a letra do Estado + um número de 0 a 4:\n");
    scanf(" %s", codigoCarta);

    printf("Digite o nome da Cidade:\n");
    scanf(" %s", cidade);

    printf("Informe a População da cidade:\n");
    scanf("%d", &populacao);

    printf("Informe a Area da cidade (em km²):\n");
    scanf("%f", &area);

    printf("Informe o PIB da cidade (em R$):\n");
    scanf("%f", &pib);

    printf("Informe o total de Pontos Turísticos da cidade:\n");
    scanf("%d", &pontosTur);
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