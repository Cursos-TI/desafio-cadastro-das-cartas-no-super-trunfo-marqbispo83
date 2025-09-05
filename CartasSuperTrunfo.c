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
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    
    //declarando variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    
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
    scanf("%d", &populacao1);

    printf("Digite a área em (KM²): ");
    scanf("%f", &area1);

    printf("Digite o Pib: ");
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
    scanf("%d", &populacao2);

    printf("Digite a área em (KM²): ");
    scanf("%f", &area2);

    printf("Digite o Pib: ");
    scanf("%f", &pib2);

    printf("Digite número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    
    // Exibindo dados da primeira carta
    printf("\nDados da Primeira Carta\n");
   
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    // Exibindo dados da segunda carta
    printf("\nDados da Segunda Carta\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);



    return 0;
}
