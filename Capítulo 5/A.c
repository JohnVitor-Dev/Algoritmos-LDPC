#include <stdio.h>

int main() {

    int inicio = 15;
    int fim = 200;
    
    for (int i = inicio; i <= fim; i++) {

        int quadrado = i * i;
        printf("O quadrado de %d é %d\n", i, quadrado);
    }
    
    return 0;
}