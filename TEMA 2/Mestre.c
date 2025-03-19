#include <stdio.h>

int main(){
    int escolha, escolha2, resultado1=0, resultado2=0;
    float soma1, soma2;
    char nome1[50];//cria a variavel nome da cidade da carta 1
    char nome2[50];//cria a variavel nome da cidade da carta 2
    char cod_carta1[5];//cria a variável, codigo da carta 1
    char cod_carta2[5];//cria a variável, codigo da carta 2
    char estado1='A';//Declara e inicializa var. estado1
    char estado2='B';//Declara e inicializa var. estado1
    unsigned long int populacao1, populacao2;//cria as var. população
    int area1, area2;//cria as var. área das cidades
    float pib1, pib2;// PIB das cidades
    int num_pts_tur1, num_pts_tur2;//número de pontos turísticos
    float densidade_pop;
    float pib_per;
    float densidade_pop2;
    float pib_per2;
    float superpoder1;
    float superpoder2;

    printf("Desafio SUPER TRUNFO:\n");
    
    printf("Digite uma letra de 'A' a 'H' para representar o Estado:\n");
    scanf(" %c", &estado1);//usuário entra com o estado da primeira carta
    
    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex: A01):\n");
    scanf(" %s", cod_carta1);//usuário entra com o codigo da carta

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome1); //Usuario entra com uma cidade, caso a mesma tenha nome composto o modificador de formato consegue ler 
   
    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %lu", &populacao1); //usuário entra com o numero de habitantes da cidade

    printf("Digite a área cidade (km²):\n");
    scanf(" %d", &area1); //usuário entra com a área 

    printf("Digite o PIB em bilhões de reais:\n");
    scanf(" %f", &pib1); //usuário entra com o pib da cidade

    printf("Digite o numero de pontos turísticos da cidade:\n");
    scanf(" %d", &num_pts_tur1); //usuário entra com o numero de pontos turísticos

    densidade_pop = (float)populacao1/(float)area1;// calcula a densidade para a primeira carta
    pib_per = (float)pib1/populacao1;// calcula o Pib per capita em bilhoes de reais para primeira carta
    pib_per *= 1000000000;//define o valor do pib per capita em reais por habitante

    

    /*os prints abaixo (as próximas 8 linhas) imprimem as informações da primeira carta cadastrada*/
    printf("\nCarta 1: \n\n");//pula uma linha antes e depois
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %lu Habitantes\n", populacao1);
    printf("Área: %d km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1); //imprime o pib em bilhões de reais com 2 casas decimais
    printf("Pontos Turíticos: %d\n", num_pts_tur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop);//imprime a densidade populacional
    printf("PIB per Capita: %.2f reais\n", pib_per);//imprime o pib per capita da cidade
    
    //Calculando super poder
    superpoder1 = (float)populacao1 + (float)area1 + pib1 + (float)num_pts_tur1 + pib_per + (float)1/densidade_pop;
    printf("super poder: %.2f\n", superpoder1);
    
    printf("\nCadastre uma nova carta:\n\n");//pula uma linha antes e depois e entra com os dados da segunda carta
    
    printf("Digite uma letra entre 'A' e 'H' que não tenha sido cadastrada na carta anterior para representar o Estado:\n");
    scanf(" %c", &estado2);//usuário entra com o estado da carta 2
    
    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex: A01):\n");
    scanf(" %s", cod_carta2);//usuário entra com o codigo da carta

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome2);
    
    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %lu", &populacao2);//usuário entra com o numero de habitantes da cidade

    printf("Digite a área da cidade (km²):\n");
    scanf(" %d", &area2);//usuário entra área 

    printf("Digite o PIB em bilhões de reais:\n");
    scanf(" %f", &pib2);//usuário entra com o pib da cidade

    printf("Digite o numero de pontos turísticos da cidade:\n");
    scanf(" %d", &num_pts_tur2);//usuário entra com o numero de pontos turísticos

    densidade_pop2 = (float)populacao2/area2;// calcula a densidade para a segunda carta
    pib_per2 = (float)pib2/populacao2;// calcula o Pib per capita em bilhoes de reais para segunda carta
    pib_per2 *= 1000000000;//define o valor do pib per capita  reais por habitantes

   
    //os printf's abaixo (as 8 linhas seguintes) imprimem as informações da segunda carta cadastrada
    printf("\nCarta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu Habitantes\n", populacao2);
    printf("Área: %d km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2); //imprime o pib em bilhões de reais com 2 casas decimais
    printf("Pontos Turíticos: %d\n", num_pts_tur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);//imprime a densidade populacional
    printf("PIB Per Capita: %.2f reais\n", pib_per2);//imprime o pib per capita da cidade

     //Calculando super poder
     superpoder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)num_pts_tur2 + pib_per2 + (1/densidade_pop2);
     printf("Super poder: %.2f", superpoder2);

    printf("\nCartas cadastradas com sucesso!\n\n");

    printf("Ecolha um dos atributos para comparar:\n");
    printf("1 - População;\n2 - Área;\n3 - PIB;\n4 - PIB Per capita;\n5 - Densidade Populacional (vence a menor densidade);\n6 - Número de pontos turísticos.\n");
    printf("\nDigite a opção desejada: ");
    scanf("  %d", &escolha);

    printf("\n\n\n\n\n\n\nEscolha novamente um atributo para comparação\n");
    //IMPRIME AS OPÇÕES QUE NÃO FORAM SELECIONADAS

    if (escolha != 1)
    {printf("1 - População;\n");}

    if (escolha != 2)
    {printf("2 - Área;\n");}

    if (escolha != 3)
    {printf("3 - PIB;\n");}

    if (escolha != 4)
    {printf("4 - PIB Per capita;\n");}

    if (escolha != 5)
    {printf("5 - Densida Populacional;\n");}

    if (escolha != 6)
    {printf("6 - Pontos Turístico.\n");}

    printf("\nDigite a opção desejada: ");
    scanf(" %d", &escolha2);//ENTRA COM A ESCOLHA DO SEGUNDO ATRIBUTO

    if (escolha != escolha2)//EVITA DE CONTINUAR SE O USUÁRIO DIGITAR UM VALOR IGUAL NAS DUAS OPÇÕES 
    {switch (escolha) //ESSE SWITCH VERIFICA QUEM VENCEU OU SE HOUVE EMPATE NA COMPARAÇÃO DO PRIMEIRO ATRIBUTO ESCOLHIDO
    {case 1:
        printf("\n\nO primeiro atributo escolhido foi População;\n");
        if (populacao1 != populacao2)
        {resultado1 = (populacao1 > populacao2) ? 1 : 0;//SE CARTA 1 > CARTA 2 RESULTADO 2 RECEBE 1
        resultado2 = (populacao1 > populacao2) ? 0 : 1;//SE CARTA 1 < CARTA 2 RESULTADO 2 RECEBE 1
       } else {resultado1 = 1; resultado2 =1;}//CASO DE EMPATE CADA CARTA RECEBE 1
        soma1 = populacao1; soma2 = populacao2;//SOMA PARA COMPARAÇÃO FINAL
        printf("%s tem %lu habitantes.\n", nome1, populacao1);
        printf("%s tem %lu habitantes.\n", nome2, populacao2);
        printf("pontuação resultado %d e r2 %d\n", resultado1, resultado2);
        break;

    case 2:
        printf("O primeiro atributo escolhido foi Área;\n");
        if (area1 != area2)
         {resultado1 = (area1 > area2) ? 1 : 0;
            resultado2 = (area1 > area2) ? 0 : 1;
        } else {resultado1 = 1; resultado2 =1;}
        soma1 = area1; soma2 = area2;
        printf("%s tem %d km²\n", nome1, area1);
        printf("%s tem %d km²\n", nome2, area2);
        break;
    case 3:
        printf("O primeiro atributo escolhido foi PIB;\n");
        if (pib1 != pib2)
         {resultado1 = (pib1 > pib2) ? 1 : 0;
            resultado2 = (pib1 > pib2) ? 0 : 1;            
         } else {resultado1 = 1; resultado2 =1;}
         soma1 = pib1; soma2 = pib2;
        printf("%s tem um PIB de R$ %.2f\n", nome1, pib1);
        printf("%s tem um PIB de R$ %.2f\n", nome2, pib2);
        break;
    case 4:
        printf("O primeiro atributo escolhido foi PIB Per Capita;\n");
        if (pib_per != pib_per2)
         { resultado1 = (pib_per > pib_per2) ? 1 : 0;
            resultado2 = (pib_per > pib_per2) ? 0 : 1;            
         } else {resultado1 = 1; resultado2 =1;}
         soma1 = pib_per; soma2 = pib_per2;
         printf("%s tem um PIB Per Capita de R$ %.2f\n", nome1, pib_per);
         printf("%s tem um PIB Per capta de R$ %.2f\n", nome2, pib_per2);
        break;
    case 5:
        printf("O primeiro atributo escolhido foi Densidade Populacional;\n");
        if (densidade_pop != densidade_pop2)
        {resultado1 = (densidade_pop < densidade_pop2) ? 1 : 0;
            resultado2 = (densidade_pop < densidade_pop2) ? 0 : 1;            
        } else {resultado1 = 1; resultado2 = 1;}
        soma1 = (float)1/densidade_pop; soma2 = (float)1/densidade_pop2;
        printf("%s tem um Densidade de %.2f km²/hab\n", nome1, densidade_pop);
        printf("%s tem um Densidade de %.2f km²/hab\n", nome2, densidade_pop2);
        break; 
    case 6:
        printf("O primeiro atributo escolhido foi Numero de Pontos Turisticos;\n");
        if (num_pts_tur1 != num_pts_tur2)
        {resultado1 = (num_pts_tur1 > num_pts_tur2) ? 1 : 0;
            resultado2 = (num_pts_tur1 > num_pts_tur2) ? 0 : 1;            
        } else {resultado1 = 1; resultado2 = 1;}
        soma1 = num_pts_tur1; soma2 = num_pts_tur2;
        printf("%s tem %d pontos turísticos\n", nome1, num_pts_tur1);
        printf("%s tem %d pontos turísticos\n", nome1, num_pts_tur1);
        break; 
    default:
        printf("Escolha inválida, digite um número correspondente ao atributo desejado.\n");
        break;
    }
    printf("\n");    
    switch (escolha2) //MESMO SWITCH USADO NA PRIMEIRA COMPARAÇÃO
        {case 1:
            printf("O segundo atributo escolhido foi População;\n");
            if (populacao1 != populacao2)
            {(populacao1 > populacao2) ? resultado1++ : resultado2++;
            } else {resultado1++; resultado2++;}
            soma1 += populacao1; soma2 += populacao2;
            printf("%s tem %lu habitantes.\n", nome1, populacao1);
            printf("%s tem %lu habitantes.\n", nome2, populacao2);
            break;        
        case 2:
            printf("O segundo atributo escolhido foi Área;\n");
            if (area1 != area2)
             {(area1 > area2) ? resultado1++ : resultado2++;
            } else {resultado1++; resultado2++;}
            soma1 += area1; soma2 += area2;
            printf("%s tem %d km²\n", nome1, area1);
            printf("%s tem %d km²\n", nome2, area2);
            printf("pontuação resultado %d e r2 %d", resultado1, resultado2);
            break;
        case 3:
            printf("O segundo atributo escolhido foi PIB;\n");
            if (pib1 != pib2)
             {(pib1 > pib2) ? resultado1++ : resultado2++;
             } else {resultado1++; resultado2++;}
             soma1 += pib1; soma2 += pib2;
             printf("%s tem um PIB de R$ %.2f\n", nome1, pib1);
             printf("%s tem um PIB de R$ %.2f\n", nome2, pib2);
            break;
        case 4:
            printf("O segundo atributo escolhido foi PIB Per Capita;\n");
            if (pib_per != pib_per2)
             { (pib_per > pib_per2) ? resultado1++ : resultado2++;
             } else {resultado1++; resultado2++;}
             soma1 += pib_per; soma2 += pib_per2;
             printf("%s tem um PIB Per Capita de R$ %.2f\n", nome1, pib_per);
             printf("%s tem um PIB Per capta de R$ %.2f\n", nome2, pib_per2);
            break;
        case 5:
            printf("O segundo atributo escolhido foi Densidade Populacional;\n");
            if (densidade_pop != densidade_pop2)
            {(densidade_pop < densidade_pop2) ? resultado1++ : resultado2++;
            } else {resultado1++; resultado2++;}
            soma1 += densidade_pop; soma2 += densidade_pop2;
            printf("%s tem um Densidade de %.2f km²/hab\n", nome1, densidade_pop);
            printf("%s tem um Densidade de %.2f km²/hab\n", nome2, densidade_pop2);
            break; 
        case 6:
            printf("O segundo atributo escolhido foi Numero de Pontos Turisticos;\n");
            if (num_pts_tur1 != num_pts_tur2)
            {(num_pts_tur1 > num_pts_tur2) ? resultado1++ : resultado2++;
            } else {resultado1 = 1; resultado2 =1;}
            soma1 += num_pts_tur1; soma2 += num_pts_tur2;
            printf("%s tem %d pontos turísticos\n", nome1, num_pts_tur1);
            printf("%s tem %d pontos turísticos\n", nome2, num_pts_tur2);
            break; 
        default:
            printf("Escolha inválida, digite um número correspondente ao atributo desejado.\n");
            break;
        }

    //COMPUTANDO RESULTADOS
    printf("\nPara os atributos escolhidos:\n");
    if (resultado1 > resultado2)
        {printf("A Carta %s, %s venceu por %d ponto(s) a %d\n", cod_carta1, nome1, resultado1, resultado2);
        }else if (resultado1 == resultado2)
        {printf("Houve empate, os atributos escolhidos tem o memso valor\n");
        }else{printf("A Carta %s, %s venceu por %d ponto(s) a %d\n", cod_carta2, nome2, resultado2, resultado1);}
    
    printf("\nPara a soma dos atributos:\n");
    if (soma1 > soma2)
        {printf("A carta %s, %s venceu! a soma dos seus atributos foram %.2f contra %.2f da outra carta.\n", cod_carta1, nome1, soma1, soma2);
        }else if (soma1 == soma2) {printf("EMPATOU\n");}
        else{printf("A carta %s, %s venceu! a soma dos seus atributos foram %.2f contra %.2f da outra carta.\n", cod_carta2, nome2, soma2, soma1);} 
    }else{printf("Você selecionou o mesmo atributo reinicie o jogo e tente novamente.\n");}

    return 0;

}