#include <stdio.h>

//AVENTUREIRO SUPER TRUNFO  

int main() {
    char nome1[50];//cria a variavel nome da cidade da carta 1
    char nome2[50];//cria a variavel nome da cidade da carta 2
    char cod_carta1[5];//cria a variável, codigo da carta 1
    char cod_carta2[5];//cria a variável, codigo da carta 2
    char estado1='A';//Declara e inicializa var. estado1
    char estado2='B';//Declara e inicializa var. estado1
    int populacao1, populacao2, area1, area2;//cria as var. população e área das cidades
    float pib1, pib2;// PIB das cidades
    int num_pts_tur1, num_pts_tur2;//número de pontos turísticos
    float densidade_pop;
    float pib_per;

    printf("Desafio SUPER TRUNFO:\n");
    
    printf("Digite uma letra de 'A' a 'H' para representar o Estado:\n");
    scanf(" %c", &estado1);//usuário entra com o estado da primeira carta
    
    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex: A01):\n");
    scanf(" %s", cod_carta1);//usuário entra com o codigo da carta

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome1); //Usuario entra com uma cidade, caso a mesma tenha nome composto o modificador de formato consegue ler 
   
    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %d", &populacao1); //usuário entra com o numero de habitantes da cidade

    printf("Digite a área cidade (km²):\n");
    scanf(" %d", &area1); //usuário entra com a área 

    printf("Digite o PIB em bilhões de reais:\n");
    scanf(" %f", &pib1); //usuário entra com o pib da cidade

    printf("Digite o numero de pontos turísticos da cidade:\n");
    scanf(" %d", &num_pts_tur1); //usuário entra com o numero de pontos turísticos

    densidade_pop = (float)populacao1/area1;// calcula a densidade para a primeira carta
    pib_per = (float)pib1/populacao1;// calcula o Pib per capita em bilhoes de reais para primeira carta
    pib_per *= 1000000;//define o valor do pib per capita em milhares de reais por habitantes

    /*os prints abaixo (as próximas 8 linhas) imprimem as informações da primeira carta cadastrada*/
    printf("\nCarta 1: \n\n");//pula uma linha antes e depois
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d Habitantes\n", populacao1);
    printf("Área: %d km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1); //imprime o pib em bilhões de reais com 2 casas decimais
    printf("Pontos Turíticos: %d\n", num_pts_tur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop);//imprime a densidade populacional
    printf("PIB per Capita: %.2f mil reais\n", pib_per);//imprime o pib per capita da cidade
    
    printf("\nCadastre uma nova carta:\n\n");//pula uma linha antes e depois e entra com os dados da segunda carta
    
    printf("Digite uma letra entre 'A' e 'H' que não tenha sido cadastrada na carta anterior para representar o Estado:\n");
    scanf(" %c", &estado2);//usuário entra com o estado da carta 2
    
    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex: A01):\n");
    scanf(" %s", cod_carta2);//usuário entra com o codigo da carta

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome2);
    
    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %d", &populacao2);//usuário entra com o numero de habitantes da cidade

    printf("Digite a área da cidade (km²):\n");
    scanf(" %d", &area2);//usuário entra área 

    printf("Digite o PIB em bilhões de reais:\n");
    scanf(" %f", &pib2);//usuário entra com o pib da cidade

    printf("Digite o numero de pontos turísticos da cidade:\n");
    scanf(" %d", &num_pts_tur2);//usuário entra com o numero de pontos turísticos

    densidade_pop = (float)populacao2/area2;// calcula a densidade para a segunda carta
    pib_per = (float)pib2/populacao2;// calcula o Pib per capita em bilhoes de reais para segunda carta
    pib_per *= 1000000;//define o valor do pib per capita em milhares de reais por habitantes

    //os printf's abaixo (as 8 linhas seguintes) imprimem as informações da segunda carta cadastrada
    printf("\nCarta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d Habitantes\n", populacao2);
    printf("Área: %d km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2); //imprime o pib em bilhões de reais com 2 casas decimais
    printf("Pontos Turíticos: %d\n", num_pts_tur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop);//imprime a densidade populacional
    printf("PIB Per Capita: %.2f mil reais\n", pib_per);//imprime o pib per capita da cidade

    printf("\nCartas cadastradas com sucesso!\n");
    return 0;
}