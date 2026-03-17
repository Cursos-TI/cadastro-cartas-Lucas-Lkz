#include <stdio.h>

int main(){
//variaveis carta1
    
    char estado1[3], codigo1[5], cidade1[50];
    int populacao1, turisticos1;
    float area1, pib1, densidade1, capita1;

//variaveis carta2
    
    char estado2[3], codigo2[5], cidade2[50];
    int populacao2, turisticos2;
    float area2, pib2, densidade2, capita2;

//leitura carta1

    printf("--- Cadastro da carta1 ---\n");
    printf("Insira a sigla do estado: \n");
    scanf("%s", estado1);
    printf("Agora insira o codigo da carta: \n");
    scanf("%s", codigo1);
    printf("Agora insira o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Insira a população: \n");
    scanf("%d", &populacao1);
    printf("Insira os pontos turísticos: \n");
    scanf("%d", &turisticos1);
    printf("Insira a área: \n");
    scanf("%f", &area1);
    printf("Insira o pib: \n");
    scanf("%f", &pib1);

//leitura carta2

    printf("--- Cadastro da carta2 ---\n");
    printf("Insira a sigla do estado: \n");
    scanf("%s", estado2);
    printf("Agora insira o codigo da carta: \n");
    scanf("%s", codigo2);
    printf("Agora insira o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Insira a população: \n");
    scanf("%d", &populacao2);
    printf("Insira os pontos turísticos: \n");
    scanf("%d", &turisticos2);
    printf("Insira a área: \n");
    scanf("%f", &area2);
    printf("Insira o pib: \n");
    scanf("%f", &pib2);

//cálculo densidade e pib per capita carta1:
    densidade1 = (float)populacao1 / area1;
    capita1 = (pib1 * 1000000000.0 / (float)populacao1);

//cálculo densidade e pib per capita carta2:
    densidade2 = (float)populacao2 / area2;
    capita2 = (pib2 * 1000000000.0 / (float)populacao2);

//exibição carta1

    printf("\n-------------------------\n");
    printf("Dados da carta1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos Turísticos: %d\n", turisticos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib per Capita: %.2f reais\n", capita1);

//exibição carta2
    printf("\n-------------------------\n");
    printf("Dados da carta2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", turisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib per Capita: %.2f reais\n", capita2);    
    printf("------------------------\n");

    return 0;

}
