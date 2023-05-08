#include <stdio.h>

int main() {
    float raio, altura, volume;

    printf("Digite o valor do raio da lata: ");
    scanf("%f", &raio);

    printf("Digite o valor da altura da lata: ");
    scanf("%f", &altura);

    volume = 3.14159 * raio * raio * altura;

    printf("O volume da lata de óleo é: %.2f\n", volume);

    return 0;
}