#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char Estado01, Estado02, Codigo01[10], Codigo02[10], Cidade01[50], Cidade02[50];
    int populacao01, populacao02, numtur01, numtur02;
    float area01, area02, pib01, pib02;
  // Área para entrada de dados
   printf("Ola usuario, vamos comecar com o Jogo: Super Trunfo de Paises\n");
   printf("Voce vai ter que colocar as informacoes das cartas abaixo, conforme instrucoes\n");
   printf("Vamos começar com a primeira carta, digite o estado(Uma letra de 'A' a 'H'): \n");
   scanf(" %c", &Estado01);
   printf("Codigo da Carta(A letra do estado seguida de um numero de 01 a 04): \n");
   scanf("%s", Codigo01);
   printf("Nome da Cidade: \n");
   scanf("%s", Cidade01);
   printf("Populacao: \n");
   scanf("%d", &populacao01);
   printf("Area (em km²): \n");
   scanf("%f", &area01);
   printf("PIB: \n");
   scanf("%f", &pib01);
   printf("Numero de Pontos Turisticos: \n");
   scanf("%i", &numtur01);

   printf("Agora vamos para a Carta 2: \n");

   printf("Estado Uma letra de 'A' a 'H': \n");
   scanf(" %c", &Estado02);
   printf("Codigo da Carta(A letra do estado seguida de um numero de 01 a 04): \n");
   scanf("%s", Codigo02);
   printf("Nome da Cidade: \n");
   scanf("%s", Cidade02);
   printf("Populacao: \n");
   scanf("%d", &populacao02);
   printf("Area (em km²): \n");
   scanf("%f", &area02);
   printf("PIB: \n");
   scanf("%f", &pib02);
   printf("NUmero de Pontos Turisticos: \n");
   scanf("%d", &numtur02);
  // Área para exibição dos dados da cidade
 printf("Carta 1: \n");
   printf("Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %d \n Area: %f km² \n PIB: %f bilhoes de reais\n Numero de Pontos Turisticos: %d \n", Estado01, Codigo01, Cidade01, populacao01, area01, pib01, numtur01);
   printf("Carta 2: \n");
   printf("Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %d \n Area: %f km²\n PIB: %f bilhoes de reais\n Numero de Pontos Turisticos: %d", Estado02, Codigo02, Cidade02, populacao02, area02, pib02, numtur02);
   
return 0;
} 

