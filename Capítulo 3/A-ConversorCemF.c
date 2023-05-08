#include <stdio.h>

int main() {
    float C, F;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    F = C * 9 / 5 + 32;

    printf("A temperatura em Fahrenheit é: %.2f\n", F);

    return 0;
}
