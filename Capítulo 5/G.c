#include <stdio.h>
#include <math.h>

int main() {
    int expoente;
    int base = 3;

    printf("Resultados das potências de base 3:\n");

    for (expoente = 0; expoente <= 15; expoente++) {
        int resultado = pow(base, expoente);
        printf("%d\n", resultado);
    }

    return 0;
}
