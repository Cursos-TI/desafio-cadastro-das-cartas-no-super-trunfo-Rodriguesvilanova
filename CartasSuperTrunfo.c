#include <stdio.h>

int main() {
    //Declarando variaveis para aemanzenar informacoes jodo super trunfo
    char estado1,estado2;
    char codcarta1,codcarta2;
    char Cidade[50],Cidade2[50];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontosTuristicos1,pontosTuristicos2;
    
    //entrada de dados para a preimeira carta
    printf("\n cadastrando a carta 1,digite as informacoes abaixo:\n");
    printf("estado (ex: A,B,C):" );
    scanf("%c",&estado1);

    printf("codigo da carta (ex: A01,AO2,B01):" );
    scanf("%s",&codcarta1);

    printf("Nome de Cidade:" );
    scanf("%s",&Cidade);

    printf("Populacao:" );
    scanf("%d",&populacao1);   

    printf("Area:" );
    scanf("%f", &area1);

    printf("PIB:" );
    scanf("%f", &pib1);

    printf("Pontos Turisticos:" );
    scanf("%d", &pontosTuristicos1);

    return 0;

}