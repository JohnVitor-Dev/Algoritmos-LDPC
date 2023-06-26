#include <stdio.h>

int main() {
    
    int inicio = 0;
    int fim = 20;

    printf("Valores ímpares:\n");

    for (int i = inicio; i <= fim; i++) {
        
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
