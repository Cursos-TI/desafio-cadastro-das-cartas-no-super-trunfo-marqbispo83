#include <stdio.h>

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

    //declarando variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    int pontosturisticos2;
    float densidade2, pib_perc2, area2, pib2;
    float superPoder2;
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

    //comparação das cartas
    printf("\n Comparacao de Cartas \n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per capita: Carta 1 venceu (%d)\n", pib_perc1 > pib_perc2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);



    return 0;
}
