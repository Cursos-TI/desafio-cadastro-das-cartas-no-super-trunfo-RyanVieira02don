#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
struct Carta {
    char codigo[4]; // Código da carta (ex: A01, B02, etc.)
    char nome[50]; // Nome da cidade
    long long populacao;
    long long area;
    long long pib;
    int pontos_turisticos;
    long long super_poder;
};

// Função para calcular a densidade populacional
float calcular_densidade_populacional(long long populacao, long long area) {
    return (float)populacao / area;
}

// Função para calcular o PIB per capita
float calcular_pib_per_capita(long long pib_total, long long populacao) {
    return (float)pib_total / populacao;
}

// Função para calcular o Super Poder
long long calcular_super_poder(struct Carta carta) {
    return carta.populacao + carta.area + carta.pib;
}

// Função para cadastrar uma carta
void cadastrarCarta(struct Carta *carta) {
    printf("Digite o código da carta: ");
    scanf("%s", carta->codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", carta->nome);
    
    printf("Digite a população: ");
    scanf("%lld", &carta->populacao);
    
    printf("Digite a área (em km²): ");
    scanf("%lld", &carta->area);
    
    printf("Digite o PIB: ");
    scanf("%lld", &carta->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
    
    // Calcular o super poder
    carta->super_poder = calcular_super_poder(*carta);
}

// Função para exibir os dados da carta, incluindo propriedades calculadas
void exibirCarta(struct Carta carta) {
    float densidade = calcular_densidade_populacional(carta.populacao, carta.area);
    float pib_per_capita = calcular_pib_per_capita(carta.pib, carta.populacao);

    printf("\n--- Dados da Carta ---\n");
    printf("Código: %s\n", carta.codigo);
    printf("Nome: %s\n", carta.nome);
    printf("População: %lld hab\n", carta.populacao);
    printf("Área: %lld km²\n", carta.area);
    printf("PIB: %lld\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
    printf("Super Poder: %lld\n", carta.super_poder);
}

// Função para comparar duas cartas
void comparar_cartas(struct Carta carta1, struct Carta carta2) {
    printf("\n--- Resultados da Comparação ---\n");

    // Comparação de População (menor valor vence)
    if (carta1.populacao < carta2.populacao) {
        printf("População: %s vence com %lld habitantes\n", carta1.nome, carta1.populacao);
    } else if (carta1.populacao > carta2.populacao) {
        printf("População: %s vence com %lld habitantes\n", carta2.nome, carta2.populacao);
    } else {
        printf("População: Empate com %lld habitantes\n", carta1.populacao);
    }

    // Comparação de Área (maior valor vence)
    if (carta1.area > carta2.area) {
        printf("Área: %s vence com %lld km²\n", carta1.nome, carta1.area);
    } else if (carta1.area < carta2.area) {
        printf("Área: %s vence com %lld km²\n", carta2.nome, carta2.area);
    } else {
        printf("Área: Empate com %lld km²\n", carta1.area);
    }

    // Comparação de PIB (maior valor vence)
    if (carta1.pib > carta2.pib) {
        printf("PIB: %s vence com %lld unidades\n", carta1.nome, carta1.pib);
    } else if (carta1.pib < carta2.pib) {
        printf("PIB: %s vence com %lld unidades\n", carta2.nome, carta2.pib);
    } else {
        printf("PIB: Empate com %lld unidades\n", carta1.pib);
    }

    // Comparação de Super Poder (maior valor vence)
    if (carta1.super_poder > carta2.super_poder) {
        printf("Super Poder: %s vence com %lld pontos\n", carta1.nome, carta1.super_poder);
    } else if (carta1.super_poder < carta2.super_poder) {
        printf("Super Poder: %s vence com %lld pontos\n", carta2.nome, carta2.super_poder);
    } else {
        printf("Super Poder: Empate com %lld pontos\n", carta1.super_poder);
    }
}

int main() {
    struct Carta carta1, carta2;
    
    printf("Digite os dados da primeira carta:\n");
    cadastrarCarta(&carta1);
    
    printf("\nDigite os dados da segunda carta:\n");
    cadastrarCarta(&carta2);

    // Exibir os dados das cartas
    exibirCarta(carta1);
    exibirCarta(carta2);
    
    // Comparar as duas cartas
    comparar_cartas(carta1, carta2);

    return 0;
}