#include <stdio.h>

int main() {
    char estado1, estado2, codigo1[10], codigo2[10], cidade1[30], cidade2[30];
    int populacao1, populacao2, num_turisticos1, num_turisticos2;
    float area1, area2, pib1, pib2;
    
    //Obtendo dados inseridos pelo usuário para carta 1
    printf ("Carta 1\n");
    printf ("Insira o estado: ");
    scanf ("%c", &estado1);
    printf ("Insira o código: ");
    scanf ("%s", &codigo1);
    printf ("Nome da cidade: ");
    getchar(); //getchar() lê e remove o \n, dessa forma o fgets() n será pulado   
    fgets (cidade1,30,stdin);
    printf ("Insira a população: ");
    scanf ("%d", &populacao1);
    printf ("Insira a área: ");
    scanf ("%f", &area1);
    printf ("Insira o PIB: ");
    scanf ("%f", &pib1);
    printf ("Insira o número de pontos turísticos: ");
    scanf ("%d", &num_turisticos1);

    //Obtendo dados inseridos pelo usuário para carta 2
    printf ("\nCarta 2\n");
    printf ("Insira o estado: ");
    scanf (" %c", &estado2);
    printf ("Insira o código: ");
    scanf ("%s", &codigo2);
    printf ("Nome da cidade: ");
    getchar();  //getchar() lê e remove o \n, dessa forma o fgets() n será pulado    
    fgets (cidade2,30,stdin);
    printf ("Insira a população: ");
    scanf ("%d", &populacao2);
    printf ("Insira a área: ");
    scanf ("%f", &area2);
    printf ("Insira o PIB: ");
    scanf ("%f", &pib2);
    printf ("Insira o número de pontos turísticos: ");
    scanf ("%d", &num_turisticos2);

    //Imprimindo os dados da carta 1
    printf ("\nCarta 1:\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: %.2f bilhões de reais\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", num_turisticos1);

    //Imprimindo os dados da carta 2
    printf ("\nCarta 2:\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n\n", num_turisticos2);

    return 0;
}
