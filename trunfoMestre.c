#include <stdio.h>

int main (){

        //Carta 1
        char estado1;
        char codigo1[4];
        char nomeDacidade1[12];
        unsigned long int populacao1;
        float area1;
        float pib1;
        int pontosTuristicos1;
        float densidadepopulacional1;
        float PIBperCapita1;
        float superPoder1;

        printf("Carta 1: \n");

        printf("Digite o estado: ");
        scanf(" %c", &estado1);

        printf("Digite o código: ");
        scanf("%s", codigo1);

        printf("Digite o nome da cidade: ");
        scanf("%s", nomeDacidade1);

        printf("Digite a população: ");
        scanf("%lu", &populacao1);

        printf("Digite a área: ");
        scanf("%f", &area1);

        printf("Digite o pib: ");
        scanf("%f", &pib1);

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontosTuristicos1);

        //Calculos
        densidadepopulacional1 = populacao1 / area1;
        PIBperCapita1 = (float) pib1 / populacao1;
        superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + PIBperCapita1 + (1.0f / densidadepopulacional1);
    
        //Carta 2
        char estado2;
        char codigo2[4];
        char nomeDacidade2[12];
        unsigned long int populacao2;
        float area2;
        float pib2;
        int pontosTuristicos2;
        float densidadepopulacional2;
        float PIBperCapita2;

        printf("Carta 2: \n");

        printf("Digite o estado: ");
        scanf(" %c", &estado2);

        printf("Digite o código: ");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade: ");
        scanf("%s", nomeDacidade2);

        printf("Digite a população: ");
        scanf("%lu", &populacao2);

        printf("Digite a área: ");
        scanf("%f", &area2);

        printf("Digite o pib: ");
        scanf("%f", &pib2);

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontosTuristicos2);

        //Calculos
        densidadepopulacional2 = populacao2 / area2;
        PIBperCapita2 = (float) pib2 / populacao2;
        superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + PIBperCapita2 + (1.0f / densidadepopulacional2);

        //Resultado
        printf("\nComparação de Cartas:\n");
        printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
        printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
        printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2);
        printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBperCapita1 > PIBperCapita2);
        printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);


        return 0;


    }
