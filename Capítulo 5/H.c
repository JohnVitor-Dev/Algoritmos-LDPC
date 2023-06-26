#include <stdio.h>

int main() {
    
    int B, E;
    int BE = 1;

    printf("Digite o valor da base: ");
    scanf("%d", &B);

    printf("Digite o valor do expoente: ");
    scanf("%d", &E);

    if (B <= 0 || E < 0) {
        printf("Escolha valores positivos\n");
        return 0;
    }

    for (int i = 0; i < E; i++) {
        BE = BE * B;
    }

    printf("O resultado de %d elevado a %d é: %d\n", B, E, BE);

    return 0;
}
