#include <stdio.h>

int main() {
    
    int inicio = 1;
    int fim = 500;
    int soma = 0;

    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            
            soma += i;
        }
    }

    printf("O somatório dos valores pares de %d a %d é: %d\n", inicio, fim, soma);

    return 0;
}
