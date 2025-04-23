#include <stdio.h>

int main() {
    printf("Olá, jogador(a), sejam bem-vindos(as) ao jogo Cartas Super Trunfo, registre aqui os dados da sua carta.\n");

    // Variáveis para o jogador
    char Nome[50]; 
    int Idade; 
    float Altura; 

    // Variáveis para a primeira carta
    char Estado[40] = "RJ";
    char CodigoDaCarta[30] = "R02";
    char NomeDaCidade[30] = "Rio de Janeiro";
    int Populacao = 211223;
    float Area = 43750.425;
    float Pib = 300.50; // em bilhões de reais
    int PontosTuristicos = 58;

    //Variáveis para a segunda carta
    char Estado2[40]= "PR";
    char CodigoDaCarta2[30]= "P01";
    char NomeDaCidade2[30]= "Curitiba";
    int Populacao2 = 196372;
    float area = 430.9;
    float pib = 50.5; // em bilhões de reais
    int PontosTuristicos2 = 20;

    // Coleta de dados do jogador
    printf("\nDigite seu nome:\n");
    scanf("%49s", Nome);
    printf("Seu nome é: %s\n", Nome);

    printf("Digite sua idade:\n");
    scanf("%d", &Idade);
    printf("Sua idade é: %d\n", Idade);

    printf("Digite sua altura:\n");
    scanf("%f", &Altura);
    printf("Sua altura é: %.2f\n", Altura);

    // Exibição dos dados da primeira carta
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %s\n", Estado);
    printf("Código da Carta: %s\n", CodigoDaCarta);
    printf("Cidade: %s\n", NomeDaCidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.3f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", Pib);
    printf("Pontos turísticos: %d\n", PontosTuristicos);

   // Exibição dos dados da segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", CodigoDaCarta2);
    printf("Cidade: %s\n", NomeDaCidade2);
    printf("População: %d habitantes\n", Populacao2);
    printf("Área: %.3f km²\n", area);
    printf("pib: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", PontosTuristicos2);

    return 0;
}
