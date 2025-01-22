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
    int populacao = "11451999";
    float area = '1.523km';
    char PIB[23] = "2,719 Bilhoes de reais"; 
    int turistico = "36";

  printf("estado: %s \n", estado);
  printf("codigo: %s \n", codigo);
  printf("nome: %s \n", nome);
  printf("populacao: %d \n", populacao);
  printf("area: %f \n, area");
  printf("PIB: %s \n", PIB);
  printf("ponto turistico: %d \n",turistico);

  
    return 0;
}   
