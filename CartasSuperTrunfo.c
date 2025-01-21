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
    
    char codigo[4] = "A01";
    char nome[50] = "Sao Paulo";
    char populacao[14] = "11.451.999MI";
    char area[11] = "1.521,20KM";
    char PIB[8] = "2,719BI"; 

   printf("codigo: %s\n", codigo);
   printf("nome: %s\n", nome);
   printf("populacao: %s\n", populacao);
   printf("area: %s\n", area);
   printf("PIB: %s\n", PIB);

   printf("Digite o codigo da cidade:\n");
   scanf("%s", &codigo);

   printf("Digite o nome da cidade:\n");
   scanf("%s", &nome); 

   printf("Digite a populacao:\n");
   scanf("%s", &populacao);

   printf("Digite a area da cidade:\n");
   scanf("%s", &area);

   printf("Digite o PIB da cidade:\n");
   scanf("%s", &PIB);
    return 0;
}   
