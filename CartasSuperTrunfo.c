#include <stdio.h>

int main()
{
    // Informação da primeira carta
    char carta_1_estado;
    char carta_1_codigo_da_carta[20];
    int carta_1_populacao;
    float carta_1_area;
    float carta_1_pib;
    int carta_1_numero_pontos_turisticos;

    printf("--- Cadastrando a primeira carta ---\n\n");

    printf("Digite o estado (uma letra): ");
    scanf(" %c", &carta_1_estado);

    printf("\nDigite o código da carta (até 20 caracteres): ");
    scanf("%s", carta_1_codigo_da_carta);

    printf("\nDigite a população: ");
    scanf("%d", &carta_1_populacao);

    printf("\nDigite a área (em km²): ");
    scanf(" %f", &carta_1_area);

    printf("\nDigite o PIB (em bilhões de reais): ");
    scanf("%f", &carta_1_pib);

    printf("\nDigite o número de pontos turísticos: ");
    scanf("%d", &carta_1_numero_pontos_turisticos);

    // Exibir informações da primeira carta cadastrada
    printf("\nCarta 1 cadastrada:\n");

    printf("Estado: %c\n", carta_1_estado);
    printf("Código da Carta: %s\n", carta_1_codigo_da_carta);
    printf("População: %d\n", carta_1_populacao);
    printf("Área: %.2f km²\n", carta_1_area);
    printf("PIB: R$ %.2f bilhões\n", carta_1_pib);
    printf("Número de Pontos Turísticos: %d\n", carta_1_numero_pontos_turisticos);

    // Informações da segunda carta
    char carta_2_estado;
    char carta_2_codigo_da_carta[20];
    int carta_2_populacao;
    float carta_2_area;
    float carta_2_pib;
    int carta_2_numero_pontos_turisticos;

    printf("\n\n--- Cadastrando a segunda carta ---\n\n");

    printf("Digite o estado (uma letra): ");
    scanf(" %c", &carta_2_estado);

    printf("\nDigite o código da carta (até 20 caracteres): ");
    scanf("%s", carta_2_codigo_da_carta);

    printf("\nDigite a população: ");
    scanf("%d", &carta_2_populacao);

    printf("\nDigite a área (em km²): ");
    scanf(" %f", &carta_2_area);

    printf("\nDigite o PIB (em bilhões de reais): ");
    scanf(" %f", &carta_2_pib);

    printf("\nDigite o número de pontos turísticos: ");
    scanf("%d", &carta_2_numero_pontos_turisticos);

    // Exibir informações da segunda carta cadastrada
    printf("\n\nCarta 2 cadastrada:\n\n");

    printf("Estado: %c\n", carta_2_estado);
    printf("Código da Carta: %s\n", carta_2_codigo_da_carta);
    printf("População: %d\n", carta_2_populacao);
    printf("Área: %.2f km²\n", carta_2_area);
    printf("PIB: R$ %.2f bilhões\n", carta_2_pib);
    printf("Número de Pontos Turísticos: %d\n", carta_2_numero_pontos_turisticos);

    return 0;
}