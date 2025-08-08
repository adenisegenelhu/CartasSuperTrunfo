#include <stdio.h>

int main (){

        //Carta 1
        char estado1;
        char codigo1[4];
        char nomeDacidade1[12];
        int populacao1;
        float area1;
        float pib1;
        int pontosTuristicos1;
        float densidadepopulacional1;
        float PIBperCapita1;

        printf("Carta 1: \n");

        printf("Digite o estado: ");
        scanf(" %c", &estado1);

        printf("Digite o código: ");
        scanf("%s", codigo1);

        printf("Digite o nome da cidade: ");
        scanf("%s", nomeDacidade1);

        printf("Digite a população: ");
        scanf("%d", &populacao1);

        printf("Digite a área: ");
        scanf("%f", &area1);

        printf("Digite o pib: ");
        scanf("%f", &pib1);

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontosTuristicos1);

        //operacao divisao
        densidadepopulacional1 = populacao1 / area1;
        PIBperCapita1 = (float) pib1 / populacao1;
    
        //Carta 2
        char estado2;
        char codigo2[4];
        char nomeDacidade2[12];
        int populacao2;
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
        scanf("%d", &populacao2);

        printf("Digite a área: ");
        scanf("%f", &area2);

        printf("Digite o pib: ");
        scanf("%f", &pib2);

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontosTuristicos2);

        //operacao divisao
        densidadepopulacional2 = populacao2 / area2;
        PIBperCapita2 = (float) pib2 / populacao2;

        // Variáveis carta 1

        printf("Carta 1: \n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da cidade: %s\n", nomeDacidade1);
        printf("Populaçao: %d\n", populacao1);
        printf("Pib: %.2f\n", pib1);
        printf("Pontos Turisticos: %d\n", pontosTuristicos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
        printf("PIB per Capita: %.6f reais\n", PIBperCapita1);

        // Variáveis carta 2

        printf("Carta 2: \n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da cidade: %s\n", nomeDacidade2);
        printf("Populaçao: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("Pib: %.2f\n", pib2);
        printf("Pontos Turisticos: %d\n", pontosTuristicos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
        printf("PIB per Capita: %.6f reais\n", PIBperCapita2);

        return 0;


    }
