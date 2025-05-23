#include <stdio.h>

int main() {
    char estado1[10], estado2[10], codigo1[10], codigo2[10], cidade1[30], cidade2[30];
    int num_turisticos1, num_turisticos2;
    float area1, area2, pib1, pib2;
    float DensPop1, DensPop2, PIBCapita1, PIBCapita2;
    float SuperPoder1, SuperPoder2;
    unsigned long int populacao1, populacao2;
    int opcao;
    
    //Obtendo dados inseridos pelo usuário para carta 1
    printf ("Carta 1\n");
    printf ("Insira o estado: ");
    scanf ("%s", &estado1);
    printf ("Insira o código: ");
    scanf ("%s", &codigo1);
    printf ("Nome da cidade: ");
    getchar(); //getchar() lê e remove o \n, dessa forma o fgets() n será pulado   
    fgets (cidade1,30,stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; //Remoção do '\n' depois do fgets
    printf ("Insira a população: ");
    scanf ("%lu", &populacao1);
    printf ("Insira a área: ");
    scanf ("%f", &area1);
    printf ("Insira o PIB: ");
    scanf ("%f", &pib1);
    printf ("Insira o número de pontos turísticos: ");
    scanf ("%d", &num_turisticos1);

    //Obtendo dados inseridos pelo usuário para carta 2
    printf ("\nCarta 2\n");
    printf ("Insira o estado: ");
    scanf (" %s", &estado2);
    printf ("Insira o código: ");
    scanf ("%s", &codigo2);
    printf ("Nome da cidade: ");
    getchar();  //getchar() lê e remove o \n, dessa forma o fgets() n será pulado    
    fgets (cidade2,30,stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; //Remoção do '\n' depois do fgets
    printf ("Insira a população: ");
    scanf ("%lu", &populacao2);
    printf ("Insira a área: ");
    scanf ("%f", &area2);
    printf ("Insira o PIB: ");
    scanf ("%f", &pib2);
    printf ("Insira o número de pontos turísticos: ");
    scanf ("%d", &num_turisticos2);

    //Calculando a Densidade Populacional 
    DensPop1 = (float)populacao1 / area1;
    DensPop2 = (float)populacao2 / area2;
    
    //Calculando o PIB per Capita
    PIBCapita1 = (pib1 * 1000000000) / (float)populacao1;
    PIBCapita2 = (pib2 * 1000000000) / (float)populacao2;

    //Calculando Super Poder
    SuperPoder1 = (float)populacao1 + area1 + pib1 + (float)num_turisticos1 + PIBCapita1 + (1 / DensPop1);
    SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)num_turisticos2 + PIBCapita2 + (1 / DensPop2);

    //Menu para comparação de um atributo das cartas
    printf ("1 - Nome do país\n");
    printf ("2 - População\n");
    printf ("3 - Área\n");
    printf ("4 - PIB\n");
    printf ("5 - Número de pontos turísticos\n");
    printf ("6 - Densidade demográfica\n");
    printf ("7 - PIB per Capita\n");
    printf ("8 - Super Poder\n");
    printf ("Escolha um atributo para comparação: \n");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf ("\nCarta 1:\n");
        printf ("Estado: %c\n", estado1);
        printf ("Código: %s\n", codigo1);
        printf ("Nome da Cidade: %s", cidade1);
        printf ("População: %lu\n", populacao1);
        printf ("Área: %.2f km²\n", area1);
        printf ("PIB: %.2f bilhões de reais\n", pib1);
        printf ("Número de Pontos Turísticos: %d\n", num_turisticos1);
        printf ("Densidade Populacional: %.2f hab/km²\n", DensPop1);
        printf ("PIB per Capita: %.2f reais\n", PIBCapita1);

        printf ("\nCarta 2:\n");
        printf ("Estado: %c\n", estado2);
        printf ("Código: %s\n", codigo2);
        printf ("Nome da Cidade: %s", cidade2);
        printf ("População: %lu\n", populacao2);
        printf ("Área: %.2f km²\n", area2);
        printf ("PIB: %.2f bilhões de reais\n", pib2);
        printf ("Número de Pontos Turísticos: %d\n", num_turisticos2);
        printf ("Densidade Populacional: %.2f hab/km²\n", DensPop2);
        printf ("PIB per Capita: %.2f reais\n\n", PIBCapita2);
        break;
    case 2:
        printf ("\nAtributo escolhido: População\n");
        printf ("%s - %lu\n", cidade1, populacao1);
        printf ("%s - %lu\n", cidade2, populacao2);
        if (populacao1 > populacao2){
            printf ("Carta 1 venceu!\n\n");
        } else if (populacao1 < populacao2){
            printf ("Carta 2 venceu!\n\n");
        } else {
            printf ("Empate!\n\n");
        }
        break;
    case 3:
        printf ("\nAtributo escolhido: Área\n");
        printf ("%s - %.2f\n", cidade1, area1);
        printf ("%s - %.2f\n", cidade2, area2);
        if (area1 > area2){
            printf ("Carta 1 venceu!\n\n");
        } else if (area1 < area2){
            printf ("Carta 2 venceu!\n\n");
        } else {
            printf ("Empate!\n\n");
        }
        break;
    case 4:
        printf ("\nAtributo escolhido: PIB\n");
        printf ("%s - %.2f\n", cidade1, pib1);
        printf ("%s - %.2f\n", cidade2, pib2);
        if (pib1 > pib2){
            printf ("Carta 1 venceu!\n\n");
        } else if (pib1 < pib2){
            printf ("Carta 2 venceu!\n\n");
        } else {
            printf ("Empate!\n\n");
        }
        break;
    case 5:
        printf ("\nAtributo escolhido: Pontos Turísticos\n");
        printf ("%s - %d\n", cidade1, num_turisticos1);
        printf ("%s - %d\n", cidade2, num_turisticos2);
        if (num_turisticos1 > num_turisticos2){
            printf ("Carta 1 venceu!\n\n");
        } else if (num_turisticos1 < num_turisticos2){
            printf ("Carta 2 venceu!\n\n");
        } else {
            printf ("Empate!\n\n");
        }
        break;
    case 6:
        printf ("\nAtributo escolhido: Densidade Populacional\n");
        printf ("%s - %.2f\n", cidade1, DensPop1);
        printf ("%s - %.2f\n", cidade2, DensPop2);
        if (DensPop1 > DensPop2){
            printf ("Carta 2 venceu!\n\n");
        } else if (DensPop1 < DensPop2){
            printf ("Carta 1 venceu!\n\n");
        } else {
            printf ("Empate!\n\n");
        }
        break;
    case 7:
         printf ("\nAtributo escolhido: PIB per Capita\n");
        printf ("%s - %.2f\n", cidade1, PIBCapita1);
        printf ("%s - %.2f\n", cidade2, PIBCapita2);
        if (PIBCapita1 > PIBCapita2){
            printf ("Carta 1 venceu!\n\n");
        } else if (PIBCapita1 < PIBCapita2){
            printf ("Carta 2 venceu!\n\n");
        } else {
            printf ("Empate!\n\n");
        }
         break;
    case 8:
        printf ("\nAtributo escolhido: Super Poder\n");
        printf ("%s - %.2f\n", cidade1, SuperPoder1);
        printf ("%s - %.2f\n", cidade2, SuperPoder2);
        if (SuperPoder1 > SuperPoder2){
            printf ("Carta 1 venceu!\n\n");
        } else if (SuperPoder1 < SuperPoder2){
            printf ("Carta 2 venceu!\n\n");
        } else {
            printf ("Empate!\n\n");
        }
        break;
    default:
        printf ("Opção inválida!\n\n");
        break;
    }

    return 0;
}
