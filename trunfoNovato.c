#include <stdio.h>
       int main(){
       
       //Carta 1
        char estado1;
        char codigo1[4];
        char nomeDacidade1[20];
        int populaçao1;
        float area1;
        float pib1;
        int pontosTuristicos1;

        printf("Carta 1: \n");
        printf("Digite o estado: ");
        scanf(" %c", &estado1);

        printf("Digite o código: ");
        scanf("%s", &codigo1);

        printf("Digite o nome da cidade: ");
        scanf("%s", &nomeDacidade1);

        printf("Digite a população: ");
        scanf("%d", &populaçao1);

        printf("Digite a área: ");
        scanf("%f", &area1);

        printf("Digite o pib: ");
        scanf("%f", &pib1);

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontosTuristicos1);
     
        //Carta 2
        char estado2;
        char codigo2[4];
        char nomeDacidade2[20];
        int populaçao2;
        float area2;
        float pib2;
        int pontosTuristicos2;

        printf("Carta 2:\n");
        printf("Digite o estado: ");
        scanf(" %c", &estado2);

        printf("Digite o código: ");
        scanf("%s", &codigo2);

        printf("Digite o nome da cidade: ");
        scanf("%s", &nomeDacidade2);

        printf("Digite a população: ");
        scanf("%d", &populaçao2);

        printf("Digite a área: ");
        scanf("%f", &area2);

        printf("Digite o pib: ");
        scanf("%f", &pib2);

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontosTuristicos2);

        // Variáveis carta 1

        printf("Carta 1 \n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da cidade: %s\n", nomeDacidade1);
        printf("Populaçao: %d\n", populaçao1);
        printf("Área: %.2f\n", area1);
        printf("Pib: %.2f\n", pib1);
        printf("Pontos Turisticos: %d\n", pontosTuristicos1);

        // Variáveis carta 2

        printf("Carta 2 \n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da cidade: %s\n", nomeDacidade2);
        printf("Populaçao: %d\n", populaçao2);
        printf("Área: %.2f\n", area2);
        printf("Pib: %.2f\n", pib2);
        printf("Pontos Turisticos: %d\n", pontosTuristicos2);


        return 0;