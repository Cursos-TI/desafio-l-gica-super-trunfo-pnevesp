#include <stdio.h>

int main(){
    int npt = 50;
    float populacao = 2703.000;
    float pib = 73000000.000;
    float area = 313.008;
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
    printf("Densidade Populacional: %.2f\n", densidade, "hab/km²");
    printf("PIB Per Capita: %.2f\n", pib_per_capita, "reais");


    int NPT = 20;
    float Area = 435.002;
    float Pib = 98000000.000;
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
    printf("Densidade populacional: %.2f\n", Densidade, "hab/km²");
    printf("PIB Per Capita: %.2f\n", PIBCAPITA, "reais");


    printf("Comparação de cartas (Atributo: População):\n\n");


    printf("Carta 1 %s (%s): %2.f\n", cidade, estado, populacao);
    printf("Carta 2 %s (%s): %2.f\n\n", Cidade, Estado, Populacao);

      if (populacao > Populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else if (populacao < Populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", Cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("populacao de Fortaleza = %.3f, Populacao do Paraná = %.3f\n", populacao, Populacao);

  

    return 0;
}