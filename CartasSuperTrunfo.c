#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Declarando as variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    int pontosturisticos1;
    float densidade1, pib_perc1, area1, pib1;
    float superPoder1;
    int opcao;
    

    //declarando variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    int pontosturisticos2;
    float densidade2, pib_perc2, area2, pib2;
    float superPoder2;

    int resultado1, resultado2;     //variaveis para declarar o resultado
    char atributo1, atributo2;


    srand(time(0));
    populacao1 = 1;
    populacao2 = 0;
    area1 = 1;
    area2 = 0;
    pib1 = 1;
    pib2 = 0;
    pontosturisticos1 = 1;
    pontosturisticos2 = 0;
    densidade1 = 0;
    densidade2 = 1;


    // Cadastro das Cartas:
    printf("Cadastro da primeira carta \n"); 
    
    //solicitando dados da primeira carta para o usúario.
    printf("Digite a letra da primeira carta(A-H): ");  
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex:A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área em (KM²): ");
    scanf("%f", &area1);

    printf("Digite o Pib (em Bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\nCadastro da segunda carta\n");

    printf("Digite a letra da primeira carta(A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex:A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área em (KM²): ");
    scanf("%f", &area2);

    printf("Digite o Pib (em Bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    //operadore matemáticos

    densidade1 = (float) populacao1 / area1;

    pib_perc1 = (pib1 * 1000000000.0) / populacao1;

    densidade2 = (float) populacao2 / area2;

    pib_perc2 = (pib2 * 1000000000.0) / populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pib_perc1 + (1.0f / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pib_perc2 + (1.0f / densidade2);

    
    // Exibindo dados da primeira carta
    printf("\nDados da Primeira Carta\n");
   
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("Pib per Capita: %.2f reais\n", pib_perc1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibindo dados da segunda carta
    printf("\nDados da Segunda Carta\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("Pib per Capita: %.2f reais\n", pib_perc2);
    printf("Super Poder: %.2f\n", superPoder2);

// Escolha do primeiro atributo
printf("### Menu Super Trunfo ###\n");
printf("Escolha o primeiro atributo para comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade\n");
printf("Sua escolha: ");
scanf(" %c", &atributo1);

switch (atributo1) {
    case '1':
        printf("Você escolheu População:\n");
        if (populacao1 > populacao2) resultado1 = 1;
        else if (populacao2 > populacao1) resultado1 = 2;
        else resultado1 = 0;
        break;
    case '2':
        printf("Você escolheu Área:\n");
        if (area1 > area2) resultado1 = 1;
        else if (area2 > area1) resultado1 = 2;
        else resultado1 = 0;
        break;
    case '3':
        printf("Você escolheu PIB:\n");
        if (pib1 > pib2) resultado1 = 1;
        else if (pib2 > pib1) resultado1 = 2;
        else resultado1 = 0;
        break;
    case '4':
        printf("Você escolheu Pontos Turísticos:\n");
        if (pontosturisticos1 > pontosturisticos2) resultado1 = 1;
        else if (pontosturisticos2 > pontosturisticos1) resultado1 = 2;
        else resultado1 = 0;
        break;
    case '5':
        printf("Você escolheu Densidade:\n");
        if (densidade1 < densidade2) resultado1 = 1; // menor densidade vence
        else if (densidade2 < densidade1) resultado1 = 2;
        else resultado1 = 0;
        break;
    default:
        printf("Opção inválida.\n");
        resultado1 = -1;
        break;
}

// Escolha do segundo atributo
printf("Escolha o segundo atributo para comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade\n");
printf("Sua escolha: ");
scanf(" %c", &atributo2);

if (atributo1 == atributo2) {
    printf("Você escolheu o mesmo atributo! Jogo encerrado.\n");
    return 0;
} else {
    switch (atributo2) {
        case '1':
            printf("Você escolheu População:\n");
            if (populacao1 > populacao2) resultado2 = 1;
            else if (populacao2 > populacao1) resultado2 = 2;
            else resultado2 = 0;
            break;
        case '2':
            printf("Você escolheu Área:\n");
            if (area1 > area2) resultado2 = 1;
            else if (area2 > area1) resultado2 = 2;
            else resultado2 = 0;
            break;
        case '3':
            printf("Você escolheu PIB:\n");
            if (pib1 > pib2) resultado2 = 1;
            else if (pib2 > pib1) resultado2 = 2;
            else resultado2 = 0;
            break;
        case '4':
            printf("Você escolheu Pontos Turísticos:\n");
            if (pontosturisticos1 > pontosturisticos2) resultado2 = 1;
            else if (pontosturisticos2 > pontosturisticos1) resultado2 = 2;
            else resultado2 = 0;
            break;
        case '5':
            printf("Você escolheu Densidade:\n");
            if (densidade1 < densidade2) resultado2 = 1;
            else if (densidade2 < densidade1) resultado2 = 2;
            else resultado2 = 0;
            break;
        default:
            printf("Opção inválida.\n");
            resultado2 = -1;
            break;
    }
}

// Resultado final
printf("\n=====================================\n");
printf("         RESULTADO DA PARTIDA        \n");
printf("=====================================\n");
printf("Carta 1: %s (%s) - Super Poder: %.2f\n", cidade1, codigo1, superPoder1);
printf("Carta 2: %s (%s) - Super Poder: %.2f\n\n", cidade2, codigo2, superPoder2);

if (resultado1 == 1 && resultado2 == 1) {
    printf("Vencedora: %s\n", cidade1);
} else if (resultado1 == 2 && resultado2 == 2) {
    printf("Vencedora: %s\n", cidade2);
} else if ((resultado1 == 1 && resultado2 == 2) || (resultado1 == 2 && resultado2 == 1)) {
    printf("Empate entre %s e %s!\n", cidade1, cidade2);
} else if (resultado1 == 0 && resultado2 == 0) {
    printf("Empate técnico! Nenhuma venceu claramente.\n");
} else

/*    //comparando as cartas
    if (resultado1 && resultado2)
    {
       printf("***Parabéns você VENCEU***\n");
    } else if (resultado1 != resultado2) {
        printf("# EMPATOU! #\n");
    } else {
        printf("@@@ VOCÊ PERDEU @@@\n");
    } */
    




/*    switch (opcao)
    {
    case 1:
        printf("População:\n");
        printf("%s: %lu habitantes\n", cidade1, populacao1);
        printf("%s: %lu habitantes\n", cidade2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("Vencedor: %s\n", cidade1);
        } else if (populacao2 > populacao1)
        {
            printf("Vencedor: %s\n", cidade2);        
        } else
        {
            printf("*** Empate ***\n");
        }
        break;
    case 2:
        printf("Área:\n");
        printf("%s: %.2f km²\n", cidade1, area1);
        printf("%s: %.2f km²\n", cidade2, area2);
        if (area1 > area2)
        {
            printf("Vencedor: %s\n", cidade1);
        } else if (area2 > area1)
        {
            printf("Vencedor: %s\n", cidade2);        
        } else
        {
            printf("*** Empate ***\n");
        }
        break;
    case 3:
        printf("PIB:\n");
        printf("%s: %.2f bilhões\n", cidade1, pib1);
        printf("%s: %.2f bilhões\n", cidade2, pib2);
        if (pib1 > pib2)
        {
            printf("Vencedor: %s\n", cidade1);
        } else if (pib2 > pib1)
        {
            printf("Vencedor: %s\n", cidade2);        
        } else
        {
            printf("*** Empate ***\n");
        }
        break;
    case 4:
        printf("Pontos Turísticos\n");
        printf("%s: %d\n", cidade1, pontosturisticos1);
        printf("%s: %d\n", cidade2, pontosturisticos2);
        if (pontosturisticos1 > pontosturisticos2)
        {
            printf("Vencedor: %s\n", cidade1);
        } else if (pontosturisticos2 > pontosturisticos1)
        {
            printf("Vencedor: %s\n", cidade2);        
        } else
        {
            printf("*** Empate ***\n");
        }
        break;
    case 5:
        printf("Densidade:\n");
        printf("%s: %.2f km²\n", cidade1, densidade1);
        printf("%s: %.2f km²\n", cidade2, densidade2);
        if (densidade1 < densidade2)
        {
            printf("Vencedor: %s\n", cidade1);
        } else if (densidade2 < densidade1)
        {
            printf("Vencedor: %s\n", cidade2);        
        } else
        {
            printf("*** Empate ***\n");
        }
        break;
    
    default:
        printf("Opção inválida.\n");
        break;
    }  */

   /* comparação das cartas
    printf("\n Comparacao de Cartas \n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per capita: Carta 1 venceu (%d)\n", pib_perc1 > pib_perc2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    comparando o superpoder para determinar qual carta é vencedora
    printf("\n A CARTA VENCEDORA \n");

    if (superPoder1 > superPoder2) {
    printf("Carta 1 - %s: %.2f.\n", cidade1, superPoder1); //exibindo valor do super poder da cidade 1
    printf("Carta 2 - %s: %.2f.\n", cidade2, superPoder2); //exibindo valor do super poder da cidade 2
    printf("A carta 1 é vencedora!\n");
    } else {
    printf("Carta 1 - %s: %.2f.\n", cidade1, superPoder1); //exibindo valor do super poder da cidade 1
    printf("Carta 2 - %s: %.2f.\n", cidade2, superPoder2); //exibindo valor do super poder da cidade 2
    printf("A carta 2 é a vencedora!\n");
    } */



    return 0;
}