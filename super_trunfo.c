#include <stdio.h>
int main(){
    char cod_carta [3], nome[15]; // cria a var codigo da carta, e nome da cidade
    char estado; //cria a var estado
    int populacao, area; // cria as var. população e área em km quadrados
    float pib; // PIB da cidade
    int num_pts_tur; // número de pontos turísticos

    printf("Desafio SUPER TRUNFO:\n");
    
    printf("Digite a inicial do seu Estado:\n");
    scanf(" %c", &estado); //usuário entra com o estado
    
    printf("Digite o código da carta:\n");
    scanf(" %s", &cod_carta); //usuário entra com o codigo da carta

    printf("Digite o nome da cidade:\n"); 
    scanf(" %s", &nome); //usuário entra com o nomme da cidade

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %d", &populacao); //usuário entra com o numero de habitantes da cidade

    printf("Digite a área em km²:\n");
    scanf(" %d", &area); //usuário entra área 

    printf("Digite o PIB em bilhões de reais:\n");
    scanf(" %f", &pib); //usuário entra com o pib da cidade

    printf("Digite o numero de pontos turísticos da cidade:\n");
    scanf(" %d", &num_pts_tur); //usuário entra com o numero de pontos turísticos

    /*os prints abaixo imprimem as informações da carta cadastrada*/
    printf("\nCarta 1: \n\n");//pula uma linha antes e depois
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", cod_carta);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %d km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib); //imprime o pib em bilhões de reais com 2 casas decimais
    printf("Pontos Turíticos: %d\n", num_pts_tur);
    
    printf("\nCadastre uma nova carta:\n\n");//pula uma linha antes e depois e entra com os dados da segunda carta
    
    printf("Digite a inicial do seu Estado:\n");
    scanf(" %c", &estado); //usuário entra com o estado
    
    printf("Digite o código da carta:\n");
    scanf(" %s", &cod_carta); //usuário entra com o codigo da carta

    printf("Digite o nome da cidade:\n"); 
    scanf(" %s", &nome); //usuário entra com o nomme da cidade

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %d", &populacao); //usuário entra com o numero de habitantes da cidade

    printf("Digite a área em km²:\n");
    scanf(" %d", &area); //usuário entra área 

    printf("Digite o PIB em bilhões de reais:\n");
    scanf(" %f", &pib); //usuário entra com o pib da cidade

    printf("Digite o numero de pontos turísticos da cidade:\n");
    scanf(" %d", &num_pts_tur); //usuário entra com o numero de pontos turísticos

    /*os prints abaixo imprimem as informações da carta cadastrada*/
    printf("\nCarta 2:\n\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", cod_carta);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %d km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib); //imprime o pib em bilhões de reais com 2 casas decimais
    printf("Pontos Turíticos: %d\n", num_pts_tur);

    printf("\nCartas cadastradas com sucesso!");
    return 0;
}