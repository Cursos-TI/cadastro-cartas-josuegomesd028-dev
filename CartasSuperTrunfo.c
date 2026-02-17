#include <stdio.h>

int main(){

    char estado1[50];
    char código1[8];
    char nome1[20];
    int população1;
    float área1;
    int PIB1;
    int pontos1;

    char estado2[50];
    char código2[8];
    char nome2[20];
    int população2;
    float área2;
    int PIB2;
    int pontos2;

    //Dados para a primeira carta

    printf("Digte o estado 1: \n");
    scanf("%s", &estado1);

    printf("Digite o código 1: \n");
    scanf("%s", &código1);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &nome1);

    printf("Digite a população da cidade 1: \n");
    scanf("%d", &população1);

    printf("Digite a área da cidade 1: \n");
    scanf("%f", &área1);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%d", &PIB1);

    printf("Digite os pontos turiscos da carta 1: \n");
    scanf("%d", &pontos1);

    //Dados para a segunda carta

    printf("Digte o estado 2: \n");
    scanf("%s", &estado2);

    printf("Digite o código 2: \n");
    scanf("%s", &código2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &nome2);

    printf("Digite a população da cidade 2: \n");
    scanf("%d", &população2);

    printf("Digite a área da cidade2: \n");
    scanf("%f", &área2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%d", &PIB2);

    printf("Digite os pontos turiscos da cidade 2: \n");
    scanf("%d", &pontos2);
    
    //montagens das estatisticas das cartas

    printf("Carta 1: \n");

    printf("Estado :%s \n", estado1 );
    printf("Código :%s \n", código1);
    printf("Nome da cidade:%s \n", nome1);
    printf("População: %d \n", população1);
    printf("Área: %.3f \n", área1);
    printf("PIB: %d \n", PIB1);
    printf("Pontos turistiscos: %d \n", pontos1);

    printf("Carta 2: \n");

    printf("Estado :%s \n", estado2);
    printf("Código :%s \n", código2);
    printf("Nome da cidade:%s \n", nome2);
    printf("População: %d \n", população2);
    printf("Área: %.3f \n", área2);
    printf("PIB: %d \n", PIB2);
    printf("Pontos turistiscos: %d \n", pontos2);







}
