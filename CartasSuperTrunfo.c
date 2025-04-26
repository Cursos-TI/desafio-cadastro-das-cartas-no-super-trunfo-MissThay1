#include <stdio.h>
int main() {
    char letradoestado, letradoestado2; 
    char numerocarta[50], numerocarta2[50] = "Codigo da carta";
    char nomedacidade[50], nomedacidade2[50] = "Nome da cidade";
    int habitantes, habitantes2;
    float Areadacidade, Areadacidade2;
    float Pib, Pib2;
    int Pontosturisticos, Pontosturisticos2;

    printf("Bem vindo(a) ao jogo de cartas super trunfo, insira os dados da sua carta para começar!\n");//DE UM ESPAÇO NO TERMINAL APOS ESSA MENSAGEM

    //PRIMEIRA CARTA
    printf("Digite uma letra de 'A' a 'H' no qual sua carta se identifica com um estado do Brasil:\n");
    scanf(" %c", &letradoestado);
  
    printf("Digite o codigo da sua carta, Ex: 'A01', 'B02', 'C03'...\n");
    scanf("%s", numerocarta);

    printf("Digite o nome da sua cidade de acordo com que esta na carta\n");
    scanf("%s", nomedacidade);
    

    printf("Digite a população da sua cidade:\n");
    scanf("%d", &habitantes);

    printf("Digite a área da sua cidade em km²:\n");
    scanf("%f", &Areadacidade);

    printf("Digite o PIB da sua cidade em bilhões de reais:\n");
    scanf("%f", &Pib);

    printf("Digite a quantidade de pontos turísticos da sua cidade:\n");
    scanf("%d", &Pontosturisticos);


     //EXIBIÇÃO DOS DADOS DA CARTA 1

    printf("--- Dados da Primeira Carta ---\n");
    printf("Estado: %c\n", letradoestado);
    printf("Código da Carta: %s\n", numerocarta);
    printf("Cidade: %s\n", nomedacidade);
    printf("População: %d habitantes\n", habitantes);
    printf("Área: %.3f km²\n", Areadacidade);
    printf("PIB: %.2f bilhões de reais\n", Pib);
    printf("Pontos turísticos: %d\n", Pontosturisticos);

    //MENSAGEM FINAL COM A COR VERDE
    printf("\033[0;32m"); //CÓDIGO ANSI PARA TEXTO VERDE
    printf("A sua primeira carta foi registrada com sucesso!\n");
    printf("\033[0m"); //RESETA A COR DO TEXTO PARA PADRÃO

    
    // CARTA 2
    printf("\nAgora vamos registrar a segunda carta!\n");

    printf("Digite uma letra de 'A' a 'H' no qual sua carta se identifica com um estado do Brasil:\n");
    scanf(" %c", &letradoestado2);

    printf("Digite o codigo da sua carta, Ex: 'A01', 'B02', 'C03'...\n");
    scanf("%s", numerocarta2);

    printf("Digite o nome da sua cidade de acordo com que esta na carta\n");
    scanf("%s", nomedacidade2);
   
    printf("Digite agora a população da sua cidade:\n");
    scanf("%d", &habitantes2);

    printf("Digite a área da sua cidade em km²:\n");
    scanf("%f", &Areadacidade2);

    printf("Digite o PIB da sua cidade em bilhões de reais:\n");
    scanf("%f", &Pib2);

    printf("Digite a quantidade de pontos turísticos da sua cidade:\n");
    scanf("%d", &Pontosturisticos2);


     //EXIBIÇÃO DOS DADOS DA CARTA 2

     printf("--- Dados da Segunda Carta ---\n");
     printf("Estado: %c\n", letradoestado2);
     printf("Código da Carta: %s\n", numerocarta2);
     printf("Cidade: %s\n", nomedacidade2);
     printf("População: %d habitantes\n", habitantes2);
     printf("Área: %.3f km²\n", Areadacidade2);
     printf("PIB: %.2f bilhões de reais\n", Pib2);
     printf("Pontos turísticos: %d\n", Pontosturisticos2);
     printf("A sua segunda carta foi registrada com sucesso!\n");

    //MENSAGEM FINAL COM A COR VERDE
    printf("\033[0;32m"); //TEXTO VERDE
    printf("Parabéns! Você cadastrou as suas cartas com sucesso!\n");
    printf("Agora você pode jogar com as cartas que você cadastrou.Boa sorte!\n");
    printf("\033[0m"); //RESETA A COR DO TEXTO PARA PADRÃO

    return 0;
}
