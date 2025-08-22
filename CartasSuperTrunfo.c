#include <stdio.h>

// Definindo a estrutura da carta
typedef struct {
    char estado[100];
    char codigo[90];
    char nome[100];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

int main() {
    // Carta 1 - Rio de Janeiro
    Cidade carta1 = {
        "Rio de Janeiro", "A01", "Rio de Janeiro",
        1200000, 1521.11, 829.90, 99
    };

    // Carta 2 - São Paulo
    Cidade carta2 = {
        "São Paulo", "B02", "São Paulo",
        6748000, 1200.24, 360.50, 100
    };

    // Mostrando a carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);

    // Espaço
    printf("\n");

    // Mostrando a carta 2
    printf("=== Carta 2 ===\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}