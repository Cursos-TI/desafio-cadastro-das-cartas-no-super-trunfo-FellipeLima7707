#include <stdio.h>

int main(){


    char Estado[20];
    char CodigoDacarta[20];
    char NomeDaCidade[20];
    int Populacao;
    float Area;
    float PIB;
    int NumeroDePontosTuristicos;
    float DensidadePopulacional;
    float PIBperCapita;


    printf("Digite o nome do Estado para a primeira carta: \n");
    scanf("%s", Estado);
    
    printf("Digite o código da carta: %s \n", CodigoDacarta);
    scanf("%s", CodigoDacarta);
    
    printf("DIgite o Nome da Cidade: \n");
    scanf("%s", NomeDaCidade);

    printf("Digite o Número da População \n");
    scanf("%d", &Populacao);

    printf("Digite a Área em km²: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o Número de pontos Turísticos: \n");
    scanf("%d", &NumeroDePontosTuristicos);

    DensidadePopulacional = Populacao / Area;
    PIBperCapita = PIB / Populacao;

    printf("Carta 1: \n");
    printf("Estado: %s\n", Estado);
    printf("Código das Cartas: %s\n", CodigoDacarta);
    printf("Nome da Cidade: %s\n", NomeDaCidade);
    printf("População: %d\n", Populacao);
    printf("Área: %f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Número de pontos Turísticos: %d\n", NumeroDePontosTuristicos);
    printf("Densidade Populacional: %f/km²\n", DensidadePopulacional);
    printf("PIB per Capita: %f/Reais\n", PIBperCapita);
    

    printf("\nDigite o nome do Estado para a segunda carta: \n");
    scanf("%s", Estado);
    printf("Digite o código da carta: \n");
    scanf("%s", CodigoDacarta);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", NomeDaCidade);
    printf("Digite o Número da População: \n");
    scanf("%d", &Populacao);
    printf("Digite a Área em km²: \n");
    scanf("%f", &Area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite o Número de pontos Turísticos: \n");
    scanf("%d", &NumeroDePontosTuristicos);

    DensidadePopulacional = Populacao / Area;
    PIBperCapita = PIB / Populacao;

    printf("Carta 2: \n");
    printf("Estado: %s\n", Estado);
    printf("Código das Cartas: %s\n", CodigoDacarta);
    printf("Nome da Cidade: %s\n", NomeDaCidade);
    printf("População: %d\n", Populacao);
    printf("Área: %f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Número de pontos Turísticos: %d\n", NumeroDePontosTuristicos);
    printf("Densidade Populacional: %f/km²\n", DensidadePopulacional);
    printf("PIB per Capita: %f/Reais\n", PIBperCapita);


    return 0;

}