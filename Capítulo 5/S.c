#include <stdio.h>

int main() {
    int dividendo, divisor;
    int quociente = 0;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    while (dividendo >= divisor) {
        dividendo -= divisor;
        quociente++;
    }

    printf("O resultado inteiro da divisão é: %d\n", quociente);

    return 0;
}
