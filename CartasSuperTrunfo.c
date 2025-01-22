#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    char estado = 'A';
    char codigo[4] = "A01";
    char nome[10] = "Sao Paulo";
    char populacao[11] = "11.45.1999";
    char area[9] = "1.521,20";
    char PIB[23] = "2,719 Bilhoes de reais"; 
    int turistico = 36;

  printf("estado: %c\n", estado);
  printf("codigo: %s\n", codigo);
  printf("nome: %s\n", nome);
  printf("populacao: %s\n", populacao);
  printf("area: %s\n", area);
  printf("PIB: %s\n", PIB);
  printf("pontos turistico: %d \n",turistico);

  printf("digite o estado:\n");
  scanf("%c", &estado);

  printf("digite o codigo:\n");
  scanf("%s", &codigo);

  printf("digite o nome da cidade:\n");
  scanf("%s", &nome);

  printf("digite o numero de populantes:\n");
  scanf("%s", &populacao);

  printf("digite a area em km²:\n");
  scanf("%s", &area);

  printf("digite o PIB da cidade:\n");
  scanf("%s", &PIB);

  printf("quantidade de pontos turisticos da cidade:\n");
  scanf("%d", &turistico); 
  
  printf("Estado:%c - codigo:%s", estado, codigo); 
    return 0;
}   
