#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado[26];
    char codigo[8];
    char nome[26];
    int populacao;
    float area;
    float PIB;
    int turisticos;

    // Captura dos dados
    printf("Digite o estado:\n");
    scanf("%s", estado);

    printf("Digite o código:\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome);

    printf("Digite o número de habitantes:\n");
    scanf("%d", &populacao);

    printf("Digite a área em km²:\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &turisticos);

    // Exibição dos dados cadastrados
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turísticos: %d\n", turisticos);

    // Cálculo da densidade populacional
    float densidade = (float)populacao / area;
    printf("A densidade populacional é: %.2f habitantes por km²\n", densidade);

    return 0;
}