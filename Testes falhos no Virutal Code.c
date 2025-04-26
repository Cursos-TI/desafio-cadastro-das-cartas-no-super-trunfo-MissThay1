1º Teste: Tentando fazer sozinha:

#include <stdio.h>

int main() {
    printf("Olá, jogador(a), sejam bem-vindos(as) ao jogo Cartas Super Trunfo, registre aqui os dados da sua carta.\n"); 

  (queria fazer algo diferente na introdução, então eu coloquei em prática como no olamundo.. não sei se é permitido, espero
  que seja..).

    // Variáveis para o jogador 

 ( nesse topico eu fiquei confusa, eu pensei que era para so digitar o nome do jogador e que as cartas iam aparecer como mágica..)

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

    // Variáveis para a segunda carta
    char Estado2[40] = "PR";
    char CodigoDaCarta2[30] = "P01";
    char NomeDaCidade2[30] = "Curitiba";
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
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", PontosTuristicos2); 


    return 0;
}
(após eu concluir eu primeiro fui tirar dúvida em um dos grupo de Ads, e me falaram que eu fiz errado..o pessoal me auxiliou melhor
 e me explicou oque eu deveria fazer e apontou os meus erros, então um deles me mandou no privado o código dele para eu ter uma ideia, então eu criei outro arquivo
 e refiz me inspirando no dele).

2º Codigo ( Exemplo do colega):


#include <stdio.h>

int main() {
    int turismo1, turismo2;
    float area1, area2, pib1, pib2;
    int populacao1, populacao2;
    char cidade1[50], cidade2[50];
    char numerocarta1[50], numerocarta2[50];
    char estado1, estado2;
    
  //dados do cadastro da primeira carta
  
    printf("Digite uma letra entre 'A' e 'H' que representa o primeiro estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta sendo ele composto por: a letra do estado escolhido + um número de 01 à 04 :\n");
    scanf("%s", numerocarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a população da cidadade\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade\n");
    scanf("%f", &area1);

    printf("Digite a quantidade de pontos turísticos da cidade\n");
    scanf("%d", &turismo1);

    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib1);

    // A partir deste momento inicia o cadastro da segunda carta

    printf("Digite uma letra entre 'A' e 'H' que representa o segundo estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta sendo ele composto por: a letra do estado escolhido + um número de 01 à 04 :\n");
    scanf("%s", numerocarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a população da cidadade\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade\n");
    scanf("%f", &area2);

    printf("Digite a quantidade de pontos turísticos da cidade\n");
    scanf("%d", &turismo2);

    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib2);

    // Impressão das informações da primeira carta

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", numerocarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("A área da cidade é de: %.3f km² \n", area1);
    printf("A cidade possuí %d pontos túristicos\n",turismo1);
    printf("A cidade possuí um PIB de %.3f bilhões de reais\n", pib1);

     // Impressão das informações da segunda carta

     printf("Carta 2:\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", numerocarta2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %d\n", populacao2);
     printf("A área da cidade é de: %.3f km² \n", area2);
     printf("A cidade possuí %d pontos túristicos\n",turismo2);
     printf("A cidade possuí um PIB de %.3f bilhões de reais\n", pib2);

}

 (apos isso eu vi meus erros e então criei um do 0, e revendo no seu vídeo vi que foi por falta de atenção minha.. Ja que
 foi explicado claramente que tinha que cadastrar as cartas, não mostrando automáticamente, ao decorrer do meu código decidi enfeitar
 mais um pouco no terminal, então perguntei ao copilot se tinha opção de cor de texto, então usei verificando nas regras se podia
 e chegou no código acima)

 PS: tem dois arquivos iguais por que nao sabia como mudava para editar, então quando eu criei uma nova e descobrir depois.. 
Sinto muito pela confusão;;).
