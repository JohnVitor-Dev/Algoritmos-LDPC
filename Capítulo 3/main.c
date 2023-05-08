#include <stdio.h>

int main() {
    float C, F;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);

    C = ((F - 32) * 5) / 9;

    printf("A temperatura em Celsius é: %.2f\n", C);

    return 0;
}