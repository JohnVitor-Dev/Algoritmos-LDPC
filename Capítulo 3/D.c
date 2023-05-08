#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros_usados;

    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média durante a viagem (em km/h): ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;

    litros_usados = distancia / 12;

    printf("Velocidade média: %.2f km/h\n", velocidade);
    printf("Tempo gasto na viagem: %.2f horas\n", tempo);
    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Litros de combustível utilizados: %.2f L\n", litros_usados);

    return 0;
}
