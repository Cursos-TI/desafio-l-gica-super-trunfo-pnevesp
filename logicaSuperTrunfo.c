#include <stdio.h>

int main(){
    int npt = 50;
    float populacao = 2703.000;
    float pib = 73.000000000;
    float area = 314.930;
    char estado[20] = "Ceara"; 
    char codigo[20] = "A01";
    char cidade[30] = "Fortaleza";
    float densidade = populacao / area;
    float pib_per_capita = pib / populacao;


    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %.0f\n", populacao);
    printf("Área: %.3f\n", area);
    printf("PIB: %.0f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", npt);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f hab/km²\n", pib_per_capita);


    int NPT = 20;
    float Area = 434.892;
    float Pib = 98.000000000;
    float Populacao = 1773.000;
    char Estado[20] = "Parana";
    char Codigo[10] = "B02";
    char Cidade[30] = "Curitiba";
    float Densidade = Populacao / Area;
    float PIBCAPITA = Pib / Populacao;

    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %.0f\n", Populacao);
    printf("Área: %.3f\n", Area);
    printf("PIB: %.0f\n", Pib);
    printf("Número de Pontos Turísticos: %d\n", NPT);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade);
    printf("PIB per capita: %.2f hab/km²\n", PIBCAPITA);

    printf("Escolha o atributo que deseja comparar \n");
    printf("1. Área \n");
    printf("2. PIB \n");

   int opcao;
   scanf("%d", &opcao);
    

   switch (opcao) {
    case 1:
        printf("Área de Fortaleza: %.1f km²\n", area);
        printf("Área de Curitiba: %.1f km²\n", Area);
        break;
    case 2:
        printf("PIB de Fortaleza: %.0f bi\n", pib);
        printf("PIB de Curitiba: %.0f bi\n", Pib);
        break;
    default:
        printf("Opção Inválida\n");
}


    if (opcao == 1) {
    if (area > Area)
        printf("Carta 1 (%s) venceu!\n", cidade);
    else if (area < Area)
        printf("Carta 2 (%s) venceu!\n", Cidade);
    else
        printf("Empate!\n");
} else if (opcao == 2) {
    if (pib > Pib)
        printf("Carta 1 (%s) venceu!\n", cidade);
    else if (pib < Pib)
        printf("Carta 2 (%s) venceu!\n", Cidade);
    else
        printf("Empate!\n");
} else {
    printf("Opções incompatíveis ou inválidas!\n");
}
  

    return 0;
}