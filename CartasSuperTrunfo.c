#include <stdio.h>
#include <string.h>
//NOVATO
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

    printf("Desafio SUPER TRUNFO:\n");
    
    printf("Digite uma letra de 'A' a 'H' para representar o Estado:\n");
    scanf(" %c", &estado1);//usuário entra com o estado da primeira carta
    
    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex: A01):\n");
    scanf(" %s", cod_carta1);//usuário entra com o codigo da carta

    getchar();//esvazia o buffer de entrada para chamar a função fgets sem erro!(deu trabalho para descobrir)
    printf("Digite o nome da cidade:\n");
    fgets(nome1, 50, stdin); //usuário entra com o nomme da cidade
    nome1[strcspn(nome1, "\n")] = 0;//Remove o \n incluido na string pela função fgets

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %d", &populacao1); //usuário entra com o numero de habitantes da cidade

    printf("Digite a área cidade (km²):\n");
    scanf(" %d", &area1); //usuário entra com a área 

    printf("Digite o PIB em bilhões de reais:\n");
    scanf(" %f", &pib1); //usuário entra com o pib da cidade

    printf("Digite o numero de pontos turísticos da cidade:\n");
    scanf(" %d", &num_pts_tur1); //usuário entra com o numero de pontos turísticos

    /*os prints abaixo (as próximas 8 linhas) imprimem as informações da primeira carta cadastrada*/
    printf("\nCarta 1: \n\n");//pula uma linha antes e depois
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d Habitantes\n", populacao1);
    printf("Área: %d km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1); //imprime o pib em bilhões de reais com 2 casas decimais
    printf("Pontos Turíticos: %d\n", num_pts_tur1);
    
    printf("\nCadastre uma nova carta:\n\n");//pula uma linha antes e depois e entra com os dados da segunda carta
    
    printf("Digite uma letra entre 'A' e 'H' que não tenha sido cadastrada na carta anterior para representar o Estado:\n");
    scanf(" %c", &estado2);//usuário entra com o estado da carta 2
    
    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex: A01):\n");
    scanf(" %s", cod_carta2);//usuário entra com o codigo da carta

    getchar();
    printf("Digite o nome da cidade:\n");
    fgets(nome2,50,stdin);//usuário entra com o nomme da cidade
    nome2[strcspn(nome2, "\n")] = 0;//Remove o \n incluido na string pela função fgets
    
    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %d", &populacao2);//usuário entra com o numero de habitantes da cidade

    printf("Digite a área da cidade (km²):\n");
    scanf(" %d", &area2);//usuário entra área 

    printf("Digite o PIB em bilhões de reais:\n");
    scanf(" %f", &pib2);//usuário entra com o pib da cidade

    printf("Digite o numero de pontos turísticos da cidade:\n");
    scanf(" %d", &num_pts_tur2);//usuário entra com o numero de pontos turísticos

    /*os printf's abaixo (as 8 linhas seguintes) imprimem as informações da segunda carta cadastrada*/
    printf("\nCarta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d Habitantes\n", populacao2);
    printf("Área: %d km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2); //imprime o pib em bilhões de reais com 2 casas decimais
    printf("Pontos Turíticos: %d\n", num_pts_tur2);

    printf("\nCartas cadastradas com sucesso!\n");
    return 0;
}