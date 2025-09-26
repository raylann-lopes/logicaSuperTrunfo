#include <stdio.h>

// Estrutura para representar uma carta do jogo
struct Card {
    int card;
    char name[100];
    int population;
    float area;
    float PIB;
    int points;
    float pibPerCapta;
    float densidadePopulacional;
    float power;
};

int main() {
    // Declaração das duas cartas que serão comparadas
    struct Card card1, card2;

    printf("======= Super Trunfo =======\n\n");

    printf("Cadastre as suas cartas \n\n");

    // --- CADASTRO CARTA 01 ---
    printf("======= Carta 01 =======\n\n");

    printf("Insira o nome da pais: \n");
    scanf(" %s", card1.name);

    printf("Insira o numero de habitantes da cidade: \n");
    scanf(" %d", &card1.population);

    printf("Insira a area da cidade em KM: \n");
    scanf("  %f", &card1.area);

    printf("Insira o PIB( Produto Interno Bruto) da cidade: \n");
    scanf("  %f", &card1.PIB);

    printf("Insira a quantidade de pontos turisticos que ha na cidade: \n");
    scanf("  %d", &card1.points);

    printf("Carta 01 (%s) cadastrada com sucesso!\n\n", card2.name);


    card1.pibPerCapta = card1.PIB / (float) card1.population;
    card1.densidadePopulacional = (float) card1.population / card1.area;
    card1.power = (float) card1.population + card1.area + card1.PIB + (float) card1.points + card1.pibPerCapta + (
                      card1.area / (float) card1.population);

    printf("Carta 01");
    printf("Pais: %s \n", card1.name);
    printf("Populacao: %d \n", card1.population);
    printf("Area: %.2f Km \n", card1.area);
    printf("PIB: %.2f Bilhoes de reais \n", card1.PIB);
    printf("Numero de Pontos Turisticos: %d \n", card1.points);
    printf("Densidade Populacional: %.2f \n", card1.densidadePopulacional);
    printf("PIB per capita: %.2f \n", card1.pibPerCapta);

    //Cadastro Carta 2

    printf("======= Carta 02 =======\n\n");

    printf("Cadastre as suas cartas \n\n");

    printf("Insira o nome do pais: \n");
    scanf(" %s", card2.name);

    printf("Insira o numero de habitantes da cidade: \n");
    scanf(" %d", &card2.population);

    printf("Insira a area da cidade em KM: \n");
    scanf("  %f", &card2.area);

    printf("Insira o PIB( Produto Interno Bruto) da cidade: \n");
    scanf("  %f", &card2.PIB);

    printf("Insira a quantidade de pontos turisticos que ha na cidade: \n");
    scanf("  %d", &card2.points);

    card2.pibPerCapta = card2.PIB / (float) card2.population;
    card2.densidadePopulacional = (float) card2.population / card2.area;
    card2.power = (float) card2.population + card2.area + card2.PIB + (float) card2.points + card2.pibPerCapta + (
                      card2.area / (float) card2.population);


    printf("Carta 02 (%s) cadastrada com sucesso!\n\n", card2.name);

    printf("Carta 02");
    printf("Pais: %s \n", card2.name);
    printf("Populacao: %d \n", card2.population);
    printf("Area: %.2f Km \n", card2.area);
    printf("PIB: %.2f Bilhoes de reais \n", card2.PIB);
    printf("Numero de Pontos Turisticos: %d \n", card2.points);
    printf("Densidade Populacional: %.2f \n", card2.densidadePopulacional);
    printf("PIB per capita: %.2f \n", card2.pibPerCapta);

    printf("===================================\n");
    printf("Comparacao de Cartas:\n");
    printf("===================================\n");


    int option;

    printf("Qual carta atributo deseja comparar? \n");
    printf("1 - População: \n");
    printf("2 - Area: \n");
    printf("3 - PIB: \n");
    printf("4 - Numero de pontos Turisticos: \n");
    printf("5 - Densidade Demografica: \n");
    scanf("%d, &option");

    switch (option) {
        case 1:
            if (card1.population > card2.population) {
                printf("População: Carta 01 (%s) Venceu \n", card1.name);
                printf("%s = %d \n", card1.name, card1.population);
                printf("%s = %d \n", card2.name, card2.population);
            } else if (card1.population < card2.population) {
                printf("População: Carta 02 (%s) Venceu \n", card2.name);
                printf("%s = %d \n", card2.name, card2.population);
                printf("%s = %d \n", card1.name, card1.population);
            } else if (card1.population == card2.population) {
                printf("Empate");
            }
            break;
        case 2:
            if (card1.area > card2.area) {
                printf("Area: Carta 01 (%s) Venceu \n", card1.name);
                printf("%s = %f \n", card1.name, card1.area);
                printf("%s = %f \n", card2.name, card2.area);
            } else if (card1.area < card2.area) {
                printf("Area: Carta 02 (%s) Venceu \n", card2.name);
                printf("%s = %f \n", card2.name, card2.area);
                printf("%s = %f \n", card1.name, card1.area);
            } else if (card1.area == card2.area) {
                printf("Empate");
            }
            break;
        case 3:
            if (card1.PIB > card2.PIB) {
                printf("PIB: Carta 01 (%s) Venceu \n", card1.name);
                printf("%s = %f \n", card1.name, card1.PIB);
                printf("%s = %f \n", card2.name, card2.PIB);
            } else if (card1.PIB < card2.PIB) {
                printf("PIB: Carta 02 (%s) Venceu \n", card2.name);
                printf("%s = %f \n", card2.name, card2.PIB);
                printf("%s = %f \n", card1.name, card1.PIB);
            } else if (card1.PIB == card2.PIB) {
                printf("Empate");
            }
            break;
        case 4:
            if (card1.points > card2.points) {
                printf("Pontos Turisticos: Carta 01 (%s) Venceu \n", card1.name);
                printf("%s = %d \n", card1.name, card1.points);
                printf("%s = %d \n", card2.name, card2.points);
            } else if (card1.points < card2.points) {
                printf("Pontos Turisticos: Carta 02 (%s) Venceu \n", card2.name);
                printf("%s = %d \n", card2.name, card2.points);
                printf("%s = %d \n", card1.name, card1.points);
            } else if (card1.points == card2.points) {
                printf("Empate");
            }
            break;
        case 5:
            if (card1.densidadePopulacional < card2.densidadePopulacional) {
                printf("Densidade Demográfica: Carta 01 (%s) Venceu \n", card1.name);
                printf("%s = %f \n", card1.name, card1.densidadePopulacional);
                printf("%s = %f \n", card2.name, card2.densidadePopulacional);
            } else if (card1.densidadePopulacional > card2.densidadePopulacional) {
                printf("Densidade Demográfica: Carta 02 (%s) Venceu \n", card2.name);
                printf("%s = %f \n", card2.name, card2.densidadePopulacional);
                printf("%s = %f \n", card1.name, card1.densidadePopulacional);
            } else if (card1.densidadePopulacional == card2.densidadePopulacional) {
                printf("Empate");
            }
            break;
        default:
            printf("Opcao invalida! Por favor, execute o programa novamente e escolha um numero entre 1 e 5.\n");
            break;
    }
}
