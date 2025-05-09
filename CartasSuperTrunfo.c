#include <stdio.h>

int main() {
    char estado1[10], estado2[10], codigo1[10], codigo2[10], cidade1[30], cidade2[30];
    int num_turisticos1, num_turisticos2;
    float area1, area2, pib1, pib2;
    float DensPop1, DensPop2, PIBCapita1, PIBCapita2;
    float SuperPoder1, SuperPoder2;
    unsigned long int populacao1, populacao2;

    //Obtendo dados inseridos pelo usuário para carta 1
    printf ("Carta 1\n");
    printf ("Insira o estado: ");
    scanf ("%s", &estado1);
    //printf ("Insira o código: ");
    //scanf ("%s", &codigo1);
    printf ("Nome da cidade: ");
    getchar(); //getchar() lê e remove o \n, dessa forma o fgets() n será pulado   
    fgets (cidade1,30,stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; //Remoção do '\n' depois do fgets
    printf ("Insira a população: ");
    scanf ("%lu", &populacao1);
    /*printf ("Insira a área: ");
    scanf ("%f", &area1);
    printf ("Insira o PIB: ");
    scanf ("%f", &pib1);
    printf ("Insira o número de pontos turísticos: ");
    scanf ("%d", &num_turisticos1);*/

    //Obtendo dados inseridos pelo usuário para carta 2
    printf ("\nCarta 2\n");
    printf ("Insira o estado: ");
    scanf (" %s", &estado2);
    //printf ("Insira o código: ");
    //scanf ("%s", &codigo2);
    printf ("Nome da cidade: ");
    getchar();  //getchar() lê e remove o \n, dessa forma o fgets() n será pulado    
    fgets (cidade2,30,stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; //Remoção do '\n' depois do fgets
    printf ("Insira a população: ");
    scanf ("%lu", &populacao2);
    /*printf ("Insira a área: ");
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

    //Imprimindo os dados da carta 1
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


    //Imprimindo os dados da carta 2
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

    //Comparando as Cartas e imprimindo o resultado
    printf ("Comparação das Cartas:\n");
    printf ("População: Carta %d venceu (%d)\n", (populacao1 >= populacao2) ? 1 : 2, populacao1 >= populacao2);
    printf ("Área: Carta %d venceu (%d)\n", (area1 >= area2) ? 1 : 2, area1 >= area2);
    printf ("PIB: Carta %d venceu (%d)\n", (pib1 >= pib2) ? 1 : 2, pib1 >= pib2);
    printf ("Pontos Turísticos: Carta %d venceu (%d)\n", (num_turisticos1 >= num_turisticos2) ? 1 : 2, num_turisticos1 >= num_turisticos2);
    printf ("Densidade Populacional: Carta %d venceu (%d)\n", (DensPop1 <= DensPop2) ? 1 : 2, DensPop1 <= DensPop2);
    printf ("PIB per Capita: Carta %d venceu (%d)\n", (PIBCapita1 >= PIBCapita2) ? 1 : 2, PIBCapita1 >= PIBCapita2);
    printf ("Super Poder: Carta %d venceu (%d)\n\n", (SuperPoder1 >= SuperPoder2) ? 1 : 2, SuperPoder1 >= SuperPoder2);*/

    //Escolhendo um atributo e fazendo sua comparação usando else-if
    printf ("\n\nComparação de cartas (Atributo: População)\n\n");
    printf ("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf ("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2){
        printf ("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf ("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }

    return 0;
}
