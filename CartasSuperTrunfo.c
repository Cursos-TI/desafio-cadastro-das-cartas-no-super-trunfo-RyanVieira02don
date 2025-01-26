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
    
// aqui sao os valores da cidade escohida
char estado[13] = "Sao Paulo";
char codigo[4] = "A01";
char nome[13] = "Sao Paulo";
int populacao =  11451999;
float area = 1.523;
float PIB = 828.980;
int turisticos = 36;

// usei a funcao "scanf" para e "printf" para o usuario poder cadastrar os dados 
  printf("digite o estado:\n");
  scanf("%s", &estado);

  printf("digite o codigo:\n");
  scanf("%s", &codigo);

  printf("digite o nome da cidade:\n");
  scanf("%s", &nome);

  printf("digite o numero de populantes:\n");
  scanf("%d", &populacao);

  printf("digite a area em km²:\n");
  scanf("%f", &area);

  printf("digite o PIB da cidade:\n");
  scanf("%f", &PIB);

  printf("quantidade de pontos turisticos da cidade:\n");
  scanf("%d", &turisticos);

//  aqui usei o "printf" para que o usuario vizualizasse os dados cadastrados
  printf("Estado:%s\n codigo:%s\n", estado, codigo); 

  printf("nome:%s\n populacao:%d\n area:%f\n", nome, populacao, area);

  printf("PIB:%f\n turistico: %d\n", PIB, turisticos);
    return 0;

  }



