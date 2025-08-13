#include <stdio.h>
int main (){
  
  //Variaveis que dritribuirao os dados.
  int populacao ,pontoTuristico ;
  int populacao2 ,pontoTuristico2 ;

  char estado, codigoCarta [4] ,nomeCidade[50];
  char estado2, codigoCarta2 [4] ,nomeCidade2[50];

  float pib,area;
  float pib2,area2;

  // Atribuição dos dados da  carta 1
    printf("Cadastro da Carta 1 \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigoCarta);

    printf("Nome da Cidade: ");
    scanf("%s[^\n]", nomeCidade); 

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area: ");
    scanf("%f", &area);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontoTuristico);

    // Atribuição do dados da carta 2
    printf("\nCadastro da Carta 2 \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %s[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontoTuristico2);

    // Exibição dos dados
    printf("\n Carta 1 \n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    //Formatei para Diminuir as casas Decimais!
    printf("Area: %.2f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontoTuristico);
    // Exibição dos dados
    printf("\n Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    //Formatei para Diminuir as casas Decimais!
    printf("Area: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontoTuristico2);
  


}




