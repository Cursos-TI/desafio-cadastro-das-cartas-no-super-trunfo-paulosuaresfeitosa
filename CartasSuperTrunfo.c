#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int populacao;           
    float area;              
    float pib;               
    int pontos_turisticos;
    char pais[100];          // Para armazenar o nome do país
    char codigo_carta[4];    // Para armazenar o código da carta (1 letra + 2 números + '\0')

    printf("Bem vindo ao jogo Cartas Super Trunfo Versão Países!\n");

    // Coleta das informações
    printf("Entre com o nome do país:\n");
    scanf(" %[^\n]%*c", pais);  // Leitura de string com espaços
    printf("Entre com o código da carta (exemplo: B02):\n");
    scanf("%s", codigo_carta);  // Leitura do código da carta (1 letra + 2 números)
    printf("Entre com a populacao:\n");
    scanf("%d", &populacao);
    printf("Entre com a área:\n");
    scanf("%f", &area);
    printf("Entre com o PIB:\n");
    scanf("%f", &pib);
    printf("Entre com os pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);

    printf("\nObrigado por cadastrar sua carta!\n");

    // Exibição dos dados cadastrados
    printf("\nInformações da Carta Cadastrada\n");
    printf("País: %s\n", pais);
    printf("Código da Carta: %s\n", codigo_carta);  // Exibindo o código da carta
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);  // Formatação com 2 casas decimais
    printf("PIB: %.2f milhões\n", pib); // Formatação com 2 casas decimais
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    printf("\nFim do programa.\n");
    
    return 0;
}
